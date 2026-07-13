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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prevnode=NULL;
        ListNode* nextnode=NULL;
        while(head!=NULL)
        {
            nextnode=head->next;
            head->next=prevnode;
            prevnode=head;
            head=nextnode;       
             }

            return prevnode;

    }
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* revhead=reverse(slow);
        int maxval=0;
        while(revhead!=NULL)
        {
            maxval=max(maxval,revhead->val+head->val);
            revhead=revhead->next;
            head=head->next;
        }
        return maxval;
        
    }
};