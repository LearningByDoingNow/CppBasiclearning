#include "common.hpp"

char readUserInput(int options){
    string str;
    while(
        true
    ){
        cin >> str;
        if(str.length() == 1 && str[0] >= '1' && str[0] <= '0' + options){
            return str[0];
        }
        cout << "Invalid input, please enter again: ";
    }
}


char  readQuitConfirm(){
    string str;
    while(
        true
    ){
        cin >> str;
        if(str.length() == 1 && (tolower(str[0]) == 'y' || tolower(str[0]) == 'n')){
            return str[0];
        }
        cout << "Invalid input, please enter again: ";
    }
}