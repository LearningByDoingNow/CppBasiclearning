# Cpp 中的 操作运算符  
  
## 优先级和结合律  

![alt text](.\images\image.png)
## 算术运算符
![alt text](.\images\2.png)  
![alt text](.\images\3.png)
## 赋值运算符
![alt text](image.png)
## 复合运算符和递增递减运算符
![alt text](.\images\4.png)  
![alt text](.\images\5.png)   
  
    
  
  如果 是前置的递增递减 那么就先执行运算符然后赋值  
  如果 是后置的递增递减 那么就先使用这个数值 然后再执行运算符  
  case : 
```text
a ++ 就是先将a赋值给其他variable 然后再自增  
++a 就是先执行自增1然后再将自增后的结果赋值给其他variable
```
```cpp
// 递增
int a = 1;
a ++;
++ a;
a-- ;
--a;
```
![alt text](.\images\6.png)
## 关系运算符
![alt text](.\images\7.png)
![alt text](.\images\8.png)
## 逻辑运算符
![alt text](.\images\9.png)
![alt text](.\images\10.png)
![alt text](.\images\11.png)
## 条件运算符
![alt text](.\images\12.png)
## 位运算符  
**基于二进制位进行左移或者右移**
![alt text](.\images\13.png)  
![alt text](.\images\14.png)  
## 位逻辑运算符
![alt text](.\images\15.png)  
## 类型转换
```cpp
    // 注意隐式类型转换
    int c = -1;
    cout << ((0 < c < 100) ? "true" : "false") << endl;
    // 先运算 0 < c  is false
    // 再运算 false < 100  is true ------> so res is true
```
![alt text](.\images\16.png)  
![alt text](.\images\17.png)    

![alt text](.\images\18.png)   