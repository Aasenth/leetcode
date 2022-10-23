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
        int sum=0;
        ListNode *t=head;
        while(t)
        {
           sum++;
           t=t->next;
        }
         ListNode* dummy = new ListNode(0, head);
         ListNode* cur = dummy;
        for (int i = 1; i < sum - n + 1; i++) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;

    }
};
