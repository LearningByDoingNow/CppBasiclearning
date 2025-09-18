#include<iostream>
#include<string>
using namespace std;
int main(){
    string str[5] = {"Hello","World","This","is","C++"};
    int arr[5];
    for(int j = 0;j < 5;j++){
        arr[j] = j;
        cout << arr[j] << endl;
    }

    char c[5];
    cout << "char =" << c << endl;
    return 0;
}