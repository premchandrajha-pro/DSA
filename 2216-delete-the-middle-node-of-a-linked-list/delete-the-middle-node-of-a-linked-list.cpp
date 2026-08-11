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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == nullptr){
            return NULL;
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        int middle = cnt/2;

        int count = 1;
        ListNode* current = head;
        while(count != middle){
            count++;
            current = current->next;
        }
        ListNode* flag = current -> next;
        current -> next = flag -> next;
        flag -> next = nullptr;
        delete flag;
        return head;
    }
};