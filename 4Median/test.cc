#include <vector>

using namespace std;

#include "gtest/gtest.h"
#include "solution.h"

TEST (findMedianSortedArrays, all)
{
  class Solution sol;
  vector < int >nums1 = { 1, 3, 5, 7, 9 };
  vector < int >nums2 = { 2, 4, 6, 8, 10 };
  EXPECT_EQ (sol.findMedianSortedArrays (nums1, nums2), 5.5);
  nums1.resize (0);
  EXPECT_EQ (sol.findMedianSortedArrays (nums1, nums2), 6);
  nums1 = {};
  nums2 = {};
  EXPECT_EQ (sol.findMedianSortedArrays (nums1, nums2), 0);
  nums1 = {};
  nums2 = {1};
  EXPECT_EQ (sol.findMedianSortedArrays (nums1, nums2), 1);
  nums1 = {};
  nums2 = {2,3};
  EXPECT_EQ (sol.findMedianSortedArrays (nums1, nums2), 2.5);
}
