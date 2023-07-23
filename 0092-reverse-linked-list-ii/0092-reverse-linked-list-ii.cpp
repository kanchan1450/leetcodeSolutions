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
    pair<ListNode*, ListNode*> reverseList(ListNode* left, int indicies)
    {
        ListNode* curr = left;
        ListNode* prev = nullptr;
         ListNode* temp;
        while(indicies)
        {
             temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            indicies--;
        }
        return {prev, temp};
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == nullptr || head->next ==nullptr || left == right)
            return head;
        ListNode* leftNode = head;
        ListNode* beforeLeftNode = nullptr;

        for(int i =1; i<left; i++)
        {
            beforeLeftNode = leftNode;
            leftNode = leftNode->next;
        }
        auto [rightNode, afterRightNode] = reverseList(leftNode, right-left+1);

        if(beforeLeftNode)
            {
                beforeLeftNode->next = rightNode;
            }
        else
                head = rightNode;
            leftNode->next = afterRightNode;

        return head;
    }
};