# 函数  

![alt text](.\images\1.png)    
![alt text](.\images\2.png)    
![alt text](.\images\3.png)   
![alt text](.\images\4.png)  
![alt text](.\images\5.png)  
![alt text](.\images\6.png) 



**函数声明**
```
返回类型 函数名(参数列表);
```  


## 分离式编译和头文件  
- 函数统一写在 一个 cpp文件中 
- 头文件 写函数的声明
- 源文件 调用函数 

> 头文件 加 `#paragm once `确保头文件被多次引用，其内容也只是编译一次  


## 参数传递 
* 传指针参数 `voild func(int *p);    func(&a); ` 
* 传引用参数 `void func(int &a);      func(a);`  高效

**为什么引用参数比指针参数更高效？**
```

指针传参： 传递的是变量的内存地址，函数通过这个地址访问原始数据。

引用传参： 引用是变量的别名，在语法上更像直接操作原始变量，但底层实现通常也是通过地址。
```
![alt text](.\images\7.png)  


![alt text](.\images\8.png)  

![alt text](.\images\9.png)
