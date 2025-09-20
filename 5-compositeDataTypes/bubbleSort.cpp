# include<iostream>
using namespace std;


void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    cout << "Please input the number of elements:" << endl;
    int n;
    cin >> n;
    cout << "Please enter some number to start bubble sort:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //bubble sort
    for (int i = 0;i < sizeof(arr)/sizeof(arr[0]) -1 ; i ++){
        for (int j = 0;j < n - 1 - i;j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
        }
        cout << "The " << i + 1 << " round result is: ";
        for (int k = 0;k < n;k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}