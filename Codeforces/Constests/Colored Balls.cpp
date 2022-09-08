#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    vector < int > g1(k);
    for (int & p: g1)
      cin >> p;

    int l = INT_MIN, get1 = 0;
    for (int i = 0; i < k; i++) {
      if (g1[i] >= l) {
        l = g1[i];
        get1 = i;
      }
    }

    cout << get1 + 1 << endl;
  }
  return 0;
}
