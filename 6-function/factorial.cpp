#include<iostream>
using namespace std;

int factorial(int n){
    return n == 1 ? 1 : n * factorial(n - 1);
}

int main(){
    int n = 5;
    int result = factorial(n);
    cout << "factorial(" << n << ") = " << result << endl;
    return 0;
}