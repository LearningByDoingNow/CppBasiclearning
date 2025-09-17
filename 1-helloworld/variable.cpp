#include <iostream>
#include <string>
using namespace std;

string name  = "global variable";
int age;  // 不能在函数体外进行单独赋值 比如  int age; age = 18; 这样是错误的  但是可以 int age = 18; 这样是正确的，前者可以在函数体内实现

int main(){
    string name;
    name = "I love the University Chinese Adademy of Science";
    cout << name << endl;
    cout << "loop print more seconds ::" << endl;
    for(int i = 0 ; i < 5 ;i++){
        cout << name << endl;
    }
    return 0;
}
