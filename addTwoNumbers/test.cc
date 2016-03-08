#include <iostream>
#include "gtest/gtest.h"
#include "solution.h"


ListNode* init_list(int x)
{
  ListNode* lst = nullptr;
  ListNode* p = lst;

  while(x) {
    int v = x % 10;
    x = (x - v)/10;
    if(lst == nullptr) {
      lst = new ListNode(v);
      p = lst;
    } else {
      p->next = new ListNode(v);
      p = p->next;
    }
  }
  return lst;
}

int list_eq(ListNode*l1, ListNode*l2)
{
  while(l1 && l2){
    cout << "l1 val:\t" << l1->val << "\tl2 val:\t" << l2->val << endl;
    if(l1->val != l2->val) break;
    l1 = l1->next;
    l2 = l2->next;
  }
  return l1 == l2;
}

TEST(addTwoSum, all) {
  class Solution sol;

  ListNode* l1 = init_list(12345);
  ListNode* l2 = init_list(12345);
  ListNode* l3 = init_list(24690);
  ListNode* sum = sol.addTwoNumbers(l1, l2);

  EXPECT_EQ(list_eq(sum, l3), 1);
}
