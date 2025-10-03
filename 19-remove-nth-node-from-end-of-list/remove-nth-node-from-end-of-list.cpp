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
        ListNode* ptrFwd = head;
        ListNode* ptrPre = head;

        for (int i = 1; i <= n; i++) {
            ptrFwd = ptrFwd->next;
        }

        if (ptrFwd == nullptr) {
            head = head->next;
            return head;
        }

        while (ptrFwd->next != nullptr) {
            ptrFwd = ptrFwd->next;
            ptrPre = ptrPre->next;
        }

        // if (ptrPre == head) {
        //     head = head->next;
        //     return head;
        // }

        if (ptrPre->next == ptrFwd) {
            ptrPre->next = nullptr;
            return head;
        }

        ptrPre->next = ptrPre->next->next;

        return head;
    }
};