#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int x = min(min(A,B), C);
  int y = max(max(A,B), C);
  int z = y - x;

  cout << z << endl;
}
