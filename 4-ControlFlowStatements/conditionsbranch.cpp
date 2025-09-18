#include<iostream>
using namespace std;
int main(){
    cout << "Please input your age:" << endl;
    int age;
    cin >> age;
    if (age < 18){
        cout << "you are a minor." << endl;
    }
    else if (age >= 18 && age < 65){
        cout << "you are an adult." << endl;
    }
    else{
        cout << "you are a senior." << endl;
    }

    return 0;
}