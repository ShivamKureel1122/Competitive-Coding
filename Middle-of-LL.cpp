Problem - https://leetcode.com/problems/middle-of-the-linked-list/
===========================================================
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head; int count = 0;
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        } temp = head;
        count = count/2;
        while(count--)
            temp = temp->next;
        return temp;
    }
};
