#include <iostream>
#include <vector>
using namespace std;

vector <int> first_input (vector <int> vec) {

  int temp;
  for (int i = 0; i < vec.size(); ++i) {
    for (int j = 0; j < vec.size(); ++j) {
      if ( vec[j] > vec[i]) {
        temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
      }
    }
  }
  return vec;
}

vector <int> next_input (vector <int> vec, vector <int> db, int enter) {

  int temp = 0, co = 0;
  for (int j = enter; j < vec.size(); ++j) {
    for (int i = 0; i < db.size(); ++i) {
      if (vec[j] < db[i] && j != temp) {
        temp = j;
        co++;
        db[db.size() - co] = vec[j];
      }
    }
  }
  for (int i = 0; i < db.size(); ++i) {
    for (int j = 0; j < db.size(); ++j) {
      if ( db[j] > db[i]) {
        temp = db[i];
        db[i] = db[j];
        db[j] = temp;
      }
    }
  }
  return db;
}

int main() {

  int a = 0, enter = 0;
  bool b = 0;
  vector <int> vec (0);
  vector <int> db = {0,0,0,0,0};

  while (a != -2) {

    cout << "Input: ";
    cin >> a;
    enter++;

    if (a == -1) {
      if (b != 1) {
        vec = first_input(vec);
        cout << "Output: ";
        for (int i = 0; i < db.size(); ++i) {
          db[i] = vec[i];
          if (i == 4)
            cout << "[" << db[i] << "]" << endl;
          else
            cout << db[i] << " ";
        }
        cout << endl;
        enter = 0;
        b = true;
      }
      else {
        enter = vec.size() - enter + 1;
        db = next_input (vec, db, enter);
        cout << "Output: ";
        for (int i = 0; i < db.size(); ++i) {
          if (i == 4)
            cout << "[" << db[i] << "]" << endl;
          else
            cout << db[i] << " ";
        }
        cout << endl;
        enter = 0;
      }
    }
    else {
      vec.push_back(a);
    }
  }
}

/*
int main() {

  int a = 0, b = 0, c = 0, temp = 0;
  vector <int> vec (0);
  vector <int> db (0);
  vector <int> bd = {0,0,0,0,0};

  while (a != -2) {

    cout << "Input: ";
    cin >> a;
    if (a == -1) {
      cout << endl;

      int p = 3;
      int m = p + 1;
      for (int m; m < db.size(); ++m) {
          bd[m] = db[m];
          cout << bd[m] << " ";
      }
      for (int n = m - 1; n < db.size(); ++n) {
          db[n] = bd[n - 1];
          if (n == m - 1) {
            db[n] = 99;
          }
          cout << db[n] << " ";
      }


      cout << endl;
      cout << "Output: ";
      for (int i = 0; i < db.size(); ++i) {
      cout << db[i] << " ";
      }
      cout << endl << endl;
    }
    else {
      db.push_back(a);
    }
  }
}
*/
