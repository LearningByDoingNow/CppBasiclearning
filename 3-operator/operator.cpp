#include<iostream>

using namespace std;

int main(){

    int a=10, b=20;
    cout<<"a = "<<a<<", b = "<<b<<endl;

    // Arithmetic Operators
    cout<<"a + b = "<<a + b<<endl; // Addition
    cout<<"a - b = "<<a - b<<endl; // Subtraction
    cout<<"a * b = "<<a * b<<endl; // Multiplication
    cout<<"b / a = "<<b / a<<endl; // Division
    cout<<"b % a = "<<b % a<<endl; // Modulus

    // Relational Operators
    cout<<"a == b: "<<(a == b)<<endl; // Equal to
    cout<<"a != b: "<<(a != b)<<endl; // Not equal to
    cout<<"a > b: "<<(a > b)<<endl;   // Greater than
    cout<<"a < b: "<<(a < b)<<endl;   // Less than
    cout<<"a >= b: "<<(a >= b)<<endl; // Greater than or equal to
    cout<<"a <= b: "<<(a <= b)<<endl; // Less than or equal to

    // Logical Operators
    bool x = true, y = false;
    cout<<"x && y: "<<(x && y)<<endl; // Logical AND
    cout<<"x || y: "<<(x || y)<<endl; // Logical OR
    cout<<"!x: "<<(!x)<<endl;           // Logical NOT

    // Bitwise Operators
    cout<<"a & b: "<<(a & b)<<endl;   // Bitwise AND
    cout<<"a | b: "<<(a | b)<<endl;   // Bitwise
    cout<<"a ^ b: "<<(a ^ b)<<endl;   // Bitwise XOR
    cout<<"~a: "<<(~a)<<endl;         // Bitwise NOT
    // Left Shift
    cout<<"a << 1: "<<(a << 1)<<endl;
    // Right Shift
    cout<<"b >> 1: "<<(b >> 1)<<endl;


    // 注意隐式类型转换
    int c = -1;
    cout << ((0 < c < 100) ? "true" : "false") << endl;
    return 0;

}