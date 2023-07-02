#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 1の数を表す変数
  int count = 1;
  int a = S.size();
  // 9文字の式に限定していることに注意
  for (int i = 0; i < a; i++) {

    // 1があればcountを増やす
    if (S.at(i) == '+') {
      count++;
    } else if (S.at(i) == '-') {
      count--;
    }
  }

  cout << count << endl;
}
