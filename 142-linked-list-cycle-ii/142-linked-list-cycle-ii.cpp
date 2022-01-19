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
        ListNode *slow = head;
        ListNode *fast = head;
        int cycleFlag = 0;
        
        if(fast == NULL){ // the list is empty
            return NULL;
        }
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if (slow == fast){
                cycleFlag = 1; // there is a cycle
                break;
            }
        }
        
        if(cycleFlag == 0){ //there isn't a cycle 
            return NULL;    
        }
        
        slow = head; //return the slow pointer to the start of the list
        while(fast != slow){ //move the same distance to meet on the tail
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};