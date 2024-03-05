#include <iostream>
#include <vector>
using namespace std;

int main() {

  int a = 0, b = 0, c = 0, sum = 0;
  vector <int> vec (0);

  cout << "Enter vector: " << endl;
  while (a != -1) {
    cin >> a;
    vec.push_back(a);
  }
  cout << endl;
  cout << "Insert sum: ";
  cin >> sum;

  for (int i = 0; i < vec.size(); ++i) {
    for (int j = 0; j < vec.size(); ++j) {
      if (vec[i] + vec[j] == sum) {
        b = vec[i];
        c = vec[j];
        break;
      }
    }
  }
  cout << "Composed it: " << b  << " " << c << endl;
}
