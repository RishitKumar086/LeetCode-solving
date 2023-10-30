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
        if(head==NULL || head->next==NULL)
            return NULL;
        if(head->next==head)
            return head;
        ListNode* slow=head;
        ListNode* fast=head;
        int flag=0;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            slow=slow->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
        else
            return NULL;
    }
};