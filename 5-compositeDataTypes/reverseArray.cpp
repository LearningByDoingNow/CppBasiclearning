#include<iostream>
#include<string>
#include<vector>
using namespace std;

void reverseArray(int arr[],int length){
    for (int i = 0; i < length; i++) {
        cout << arr[i] << "  " ;
    }
    cout << endl;
}

int main(){
    const int length = 8;
    int arr[length] = {1,2,3,4,5,6,7,8};

    // 1. 翻转数组
    int newArr[length];
    for(int i = 0; i < length ; i++) {
        newArr[i] = arr[length -1 - i];
    }
    cout << "reverseArray:" << endl;
    reverseArray(newArr,length);

    //2. 双指针
    int *p1 = newArr;
    int *p2 = newArr + length - 1;
     while(p1 < p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
     }
     cout << "reverseArray:" << endl;
    reverseArray(newArr,length);
    
    return 0;
}