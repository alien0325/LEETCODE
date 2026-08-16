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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL)return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next!=NULL){
            len++;
            tail = tail->next;
        }
        k = k%len;
        if(k==0)return head;
        tail->next = head;
        int n = len - k;
        ListNode* temp2 = head;
        while(n>1){
            temp2 = temp2->next;
            n--;
        }
        head = temp2->next;
        temp2->next = NULL;
        return head;
    }
};