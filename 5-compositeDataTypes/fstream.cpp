/*
fstream 头文件 是文件IO
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    //1. 逐单词读取
    string word;
    cout << "according to the word to read and output:" << endl;
    while(infile >> word){
        cout << word << endl;
        // 写入到输出文件
        outfile << word << endl;
    }
    //2. 逐行读取
    string line;
    cout << "according to the line to read and output:" << endl;
    while(infile >> line){
        cout << line << endl;
        // 写入到输出文件
        outfile << line << endl;
    }

    //3. 逐字符读取
    char c;
    cout << "according to the char to read and output:" << endl;
    while(infile.get(c)){
        cout << c << endl;
        // 写入到输出文件
        outfile.put(c);
    }
    return 0;
}