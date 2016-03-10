#include <vector>

using namespace std;

#include "gtest/gtest.h"
#include "solution.h"

TEST (lengthOfLongestSubstring, all)
{
  class Solution sol;
  EXPECT_EQ (sol.lengthOfLongestSubstring ("abcabcbb"), 3);
  EXPECT_EQ (sol.lengthOfLongestSubstring ("bbbbb"), 1);
  EXPECT_EQ (sol.lengthOfLongestSubstring ("abbbbb"), 2);
  EXPECT_EQ (sol.lengthOfLongestSubstring ("c"), 1);
}
