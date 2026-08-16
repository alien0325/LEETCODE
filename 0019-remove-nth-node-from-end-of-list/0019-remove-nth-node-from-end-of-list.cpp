/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//     ListNode* remove(ListNode* head, int k) {
//     if (k == 1) {
//         ListNode* temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }
//     ListNode* temp = head;
//     ListNode* prev = nullptr;
//     while (k > 1) {
//         prev = temp;
//         temp = temp->next;
//         k--;
//     }
//     prev->next = temp->next;
//     delete temp;
//     return head;
// }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    // int cnt = 0;
    // ListNode* temp = head;
    // while (temp != nullptr) {
    //     cnt++;
    //     temp = temp->next;
    // }
    // int indx = cnt - n + 1;
    // head = remove(head, indx);
    // return head;
    ListNode* fast = head;
    ListNode* slow = head;
    for(int i = 0;i<n;i++){
        fast = fast->next;
    }
    if (fast==nullptr) {
        return head->next;
    }
   
    while(fast->next != nullptr){
        fast = fast->next;
        slow = slow->next; 
    }
    
    ListNode* deleteNode = slow->next;
    slow->next = slow->next->next;
    delete deleteNode;
    return head;
    }
};