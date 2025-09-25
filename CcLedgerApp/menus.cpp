#include "common.hpp"

void showMainMenu(){
    system("cls");  // clear terminal
    cout << "----------------------------------------------------------"<< endl;
    cout << "|========= Welcome to use the CC Account Tool  =========|" << endl;
    cout << "|                                                       | " << endl;
    cout << "| ****************** 1. Account Menu  ******************| " << endl;
    cout << "| ****************** 2. Search Menu  *******************| " << endl;
    cout << "| ****************** 3. Quit         *******************| " << endl;
    cout << "|                                                       | " << endl;
    cout << "---------------------------------------------------------"<< endl;
    cout << "Please enter your choice: " ;

}

void showAccountMenu(){
    cout << "----------------------------------------------------------"<< endl;
    cout << "|=================== Select Account Type  ===============|" << endl;
    cout << "|                                                        | " << endl;
    cout << "| ****************** 1. Income  *************************| " << endl;
    cout << "| ****************** 2. Expenditure *********************| " << endl;
    cout << "| ****************** 3. Back MainMenu  ******************| " << endl;
    cout << "|                                                        | " << endl;
    cout << "---------------------------------------------------------"<< endl;
    cout << "Please enter your choice: " ;
}



void showSearchMenu(){
    cout << "----------------------------------------------------------"<< endl;
    cout << "|=================== Search Menu  ========================|" << endl;
    cout << "|                                                         | " << endl;
    cout << "| ****************** 1. total all Account  ***************| " << endl;
    cout << "| ****************** 2. total Income  ********************| " << endl;
    cout << "| ****************** 3. total Expenditure ****************| " << endl;
    cout << "| ****************** 4. Back MainMenu  *******************| " << endl;
    cout << "|                                                         | " << endl;
    cout << "---------------------------------------------------------"<< endl;
    cout << "Please enter your choice: " ;
}