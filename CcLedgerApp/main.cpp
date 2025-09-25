#include "common.hpp"
#include "account_item.hpp"

int main(){

    //1. load account data
    vector<AccountItem> items;
    loadAccountDataFromFile(items);
    bool quit = false;
    while(!quit){
        //2. show main menu
        showMainMenu();
        //3. read user input
        char key = readUserInput(3);
        char quitKey;
        switch(key){
            case '1':
                // add acount item
                addAccountItem(items);
                break;
            case '2':
                //search account item
            
                searchAccountItem(items);
                break;
            case '3':
                //quit
                cout << "quit ? (y/n) :" << endl;
                quitKey = readQuitConfirm();
                if(quitKey == 'y'){
                    quit = true;
                }
                break;
            default:
                break;
        }

    }

    return 0;
}
