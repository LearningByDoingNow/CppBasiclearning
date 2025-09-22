#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int &b = a;
    int *p = &a;
    cout << "a:" << sizeof(a) << endl;
    cout << "b:" << sizeof(b) << endl;
    cout << "p:" << sizeof(p) << endl;

    return 0;
}
