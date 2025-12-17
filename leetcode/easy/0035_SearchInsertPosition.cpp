// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.

#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)

{
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] >= target)
    {
      return i;
    }
    if (i == nums.size() - 1)
    {
      return i + 1;
    }
  }
  return 0;
}

int main()
{
  vector<int> nums = {7};
  int target = 7;
  cout << searchInsert(nums, target);
  return 0;
}
