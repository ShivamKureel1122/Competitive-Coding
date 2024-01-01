Problem - https://leetcode.com/problems/middle-of-the-linked-list/
-----------------------------------------------------------
class Solution {
public:
    int Count(ListNode* temp) {
        int count = 0;
        while(temp != nullptr) { count++;
            temp = temp->next; }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = Count(head)/2;
        while(count--)
            temp = temp->next;
        return temp;
    }
};
