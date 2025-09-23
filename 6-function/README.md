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

## 内联函数
```cpp

inline int func(int a, int b) {
    return a + b;
}   
``` 

![alt text](.\images\10.png)
![alt text](.\images\11.png)   
![alt text](.\images\12.png)   

![alt text](.\images\13.png)     


## 函数重载   OverLoading 
> 在C++中 ，同一作用域下，同一个函数名是可以定义多次的，前提是函数的形参列表要不同，这种名字相同但是形参列表不同的函数称之为“重载函数”。  

> 这是C++的重大改进 也是Cpp面向对象的基础    

**注意**

1. 重载的函数，应该是在形参的**数量**或者**类型**上有所不同
2. 因为形参名称在类型中会省略掉，所以仅仅有形参名称不同的函数是一样的函数。
3. 调用函数时，编译器会根据传递的实际实参的个数和类型，自动判断使用哪个函数
4. 主函数不能重载  

> 上面第二点补充说明:  
只有当两个函数的参数类型或者参数数量不同的时候，才能构成重载函数，如果仅仅是因为参数名称不同，而类型和数量都相同的话，这两个函数实际就是一个函数，如果编译的话会被认为是**函数的重定义**。  

![alt text](.\images\14.png)     
![alt text](.\images\15.png) 
![alt text](.\images\16.png)  

![alt text](.\images\17.png)  
![alt text](.\images\18.png) 
![alt text](.\images\19.png)   
![alt text](.\images\20.png)   
![alt text](.\images\21.png)    


# 函数指针 Function pointer 

## 声明函数指针  
函数指针的本身还是指针，现在指向的是函数，函数的类型由函数的返回值以及形参共同决定，跟函数名、形参名没有关系  

```cpp

// 函数指针的声明
返回类型 (*指针变量名)(参数列表);
//解引用之后就可以直接当作函数调用了

```    

![alt text](.\images\23.png)  
![alt text](.\images\22.png)    


