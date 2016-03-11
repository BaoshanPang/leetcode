/*
Median of Two Sorted Arrays My Submissions Question
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*/
#include <algorithm>
#include "solution.h"

int
findKth (vector < int >&nums1, int pos1, vector < int >&nums2, int pos2,
	 int k)
{
  int sz1 = nums1.size () - pos1;
  int sz2 = nums2.size () - pos2;

  if (sz1 == 0) {
    return nums2[pos2 + k - 1];
  } else if (sz1 > sz2) {
    return findKth(nums2, pos2, nums1, pos1, k);
  }
  if (k == 1) {
    return nums1[pos1] < nums2[pos2] ? nums1[pos1] : nums2[pos2];
  } else {
    int k1 = min (k / 2, sz1);
    int k2 = k - k1;
    if (nums1[pos1 + k1 - 1] < nums2[pos2 + k2 - 1]) {
      return findKth (nums1, pos1 + k1, nums2, pos2, k2);
    } else if (nums1[pos1 + k1 - 1] > nums2[pos2 + k2 - 1]) {
      return findKth (nums1, pos1, nums2, pos2 + k2, k1);
    } else {
      return nums1[pos1 + k1 - 1];
    }
  }
}

double
Solution::findMedianSortedArrays (vector < int >&nums1, vector < int >&nums2)
{
  int n = nums1.size () + nums2.size ();

  if (n == 0) {
    return 0.0;
  } else if (n & 1) {
    return findKth (nums1, 0, nums2, 0, (n + 1) / 2);
  } else {
    return (findKth (nums1, 0, nums2, 0, n / 2) +
	    findKth (nums1, 0, nums2, 0, n / 2 + 1)) / 2.0;
  }
}

#include "test.cc"
