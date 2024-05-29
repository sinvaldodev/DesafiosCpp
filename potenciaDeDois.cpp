#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int termo = 1;


  for (int i = 0; i < n; i++) {
    termo = termo * 2;
  }

  cout << termo << endl;

  return 0;
}