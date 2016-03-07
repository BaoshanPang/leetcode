#include <vector>

using namespace std;

#include "gtest/gtest.h"
#include "solution.h"

TEST(twoSum, all) {
  class Solution sol;
  vector<int> sums = {11, 22, 33, 44, 55};
  vector<int> targets = {33, 44, 55, 77, 88, 99};
  for (auto t : targets){
    vector<int> r =  sol.twoSum(sums, t);
    int i = r[0];
    int j = r[1];
    EXPECT_EQ(sums[i] + sums[j], t);
  }
}
