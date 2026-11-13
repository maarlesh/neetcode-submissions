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
 #include<set>
 using namespace std;

class Solution {
public:
    bool hasCycle(ListNode* head) {
        set<ListNode*> visited;
        while(head != NULL){
            if(visited.find(head) != visited.end()){
                return true;
            }else{
                visited.insert(head);
            }
            head = head->next;
        }
        return false;
    }
};
