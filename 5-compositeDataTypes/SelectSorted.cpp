#include<iostream>
using namespace std;

int main(){
    cout << "please input the size of array:" << endl;
    int n;
    cin >> n;
    cout << "Please input the array of you will sort:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //手动实现选择排序
    /*
    选择排序 selectSort 原理 algorithm
    每次从未排序的元素中选择最小的元素，放到已排序的元素的末尾
    时间复杂度 O(n^2)
    空间复杂度 O(1)
    */
    for (int i = 0;i < n;i++){
        int min_index = i;
        for (int j = i + 1; j < n ; j ++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        //swap
        int tmp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = tmp;
    }
    cout << "The sorted array is:" << endl;
    for (int num : arr){
        cout << num << " ";
    }
    cout << endl;

}