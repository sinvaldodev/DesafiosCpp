#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  double mph;
  cin >> mph;

  if (mph < 0) {
    cout << 0 << endl;
    return 0;
  }

  double conversaoKmph = mph/0.62137;

  cout << fixed;
  cout << setprecision(2) << conversaoKmph << endl;
  return 0;
}