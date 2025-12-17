// Given an integer x, return true if x is a palindrome, and false otherwise.

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
  int temp = x;
  int revNum = 0;
  if (x < 0)
  {
    return false;
  }

  while (x > 0)
  {
    int lastDigit = x % 10;
    x = x / 10;
    revNum = (revNum * 10) + lastDigit;
  }
  cout << "Reversed number: " << revNum << endl;
  if (temp == revNum)
  {
    return true;
  }
  return false;
}

int main()
{
  int x = 10;
  if (isPalindrome(x))
    cout << x << " is a palindrome" << endl;
  else
    cout << x << " is not a palindrome" << endl;
  return 0;
}
