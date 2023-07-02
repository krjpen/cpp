#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for(int i = 0; i < N; i++){
    string op;
    int b;
    cin >> op;
    cin >> b;
    if(op == "+"){
      A = A + b;
      
    }
      
    else if(op == "-"){
      A = A - b;
      
    }

    else if(op == "*"){
      A = A * b;
     
    }
      
    else if(op == "/" && b != 0){
      A = A / b;
      
    }

    else{
      cout << "error" << endl;
      break;
    }

    cout << i+1 << ":" << A << endl;
  }

  
  // ここにプログラムを追記
}
