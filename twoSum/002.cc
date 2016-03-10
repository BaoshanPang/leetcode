/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

  Example:

  Given nums = [2, 7, 11, 15], target = 9,

  Because nums[0] + nums[1] = 2 + 7 = 9,
  return [0, 1].

  UPDATE (2016/2/13):
The return format had been changed to zero-based indices. Please read the above updated description carefully. 
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#include "solution.h"

vector<int> Solution::twoSum(vector<int>& nums, int target) {
  unordered_map<int,int> umap;
  vector<int> ret = { -1, -1};
  for(int i = 0; i < nums.size(); i++){
    int val = nums[i];
    if(umap.find(target - val) == umap.end()){
      umap[val] = i;
    } else {
      ret[0] = umap[target - val];
      ret[1] = i;
    }
  }
  return ret;
}



