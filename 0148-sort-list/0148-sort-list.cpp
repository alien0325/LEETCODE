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
    ListNode* FindMiddle(ListNode* head){
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* mergesort(ListNode* l1,ListNode* l2){
        // ListNode* t1 = l1;
        // ListNode* t2 = l2;
        ListNode* dummynode = new ListNode(-1);
        ListNode* temp = dummynode;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                temp->next = l1;
                temp = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                temp = l2;
                l2 = l2->next;
            }
        }
        if(l1) temp->next = l1;
        else temp->next = l2;
        
        return dummynode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* middle = FindMiddle(head);
        ListNode* right = middle->next;
        middle->next = NULL;
        ListNode* left = head;
        left = sortList(left);
        right = sortList(right);
        return mergesort(left,right);
    }
};