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