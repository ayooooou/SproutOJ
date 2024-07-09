#include <iostream>
#include <cstring> 
#include <cstddef>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* mergeTwoLists(Node* head1, Node* head2) {
    // 如果其中一個鏈結串列為空，直接返回另一個鏈結串列
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    // 創建一個虛擬頭節點，方便處理
    Node dummy;
    Node* tail = &dummy;
    dummy.next = nullptr;

    // 遍歷兩個鏈結串列，選擇較小的節點添加到結果鏈結串列中
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    // 如果其中一個鏈結串列還有剩餘節點，直接連接到結果鏈結串列的末尾
    if (head1 != nullptr) {
        tail->next = head1;
    } else {
        tail->next = head2;
    }

    // 返回結果鏈結串列的頭節點
    return dummy.next;
}
