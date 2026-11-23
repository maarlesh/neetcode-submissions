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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        while(l1 != nullptr && l2 != nullptr){
            ListNode* selectedNode = nullptr;
            if(l1->val <= l2 -> val){
                selectedNode = l1;
                l1 = l1->next;
            }else{
                selectedNode = l2;
                l2 = l2->next;
            }
            if(head == nullptr){
                head = selectedNode;
                tail = selectedNode;
            }else{
                tail->next = selectedNode;
                tail = tail->next;
            }
        }
        ListNode* remaining;
        if(l1 != nullptr){
            remaining = l1;
        }else{
            remaining = l2;
        }
        if(head == nullptr){
            head = remaining;
        }else{
            tail->next = remaining;
        }
        return head;
    }
};
