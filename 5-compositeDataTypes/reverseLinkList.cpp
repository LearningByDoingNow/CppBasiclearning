#include<iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode *next;
};

void printLinkList(ListNode *head){
    ListNode *pNode = head;
    while(pNode != nullptr){
        cout << pNode -> val;
        if (pNode -> next != nullptr){
            cout << " --> ";
        }
        pNode = pNode -> next;
    }
    cout << endl;
}

int main(){

    ListNode *head = new ListNode;
    head -> val = 1;
    head -> next = nullptr;
    ListNode *currNode = head;
    //构建linklist
    for(int i = 0;i < 5 ;i ++){
        ListNode *ln = new ListNode;
        ln -> val = i + 2;
        ln -> next = nullptr;
        currNode -> next = ln;
        currNode = ln;
    }
    // print LinkLisat
    printLinkList(head);
    //reverse linklist
    ListNode *prevNode = nullptr;
    ListNode *currNode2 = head;
    while(currNode2 != nullptr){
        ListNode *tmp = currNode2 -> next;
        currNode2 -> next = prevNode;
        prevNode = currNode2;
        currNode2 = tmp;
    }
    // print reversed LinkLisat
    printLinkList(prevNode);
    return 0;
}