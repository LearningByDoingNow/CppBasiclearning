#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    cout << "Input some numbers to push into the vector, end with -1:" << endl;
    int num;
    cin >> num;
    while(num != -1){
        v1.push_back(num);
        cin >> num;
    }
    for (int i = 0;i < v1.size();i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(auto e : v1){
        cout << e << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for(it = v1.begin();it != v1.end();it++){
        cout << *it << " ";
    }   
    cout << endl;
    return 0;
}