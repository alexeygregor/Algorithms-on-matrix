#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {

  int a = 0, b = -1, c = 0, d = 0, e = 0, f = 0;
  vector <int> vec (0);

  while (a != -1) {
    cout << "Enter vector: " << endl;
    cin >> a;
    if (a != -1) {
      if (b < abs(a) || b = -1) {
        b = a;
        vec.push_back(a);
      }
      else {
        cerr << "Incorrect input" << endl;
      }
    }
  }
  cout << endl;
  f = b;

  for (int i = 0; i < vec.size() - 1; ++i) {
    c = vec[i];
    if ((b > c) && c >= 0) {
      b = c; e = i;
    }
    if ((abs(f) > abs(c)) && c < 0) {
      f = c; e = i;
    }
  }

  a = 0; c = 1; d = 1;
  if (b > abs(f)) {
    cout << f << " ";
    a++; d++;
  }
    cout << b << " ";

  for (int i = a; i < vec.size() - 1; ++i) {
    if ((vec[e + c] >= b) && (vec[e + c] < abs(vec[e - d]))) {
      cout << vec[e + c] << " ";
      b = vec[e + c]; c++;
    }
    else if (abs(vec[e - d]) >= b) {
      cout << vec[e - d] << " ";
      b = abs(vec[e - d]); d++;
    }
    else {
      cout << vec[e - d] << " ";
      b = abs(vec[e - d]); d++;
    }
  }
}
