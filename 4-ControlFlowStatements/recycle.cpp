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