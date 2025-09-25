#include "common.hpp"
#include "account_item.hpp"


void loadAccountDataFromFile(vector<AccountItem> &items){
    ifstream ifs (FILEPATH);
    AccountItem item;
    while(ifs >> item.itemType >> item.amount >> item.detail >> item.date){
         items.push_back(item);
    }
    ifs.close();
}


void addAccountItem(vector<AccountItem> &items){
    showAccountMenu();
    while (true)
    {   
        char key =  readUserInput(3);
        if (key == '3')
        {
            break;
        } 
        AccountItem item;
        auto date = chrono::system_clock::now();
        item.date = chrono::system_clock::to_time_t(date);
        switch (key)
        {
        case '1':
            /* code */
            item.itemType = INCOME;
            break;
        case '2':
            /* code */
            item.itemType = EXPENDITURE;
            break;
        case '3':
            cout << "Back to main menu." << endl;
            break;
        default:
            break;
        }
        cout << "Please enter the account informations:(amount detail)" << endl;
        cout << "Please enter the account amount: ";
        string amount;
        getline(cin >> ws, amount);
        item.amount = stod(amount);
        cout << "Please enter the account detail: ";
        getline(cin >> ws, item.detail);
        items.push_back(item);
        ofstream ofs (FILEPATH, ios::app);
        ofs << item.itemType << " " << item.amount << " " << item.detail << " " << item.date << endl;
        ofs.close();
        cout << "Please enter your choice again: " ;
    }
}

void searchAccountItem(vector<AccountItem> &items){
    showSearchMenu();
    while(true){
        char key = readUserInput(4);
        if(key == '4'){
            break;
        }
        switch (key)
        {
        case '1':
            ShowTotalAllAccount(items);
            break;
        case '2':
            ShowTotalIncome(items);
            break;
        case '3':
            ShowTotalExpenditure(items);
            break;
        case '4':
            break;
        default:
            break;
        }
        cout << "Please enter your choice again: " ;
    }
}

void ShowTotalAllAccount(vector<AccountItem> &items){
    cout << "Account list:" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| Type | Amount | Detail | Date |" << endl;
    for (auto item : items)
    {
        cout << item.itemType << " \t" << item.amount << " \t" << item.detail << " \t" << item.date << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
}

void ShowTotalIncome(vector<AccountItem> &items){
    double total = 0;
    for (auto item : items)
    {
        if (item.itemType == INCOME)
        {
            total += item.amount;
        }
    }
    cout << "Total income is: " << total << endl;
}

void ShowTotalExpenditure(vector<AccountItem> &items){
    double total = 0;
    for (auto item : items)
    {
        if (item.itemType == EXPENDITURE)
        {
            total += item.amount;
        }
    }
    cout << "Total expenditure is: " << total << endl;
}