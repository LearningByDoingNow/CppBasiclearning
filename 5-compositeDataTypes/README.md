# 复合数据类型 Composite Data Types

## 数组 Array
>数组是最常用的复合数据类型，数组可以存储多个**相同类型的数据**。

![array define](.\images\1.png)  
```cpp
#include <iostream>
using namespace std;
int main(){
    //数组定义
    //1
    int arr_1[5];
    //2
    float arr_2[3] = {1.1, 2.2, 3.3};
    //3 
    string arr_3[5] = {"a", "b", "c"}; //未占用空间补0
    //4
    double arr_4[] = {1.1, 2.2, 3.3, 4.4};

}
```  
![alt text](.\images\2.png)   

### 数组访问
1. 访问数组元素  ： 索引 / 下标  数组名[索引] ，如果超出数组范围，那么会导致**未定义行为**。 索引范围是 **0~数组长度-1**  
2. 数组的大小  
>数组的整体空间 = 数组元素的空间 * 元素个数  
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr_1[5] = {1,2,3,4,5};
    cout << "arr_1 size : " << sizeof(arr_1) << endl; // 20
    cout << "arr_1 element size : " << sizeof(arr_1[0]) << endl; // 4
    cout << "arr_1 length : " << sizeof(arr_1) / sizeof(arr_1[0]) << endl; // 5
}
```   
**数组遍历**  
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr_1[5] = {1,2,3,4,5};
    for(int i = 0;i < sizeof(arr_1) / sizeof(arr_1[0]);i++){
        cout << arr_1[i] << endl;
    }
}
```   
范围for循环  
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr_1[5] = {1,2,3,4,5};
    for(int i : arr_1){
        cout << i << endl;
    }
}
```  
### 多维数组
![多维数组](.\images\3.png)  
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr_2d[2][3][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    }
}
```  

**访问多维数组**
```cpp
#include <iostream>
using namespace std;
int main(){
    int arr_2d[2][3][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {13,14,15,16},
            {17,18,19,20},
            {21,22,23,24}
        }
    };
    // 访问多维数组
    cout << arr_2d[0][0][0] << endl; // 1
    cout << arr_2d[1][2][3] << endl; // 24
}
```  

```cpp
//范围for循环遍历多维数组
#include <iostream>
using namespace std;
int main(){
    int arr_2d[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for (auto& row:arr_2d){
        for (auto& elem:row){
            cout << elem << endl;
        }
    }

}
```  
### 选择排序
![alt text](.\images\4.png)



