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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right){
            return head;
        }
        ListNode*before= NULL;
        ListNode*t= head;
        int pos=1;
        while(pos<left){
            before=t;
            t=t->next;
            pos++;
            continue;
        }
        ListNode* curr=t;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        int time=right-left+1;
        while(time>0){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            time--;
        }
        t->next=curr;
        if(before!=NULL){
            before->next=prev;
        }
        else{
            head=prev;
        }
        return head;
       

    }
};