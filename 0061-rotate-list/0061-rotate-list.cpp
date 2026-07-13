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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        ListNode* temp=head;
        
        int length=1;
        while(temp->next!=NULL)
        {
            length++;
            temp=temp->next;
        }
        k=k%length;
        if(k==0)
        {
            return head;
        }
        int split=length-k;
        ListNode* newnode;
        newnode=head;
        int count=1;
        while(count<split)
        {
            newnode=newnode->next;
            count++;
        }
        ListNode* revnode;
        revnode=newnode->next;
        newnode->next=NULL;
        ListNode* ans;
        ans=revnode;
        while(revnode->next!=NULL)
        {
            revnode=revnode->next;
        }
        revnode->next=head;
        return ans;

        

        
    }
};