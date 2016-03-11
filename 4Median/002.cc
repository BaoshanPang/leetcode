/*
Median of Two Sorted Arrays My Submissions Question
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).
*/
#include <algorithm>
#include "solution.h"

double
Solution::findMedianSortedArrays (vector < int >&nums1, vector < int >&nums2)
{
  double val = 0.0;
  int sz1 = nums1.size ();
  int sz2 = nums2.size ();
  int n = sz1 + sz2;
  int i1 = 0, i2 = 0;
  int k = n / 2;
  int m = 0;
  if (n == 0) {
    return 0.0;
  } else if(sz1 == 0) {
    if(sz2 & 1){
      return (double)nums2[sz2/2];
    } else {
      return ((double)nums2[sz2/2-1]+(double)nums2[sz2/2])/2;
    }
  } else if(sz2 == 0){
    if(sz1 & 1){
      return (double)nums1[sz1/2];
    } else {
      return ((double)nums1[sz1/2-1]+(double)nums1[sz1/2])/2;
    }
  }
  while (1) {
    if ((i1 < sz1) && ((i2 == sz2) || (nums1[i1] < nums2[i2]))) {
      m++;
      if (m == k+1) {
	val = nums1[i1];
	break;
      }
      i1++;
    } else {
      m++;
      if (m == k+1) {
	val = nums2[i2];
	break;
      }
      i2++;
    }
  }
  if ((n - 1) % 2) {
    val += nums1[i1 - 1] > nums2[i2 - 1] ? nums1[i1 - 1] : nums2[i2 - 1];
    val = val / 2;
  }
  return val;
}
