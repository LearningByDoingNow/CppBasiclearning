#include<iostream>
using namespace std;

int main(){
    //1. int 赋值给 bool
    bool flag = 25;
    cout << flag << endl; // 1  true  自动类型转换
    //2. bool 赋值给 int
    int a = true;
    int b = false;
    cout << b << endl; // 0
    cout << a << endl; // 1
    //3. 浮点类型赋值给整型
    int c = 3.99;
    cout << c << endl; // 3  自动类型转换 截断小数部分
    //4. 整型赋值给浮点类型
    float d = 3;
    cout << d << endl; // 3  自动类型转换
    //5. char 和 int 之间的转换
    char e = 'A';
    int f = e; // char 自动类型转换为 int
    cout << f << endl; // 65  ASCII 码值
    //6. 复制超出了整型范围
    unsigned short  untrans = 65536 ; // 2 字节  65536 超出范围
    cout << untrans << endl; // 0  溢出
    short unshort2 = 65536; // 2 字节  65536 超出范围
    cout << unshort2 << endl; // 0  溢出

    //7. 赋值超出范围
    return 0;
}