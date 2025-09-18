# 流程控制语句 Control Flow Statements

## 语句 Statement
Cpp中 一句代码就表示一个语句，一般语句是以';'结束的。  
  
简单语句   表达式语句 复合语句（流程控制语句 ） -->compound statement 也叫做块 block  

![alt text](.\images\1.png)  
## 条件分支语句
![alt text](.\images\2.png)  
```cpp
#include<iostream>
using namespace std;
int main(){
    cout << "Please input your age:" << endl;
    int age;
    cin >> age;
    if (age < 18){
        cout << "you are a minor." << endl;
    }
    else if (age >= 18 && age < 65){
        cout << "you are an adult." << endl;
    }
    else{
        cout << "you are a senior." << endl;
    } // 如果只有一个语句 可以省略大括号 但是不建议 

    return 0;
}
```  
![alt text](.\images\3.png)  

## switch 语句
```cpp
#include<iostream>
using namespace std;
int main(){
    cout << "Please input your answer:" << endl;
    int ans;
    cin >> ans;
    switch (ans)
    {
    case A:
        cout << "you are wrong." << endl;
        break;
    case B:
        cout << "you are wrong." << endl;
        break;
    case C:
        cout << "you are right." << endl;
        break;
    case D:
        cout << "you are wrong." << endl;
        break;
    default:
        cout << "you are stupid silly." << endl;
        break;
    }
    return 0;
}
```  
![alt text](.\images\4.png)  

## 循环语句
Cpp语法中循环语句包含 while ， do while , for 循环  
```cpp
#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while (i < 10){
        cout << i << endl;
        i++;   //循环体  循环变量控制是否执行循环体
    }

    cout << "Final i = " << i << endl;

    // do while   先执行循环体，再判断条件 至少会执行一次
    int j = 10;
    do{
        cout << j << endl;
        j--;
    }while (j >= 0);
    cout << "Final j = " << j << endl;
    // for
    for (int k = 0; k < 10; k++){
        cout << k << " ";
    }

    cout << endl;

    for (int m = 10; m > 0;){
        cout << m << " ";
        m--;
    }

    //范围for循环
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int n : arr){
        cout << n << " ";
    }
    cout << endl;


    return 0;
}

```  
**循环也是可以嵌套的**

```cpp
# include<iostream>
using namespace std;
int main(){
    // 乘法口诀表
    for (int i = 1;i <= 9 ; i ++){
        for (int j = 1; j <= i ;j ++){
            cout << j << " * " << i << " = " << i *j << "\t";
        }
        cout << endl;
    }
    return 0;
}

```

## 跳转语句
Cpp中 跳转语句有 break ， continue ， goto 语句  
  
### ****break**

 在循环中使用break,可以提前结束当前循环

 ### **continue**
   
在循环中使用continue,可以提前结束当前循环的一次迭代,继续执行下一次迭代

###** goto **

![alt text](.\images\5.png)  

```cpp
#include<iostream>
using namespace std;
int main(){

    int x = 0;
start:
    cout << "Start" << endl;

    do {
        x++;
        cout << x << endl;
    } while (x < 10);

    if (x < 20){
        goto start;   //跳转到start标签处
    }

    return 0;
}
```  
**
goto语句 可以跳转到程序中的任意位置 但是不建议使用 因为会导致程序的流程变得复杂 可读性变差
**



