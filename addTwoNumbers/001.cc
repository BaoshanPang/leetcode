/*
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
  Output: 7 -> 0 -> 8
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
#include "solution.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
  int carry = 0;
  ListNode* out = nullptr;
  ListNode* p = out;
  while(l1 || l2){
    int val = 0;
    if(l1) {
      val += l1->val;
      l1 = l1->next;
    }
    if(l2) {
      val += l2->val;
      l2 = l2->next;
    }
    val += carry;
    if(val >= 10) {
      carry = 1;
      val = val - 10;
    } else {
      carry = 0;
    }
    if(out == nullptr) {
      out = new ListNode(val);
      p = out;
    } else {
      p->next = new ListNode(val);
      p = p->next;
    }
  }
  if(carry) {
    p->next = new ListNode(carry);
  }
  return out;
}
