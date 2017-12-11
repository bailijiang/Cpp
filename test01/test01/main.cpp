//
//  main.cpp
//  test01
//
//  Created by Bryan.bai on 12/8/17.
//  Copyright (c) 2017 home. All rights reserved.
//
#include "Sales_item.h"
#include "chapter6.h"
#include <iostream>
#include <vector>

using namespace std;

typedef int (*pf)(const int, const int);
inline int f2(const int, const int);

inline int NumAdd(const int n1, const int n2) { return n1 + n2; }
inline int NumSub(const int n1, const int n2) { return n1 - n2; }
inline int NumMul(const int n1, const int n2) { return n1 * n2; }
inline int NumDiv(const int n1, const int n2) { return n1 / n2; }

vector<pf> a{NumAdd, NumSub, NumMul, NumDiv};

int main(int argc, const char *argv[]) {
  //
  //  for (size_t i = 0; i != 10; ++i) {
  //    cout << count_calls() << endl;
  //  }
  //
  //  int a, b;
  //  cout << "Please input 2 int numbers: " << endl;
  //  cin >> a >> b;
  //  swap(&a, &b);
  //
  //  cout << "after swap: " << a << " " << b << endl;

  //  int i;
  //
  //  cout << "Please input a int num: " << endl;
  //  cin >> i;
  //  reset(i);
  //
  //  cout << "after reset: " << i << endl;

  //  string str;
  //
  //  cout << "Pleast input one string: " << endl;
  //  cin >> str;®
  //
  //  bool ret = findUpper(str);
  //
  //  cout << "str has " << ret << " capital" << endl;

  //  int a[] = {1, 2, 3, 4, 5};
  //  displayArr(begin(a), end(a));

  //  string lines[] = {"line1", "line2", "line3"};
  //
  //  //  cout << reArr(lines)[1] << endl;
  //  //  cout << func1(lines)[2] << endl;
  //  cout << func2(lines)[0] << endl;
  //  cout << func3(lines)[2] << endl;

  //  typedef int (*p)(int, int);
  //  vector<p> a;
  //  p b = f;
  //  int c = b(33, 44);
  //  cout << c << endl;
  //  a.push_back(b);
  //  cout << "a[0]: " << a[0](44, 77) << endl;

  for (auto i : a) {
    cout << i(2, 4) << " " << endl;
  }

  return 0;
}
