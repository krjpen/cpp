#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec;
  int A;
  int count = 0;

  for (int i = 0; i < N; i++) {
    cin >> A;
    vec.push_back(A);
  }

  for (int i = 0; i < vec.size(); i++) {
    count += vec.at(i);
  }
  count = count / N;

  for (int i = 0; i < vec.size(); i++) {
    cout << abs(count - vec.at(i)) << endl;
  }

}
