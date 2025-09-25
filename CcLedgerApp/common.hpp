#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<chrono>
using namespace std;

#define INCOME "income"
#define EXPENDITURE "expenditure"
#define FILEPATH "account.txt"

// define common function

void showMainMenu();


void showAccountMenu();
 
void showSearchMenu();


char readUserInput(int options);

char readQuitConfirm();