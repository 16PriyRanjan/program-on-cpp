class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0); // Dummy head to simplify code
        ListNode* current = dummyHead; // Pointer to the current node in the result list
        int carry = 0; // Initialize the carry to 0

        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10; // Calculate carry for the next iteration
            int digit = sum % 10; // Calculate the digit to be added to the result

            current->next = new ListNode(digit); // Create a new node with the digit
            current = current->next; // Move the current pointer to the newly created node

            if (l1) l1 = l1->next; // Move to the next node in l1 if it exists
            if (l2) l2 = l2->next; // Move to the next node in l2 if it exists
        }

        return dummyHead->next; // The result starts from the next node of the dummy head
    }
};

