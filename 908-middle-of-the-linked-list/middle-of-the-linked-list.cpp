class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> v;

        while (head != NULL) {
            v.push_back(head);
            head = head->next;
        }

        return v[v.size() / 2];
    }
};