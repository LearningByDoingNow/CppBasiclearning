#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << sizeof(a) << endl; // 4 字节
    short b = 20;
    cout << sizeof(b) << endl; // 2 字节
    char c = 'c';
    cout << sizeof(c) << endl; // 1 字节
    long d = 30;
    cout << sizeof(d) << endl; // 4 字节
    long long e = 40;
    cout << sizeof(e) << endl; // 8 字节

    // 无符号类型 unsigned 特定是指不能表示负数的类型 范围是 0 ~ 正数最大值
    unsigned int f = 50;
    cout << sizeof(f) << endl; // 4 字节


    char g = 97; // ASCII 码值 97 对应字符 'a'
    cout << g << endl; // a
    char h = 98; // ASCII 码值 98 对应字符 'b'
    cout << h << endl; // b
    cout << (g + 1)<<endl; // 98  ASCII 码值 98 对应字符 'b'

    // 浮点操作数
    float i = 3.14f; // 4 字节
    cout << sizeof(i) << endl;

    double j = 3.14; // 8 字节
    cout << sizeof(j) << endl;

    long double k = 3.14; // 16 字节
    cout << sizeof(k) << endl;

    double ee = 2.78E-5;
    cout << ee << endl; // 2.78E-5   
    double ff = 2.78e5;
    cout << ff << endl; // 278000

    //字面常量
    cout << 10 << endl; // 整型字面常量
    cout << 3.14 << endl; // 浮点型字面常量
    cout << 010 << endl; // 八进制字面常量 8 进制以 0 开头
    cout << 0x10 << endl; // 十六进制字面常量 16 进制以 0x 开头
    cout << sizeof(3.14f) << endl; // 浮点型字面常量 3.14f 或 3.14F
    cout << 3.14L << "  type:\n " << sizeof(3.14L) << endl; // 长双精度浮点型字面常量 3.14L 或 3.14l
    
    //字符字面常量
    cout << 'a' << endl; // 字符字面常量
    cout << sizeof('a') << endl; // 4 字节  'a' 实际上是一个整型字面常量
    cout << '\n' << endl; // 转义字符字面常量 
    // 字符串字面常量
    cout << "Hello, C++" << endl; // 字符串字面常量
    cout << sizeof("Hello, C++") << endl; // 11 字节


    return 0;
}