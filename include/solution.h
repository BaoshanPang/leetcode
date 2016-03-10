#ifndef LEETCODE_SOLUTION_H
#define  LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target);
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
  int lengthOfLongestSubstring(string s);
};

#endif
