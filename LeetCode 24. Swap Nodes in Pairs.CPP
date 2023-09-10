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
        
        if (head == nullptr || head -> next == nullptr)
            return head;

        ListNode* dummy = new ListNode(-1, head);
        ListNode* node = dummy;
        ListNode* backup = dummy;

        while (node -> next != nullptr && node -> next -> next != nullptr)
        {
            ListNode* first_node = node -> next;
            ListNode* second_node = node -> next -> next;

            first_node -> next = second_node -> next;

            node -> next = second_node;
            node -> next -> next = first_node;

            node = node -> next -> next;
        }

        return head = backup -> next;
    }
};