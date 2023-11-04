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
    ListNode* reverseLL(ListNode* head) {
            if(head==NULL || head->next==NULL)
            {
                return head;
            }
            ListNode* curr=head;
            ListNode* prev=NULL;
            ListNode* forward=NULL;

            while(curr!=NULL)
            {
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
            }
            return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newList=NULL;
        ListNode* temp=head;
        ListNode* temp2=NULL;
        while(temp!=NULL)
        {
            ListNode* node=new ListNode(temp->val);
            if(newList==NULL)
            {
                newList=node;
                temp2=newList;
            }
            temp2->next=node;
            temp2=node;
            temp=temp->next;            
        }
       newList= reverseLL(newList);
       while(head!=NULL && newList!=NULL)
       {
           if(head->val!=newList->val) return false;

           head=head->next;
           newList=newList->next;
       }
       return true;
    }
};