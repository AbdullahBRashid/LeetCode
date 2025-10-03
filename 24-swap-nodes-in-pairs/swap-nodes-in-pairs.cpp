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
    ListNode* swapPairs(ListNode* head) {
        // n = 0
        if (head == nullptr) {
            return nullptr;
        }

        // n = 1
        if (head->next == nullptr) {
            return head;
        }

        // n = 2
        ListNode* odd = head;
        ListNode* even = head->next;

        head = even;
        odd->next = even->next;
        even->next = odd;

        // ListNode* tmp = odd;
        // odd = even;
        // even = tmp;

        swap(odd, even);

        ListNode* old = even;

        while (odd->next && odd->next->next && even->next->next) {
            odd = odd->next->next;
            even = even->next->next;

            
            odd->next = even->next;
            even->next = odd;

            swap(odd, even);

            old->next = odd;
            old = even;
        }


        return head;
        
    }
};