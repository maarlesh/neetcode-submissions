/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class Solution {
    fun mergeTwoLists(list1: ListNode?, list2: ListNode?): ListNode? {
        var l1 = list1
        var l2 = list2
        var head : ListNode? = null
        var tail : ListNode? = null
        while(l1 != null && l2 != null){
            val selectedNode : ListNode?
            if(l1.`val` <= l2.`val`){
                selectedNode = l1
                l1 = l1.next
            }else{
                selectedNode = l2
                l2 = l2.next
            }
            if(head == null){
                head = selectedNode
                tail = selectedNode
            }else{
                tail?.next = selectedNode
                tail = tail?.next
            }
        }
        val remaining = if (l1 != null) l1 else l2
        if (head == null) {
            head = remaining
        } else {
            tail?.next = remaining
        }
        return head
    }
}
