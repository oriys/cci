function ListNode(val) {
  this.val = val;
  this.next = null;
}

/**
 * @param {ListNode} head
 * @param {number} k
 * @return {number}
 */
var kthToLast = function (head, k) {
  let node = head;
  for (let i = 0; i < k; i++) {
    node = node.next;
  }
  while (node !== null) {
    node = node.next;
    head = head.next;
  }
  return head.val;
};
