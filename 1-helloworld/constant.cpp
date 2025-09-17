#include<iostream>
using namespace std;

/*
常量是不能修改的量
常量分为：
1. 符号常量 (宏常量)
2. const 常量
*/
#define PI 3.1415926  // 宏常量 宏定义  一般写在头文件中  不推荐
const int days = 7; // const 常量  推荐使用

int main(){
    const double e = 2.718281828459; // const 常量  推荐使用
    cout << "PI = " << PI << endl;
    cout << "days = " << days << endl;
    cout << "e = " << e << endl;
    return 0;
}