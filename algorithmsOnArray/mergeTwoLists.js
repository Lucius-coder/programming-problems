/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
list1.sort()
list2.sort()
   let mergeList= [...list1,...list2].sort()
    
    return mergeList[0]
};
console.log(mergeTwoLists([6],[0]))