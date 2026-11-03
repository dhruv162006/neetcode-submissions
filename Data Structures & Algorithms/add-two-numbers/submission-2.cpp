
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *p1 = l1, *p2 = l2;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int carry = 0;

        while (p1 != nullptr || p2 != nullptr || carry != 0) {

            int sum = carry;

            if (p1 != nullptr) {
                sum += p1->val;
                p1 = p1->next;
            }

            if (p2 != nullptr) {
                sum += p2->val;
                p2 = p2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            curr->next = new ListNode(digit);
            curr = curr->next;
        }

        return dummy->next;
    }
};
