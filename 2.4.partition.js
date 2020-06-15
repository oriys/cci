function ListNode(val) {
  this.val = val;
  this.next = null;
}

/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function (head, x) {
  let leftList = { next: null };
  let rightList = { next: null };
  let cur = head;
  let curLeft = leftList;
  let curRight = rightList;
  let curLeftEnd = null;
  while (cur) {
    if (cur.val < x) {
      curLeft.next = { val: cur.val, next: null };
      cur = cur.next;
      curLeftEnd = curLeft.next;
      curLeft = curLeft.next;
    } else {
      curRight.next = { val: cur.val, next: null };
      cur = cur.next;
      curRight = curRight.next;
    }
  }
  if (curLeftEnd) {
    curLeftEnd.next = rightList.next;
  }
  return leftList.next || rightList.next;
};
