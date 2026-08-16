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
    ListNode* findkthnode(ListNode* temp, int k){
        k -=1;
        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp; 
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp = head;
       ListNode* NextNode;
       ListNode* prev = NULL;
       while(temp!=NULL){
        ListNode* kthnode = findkthnode(temp,k);
        if(kthnode == NULL){
            if(prev) prev->next = temp;
            break;
        }
        NextNode = kthnode->next;
        kthnode->next = NULL;
        reverse(temp);
        if(temp == head) head = kthnode;
        else{
            prev->next = kthnode;
        }
        prev = temp;
        temp = NextNode;
       }
       return head;
    }
};