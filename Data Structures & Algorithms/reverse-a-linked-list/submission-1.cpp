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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;
        while (current != nullptr) {
            // current is the current and point to the head so we want to point to the points that
            // head point on it
            next = current->next;
            // so here the next pointer is point to the next of the current
            current->next = prev;
            // we make the next of the current is equal to the prev
            prev = current;
            current = next;
        }
        return prev;
    }
};
