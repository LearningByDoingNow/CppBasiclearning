#include<iostream>
#include<string>
using namespace std;

int main(){

    int a = 10;
    //取地址   & 取a的内存地址  赋值给p 然后 *p 就是 a 对应的数据
    // & 称为取地址符 * 称为 解引用符
    int *p = &a;
    //解引用
    cout << "*p------>" <<*p << endl;

    cout << "p ------>" << p << endl;


    return 0;
}
