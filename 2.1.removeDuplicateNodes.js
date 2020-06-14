/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */

const removeDuplicateNodes = function (head) {
  if (!head) return head;
  const node = head;
  const set = new Set([head.val]);
  while (head.next) {
    if (set.has(head.next.val)) {
      head.next = head.next.next;
      continue;
    }
    set.add(head.next.val);
    head = head.next;
  }
  return node;
};
