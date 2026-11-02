class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;

        while(curr != NULL) {
            count++;
            curr = curr->next;
        }

        if(n == count) {
            return head->next;
        }

        curr = head;

        while(curr != NULL && curr->next != NULL) {
            if(count - n == 1) {
                curr->next = curr->next->next;
                break;
            }

            curr = curr->next;
            count--;
        }

        return head;
    }
};