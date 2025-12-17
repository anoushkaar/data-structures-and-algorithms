// Write a function that reverses a string. The input string is given as an array of characters. You must do this by modifying the input array in - place with O(1) extra memory.

#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
  int leftPointer = 0;
  int rightPointer = s.size() - 1;
  // char temp = s[leftPointer];
  // s[leftPointer] = s[rightPointer];
  // s[rightPointer] = temp;
  while (leftPointer < rightPointer)
  {
    swap(s[leftPointer], s[rightPointer]);
    leftPointer++;
    rightPointer--;
  }
  cout << "after swap: ";
  for (char c : s)
    cout << c;
  cout << endl;
}

int main()
{
  vector<char> s = {'H', 'a', 'n', 'n', 'a', 'h'};
  reverseString(s);
  return 0;
}
