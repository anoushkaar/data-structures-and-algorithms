#include <bits/stdc++.h> //  Includes all standard C++ libraries
#include <math.h>        //  Includes all mathematical functions
using namespace std;     // Use the standard namespace

// NOTE:- doubly linked list is maintained for a list and for a vector singly linked list is maintained. Stack is LIFO

// Algorithms:- sort(a,a+4) in vectors and arrays

// 1. add 2 nos
//  void name()
//  { // void doesn't return anything
//    cout << "anoushka"<<endl;
//  }

// int sum(int a, int b)
// {
//   return a + b;
// }

// int main()
// {
//   name();
//   int c = sum(2, 2);
//   cout << c;
//   return 0;
// }

// 2. pairs
//  void explainPair()
//  {
//    pair<int, int> p = {1, 3};
//    cout << p.first << " " << p.second;
//    pair<int, pair<int, int>> p2 = {1, {3, 4}};
//    cout << p2.first << " " << p2.second.second << " " << p2.second.first;
//    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
//    cout << arr[1].second;
//  }
//  int main(){
//    return 0;
//  }

// 3. vector
void explainVector()
{
  vector<int> v;
  v.push_back(1);    // adds 1 at the end
  v.emplace_back(2); // adds 2 at the end (faster than push_back)

  vector<pair<int, int>> vec;
  vec.push_back({1, 2});  // adds pair at the end
  vec.emplace_back(1, 2); // adds pair at the end (faster than push_back)

  vector<int> v3(5, 100); // {100,100,100,100,100}

  vector<int> v1(5);  // {0,0,0,0,0}
  vector<int> v2(v1); // copy

  auto it = v3.begin(); // points to first element
  cout << *(it) << " "; // prints 100
  it++;                 // points to next element
  cout << *it << " ";   // prints 100
}

/*
==== VECTOR ====
v.push_back(x), v.pop_back(), v[i], v.at(i), v.front(), v.back()
v.size(), v.empty(), v.clear(), v.insert(it,x), v.erase(it), v.swap(v2)
v.begin(), v.end(), v.rbegin(), v.rend()
sort(v.begin(), v.end()) // ascending
sort(v.rbegin(), v.rend()) // descending
*/

/*
==== STACK (LIFO) ====
st.push(x), st.pop(), st.top(), st.size(), st.empty(), st.swap(st2)
*/

/*
==== QUEUE (FIFO) ====
q.push(x), q.pop(), q.front(), q.back(), q.size(), q.empty(), q.swap(q2)
*/

/*
==== PRIORITY QUEUE (Heap) ====
priority_queue<int> pq; // max heap
priority_queue<int, vector<int>, greater<int>> pq; // min heap
pq.push(x), pq.pop(), pq.top(), pq.size(), pq.empty()
*/

/*
==== LIST (Doubly Linked List) ====
lst.push_back(x), lst.push_front(x), lst.pop_back(), lst.pop_front()
lst.front(), lst.back(), lst.size(), lst.empty(), lst.clear()
lst.remove(x), lst.reverse(), lst.sort(), lst.unique()
*/

/*
==== SET (Sorted, Unique) ====
s.insert(x), s.erase(x), s.find(x), s.count(x), s.size(), s.empty(), s.clear()
s.lower_bound(x), s.upper_bound(x), s.begin(), s.end()
multiset<int> ms; // allows duplicates
*/

/*
==== MAP (Key-Value, Sorted by key) ====
m[key] = val, m.insert({key,val}), m.erase(key), m.find(key), m.count(key)
m.size(), m.empty(), m.clear(), m.begin(), m.end()
for(auto &p : m) { p.first, p.second }
unordered_map<int,int> um; // O(1) average, no sorting
multimap<int,int> mm; // allows duplicate keys
*/
