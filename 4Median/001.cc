/*
Median of Two Sorted Arrays My Submissions Question
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*/
#include <algorithm>
#include "solution.h"

double
Solution::findMedianSortedArrays (vector < int >&nums1, vector < int >&nums2)
{
  vector < int >nums = nums1;
  nums.insert (nums.end (), nums2.begin (), nums2.end ());
  sort (nums.begin (), nums.end ());
  if (nums.size () == 0){
    return 0;
  } else if ((nums.size () % 2) != 0) {
    return (double) nums[nums.size () / 2];
  } else {
    return ((double) nums[nums.size () / 2 - 1] +
	    (double) nums[nums.size () / 2]) / 2;
  }
}
