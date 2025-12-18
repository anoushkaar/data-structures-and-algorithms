#include <bits/stdc++.h>
using namespace std;

vector<int> findPeaks(vector<int> &mountain)
{
  vector<int> temp;
  for (int i = 0; i <= mountain.size() - 1; i++)
  {
    if (i != 0 && i != mountain.size() - 1)
    {
      if (mountain[i - 1] < mountain[i] && mountain[i + 1] < mountain[i])
      {
        temp.push_back(i);
      }
    }
  }
  return temp;
}

int main()
{
  vector<int> mountain = {1, 4, 3, 8, 5};
  vector<int> a = findPeaks(mountain);
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << endl;
  }

  return 0;
}
