# VS Code 调试配置详解：占位符与语言差异

## 一、调试配置中的关键占位符

### 核心路径占位符
| **占位符** | **含义** | **示例值** | **典型使用场景** |
|------------|----------|------------|------------------|
| `${file}` | 当前活动文件的完整路径 | `C:\Project\src\main.cpp` | 编译当前打开的文件 |
| `${fileDirname}` | 当前文件所在目录路径 | `C:\Project\src` | 设置工作目录或输出路径 |
| `${fileBasename}` | 当前文件名（含扩展名） | `main.cpp` | 文件操作相关任务 |
| **`${fileBasenameNoExtension}`** | 当前文件名（不含扩展名） | `main` | 生成可执行文件名 |
| `${workspaceFolder}` | 工作区根目录完整路径 | `C:\Project` | 引用项目根目录资源 |
| `${workspaceFolderBasename}` | 工作区文件夹名称 | `Project` | 自定义任务命名 |

### 进阶占位符
| **占位符** | **含义** | **使用场景** |
|------------|----------|--------------|
| `${relativeFile}` | 相对于工作区根目录的文件路径 | 多文件项目引用 |
| `${relativeFileDirname}` | 相对于工作区根目录的目录路径 | 模块化项目结构 |
| `${lineNumber}` | 当前光标行号 | 条件断点配置 |
| `${selectedText}` | 当前选中的文本内容 | 快速调试代码段 |

---

## 二、C++ 与 Python 调试的区别对比

| **特性** | **C++ 调试** | **Python 调试** |
|----------|--------------|----------------|
| **编译要求** | 必须预编译（`-g`生成调试信息） | 直接解释执行，无需编译 |
| **调试器** | GDB/LLDB（系统级调试器） | Python Debugger（内置调试器） |
| **配置文件** | 需要 `launch.json` + `tasks.json` | 只需 `launch.json` |
| **启动流程** | 需配置 `preLaunchTask` 编译任务 | 直接执行源文件 |
| **变量检查** | 需手动添加监视，复杂结构受限 | 自动显示所有变量，支持对象可视化 |
| **内存访问** | 支持直接查看/修改内存 | 无法直接访问内存 |
| **多线程调试** | 完整线程级控制和堆栈查看 | 受GIL限制，线程调试较复杂 |
| **典型配置复杂度** | 需手动配置编译器路径 | 自动检测解释器，配置简单 |

---

## 三、占位符使用场景对比

| **占位符** | **C++ 典型用法** | **Python 典型用法** |
|------------|------------------|---------------------|
| `${file}` | `g++ ${file} -o ...` | `"program": "${file}"` |
| `${workspaceFolder}` | `"cwd": "${workspaceFolder}"` | 设置模块导入路径 |
| `${fileBasenameNoExtension}` | `"program": "${fileBasenameNoExtension}.exe"` | 较少使用（无需编译） |
| `${relativeFile}` | 多文件项目引用 | 模块化项目导入路径 |

---

## 四、路径处理技巧

### 1. 跨平台兼容写法  

- Windows: `bin\main.exe`
- Linux/macOS: `bin/main`

### 2. 组合使用示例  
```json
"args": [

"--input=${fileDirname}/data/input.txt",

"--output=workspaceFolder/output/{fileBasenameNoExtension}.out"

]
```

### 3. 特殊变量扩展
| **变量** | **功能** | **示例** |
|----------|----------|----------|
| `${env:VAR}` | 访问环境变量 | `"${env:PATH}"` |
| `${input:variableID}` | 调试时请求用户输入 | `"${input:enterPort}"` |
| `${command:CommandID}` | 执行VS Code命令 | `"${command:workbench.action.build}"` |

---

## 五、常见问题解答

### Q1: 为什么 `${file}` 有时指向错误文件？
A: 该变量始终指向**当前活动编辑器**中的文件，调试前请确保目标文件标签页已激活

### Q2: 工作区未打开时占位符如何工作？
A: `${workspaceFolder}` 会回退到文件所在目录，`${workspaceFolderBasename}` 变为空字符串

### Q3: 如何查看占位符的实际值？
A: 在调试控制台输入：console.log(__dirname); // 查看实际解析路径
### Q4: 多根工作区如何处理？
A: 使用指定工作区语法：
```json
"cwd": "${workspaceFolder:Backend}"
```