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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int count = cnt - n;
        int i = 1;
        ListNode* current = head;
        
        if(cnt == 0 || cnt == 1){
            return NULL;
        }
        while(current != NULL){
            if( i == count && n!=1){
                //link change
                ListNode* flag = current->next;
                current -> next = flag -> next;
                flag -> next = nullptr;
                delete flag;
                return head;
            }
            else if( i == count && n==1){
                ListNode* flag = current->next;
                current -> next = nullptr;
                delete flag;
                return head;
            }
            else if(i == count+1 ){
                ListNode* flag = head;
                head = head->next;
                delete flag;
                return head;
            }
            else{
                i++;
                current = current -> next;
            }
        }
        return 0;
    }
};