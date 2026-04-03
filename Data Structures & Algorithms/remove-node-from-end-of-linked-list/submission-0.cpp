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
public:    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = 0;
        ListNode* p= head;
        while(p){
            p=p->next;
            m++;
        }
        
        if (m == n) return head->next;

        n = m-n-1;
        ListNode* q = head;

        while(n > 0){
            q=q->next;
            n--;
        }
        
        ListNode* k = q->next;
        q->next = q->next->next;
        delete k;

        return head;

    }
};