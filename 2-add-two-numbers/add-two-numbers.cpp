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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp1 = l1;
        ListNode* tmp2 = l2;

        int data1 = 0;
        int data2 = 0;

        if (tmp1) data1 = tmp1->val;
        if (tmp2) data2 = tmp2->val;

        ListNode* root = new ListNode((data1 + data2) % 10);
        ListNode* parent = root;

        int carry = (data1+data2) / 10;

        tmp1 = tmp1->next;
        tmp2 = tmp2->next;

        while (tmp1 || tmp2 || carry) {

            data1 = 0;
            data2 = 0;
            
            if (tmp1) data1 = tmp1->val;
            if (tmp2) data2 = tmp2->val;

            parent->next = new ListNode( (data1 + data2 + carry) % 10);
            carry = (data1 + data2 + carry) / 10;

            if (tmp1) tmp1 = tmp1->next;
            if (tmp2) tmp2 = tmp2->next;

            parent = parent->next;
        }


        return root;
    }
};