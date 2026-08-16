/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // unordered_map<ListNode*,int>hash;
        // ListNode* temp = head;
        // int i = 0;
        // while(temp!=nullptr){
        //     if(hash.find(temp)!=nullptr){
        //         return temp;
        //     }
        //     hash[temp] = i;
        //     i++;
        //     temp = temp->next;
        // }
        // return nullptr;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};