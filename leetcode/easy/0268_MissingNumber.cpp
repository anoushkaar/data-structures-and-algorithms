// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
  int a = nums.size();
  for (int i = 0; i < nums.size() - 1; i++)
  {
    for (int j = 0; j < nums.size() - i - 1; j++)
    {
      if (nums[j] > nums[j + 1])
      {
        swap(nums[j], nums[j + 1]);
      }
    }
  }
  for (int i = 0; i < a; i++)
  {
    if (nums[i] != i)
    {
      return i;
    }
  }
  return a;
}

int main()
{
  vector<int> nums = {0,1};
  cout << missingNumber(nums);
  return 0;
}
