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
    bool isPalindrome(ListNode* head) {
        // the burforce approach will be to travel linked list once and then add the values in the array and check whether the array is palindrome or not
       
        
        //code to get the mid element 
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev;
        ListNode*  next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
       
        prev = slow;
        slow = slow->next;
        prev->next = NULL;
        
        while(slow){
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        fast = head , slow = prev;
        while(slow){
            if(fast->val !=slow->val)return 0;
            slow = slow->next;
            fast = fast->next;
        }
        return 1;
    }
};