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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL || list2 == NULL){
            if(list1 == NULL){
                return list2;
            }
            else if(list2 == NULL) {
                return list1;
            }
        }
        
        ListNode* curr = NULL;
        ListNode* result = NULL;

        if(list1 -> val > list2 -> val){ /* result is points to the smaller as a start. */
            result = list2;
            list2 = list2 -> next;
        }
        else{
            result = list1;
            list1 = list1 -> next;
        }
        
        curr = result;
    
        while(list1!=NULL &&  list2!=NULL){
            if(list1 -> val < list2 -> val){
                curr -> next = list1;
                list1 = list1 -> next;
            }
            else{
                curr -> next = list2;
                list2 = list2 -> next;
            }
            curr = curr -> next;
        }
		
        if(!list1){
            curr -> next = list2;
        } 
        else{
            curr -> next = list1;
        }
            
        return result;
        
    }
};