#include "common.hpp"

// define account item
struct AccountItem{
    string itemType;
    double amount;
    string detail;
    time_t date;
};


// define account item function 


// load account data from file
void loadAccountDataFromFile(vector<AccountItem> &items);

// save account data to file
void addAccountItem(vector<AccountItem> &items);

// query account data
void searchAccountItem(vector<AccountItem> &items);


void ShowTotalAllAccount(vector<AccountItem> &items);
void ShowTotalIncome(vector<AccountItem> &items);
void ShowTotalExpenditure(vector<AccountItem> &items);

