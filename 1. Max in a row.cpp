#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector <int> vec (0);
  bool check = false;
  int max_num = 0, max_begin = 0, max_end = 0;
  int number = 0, co = 0, sum = 0, tmp = 0, num = 0;

  cout << "Enter numbers: " << endl;
  while (number != -1) {
    cin >> number;
    if (number != -1)
      vec.push_back(number);
  }

  while (check != true) {
    for (int i = 0; i < vec.size(); ++i) {
      co++;
      for (int j = 0; j < tmp - i; ++j) {
        if (num != i) {
          sum = 0;
          num = i;
        }
        sum += vec[i + j];
      }
      if (max_num < sum) {
        max_num = sum;
        max_begin = co;
        max_end = tmp;
      }
    }

    co = 0;
    tmp++;
    if (tmp == vec.size()) {
      check = true;
    }
  }

  cout << "Max in a row: ";
  for (int i = max_begin - 1; i <= max_end; ++i) {
    if (i == max_end && vec[max_end] < 0)
      break;
    else
      cout << vec [i] << " ";
  }
}
