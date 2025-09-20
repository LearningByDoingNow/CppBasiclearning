#include<iostream>
#include<string>
using namespace std;
int main(){

    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + str2;
    cout << "string concat: ";
    cout << str3 << endl;

    cout << "string length:  ";
    cout << str3.length() << endl;

    cout << "vist string char:  " ;
    cout << str1[0] << "\t" << str3.at(2) << "\t" << *(str3.begin() + 2) << endl;


    /*
    string str;
    cin >> str;
    cout << "You input string is: " << str << endl;
    */


    cout << "getline :" << endl;
    getline(cin,str2);
    cout << "You input string is: " << str2 << endl;
    cout << "You input string length is: " << str2.length() << endl;

    return 0;
}