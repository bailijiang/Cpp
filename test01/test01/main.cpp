//
//  main.cpp
//  test01
//
//  Created by Bryan.bai on 12/8/17.
//  Copyright (c) 2017 home. All rights reserved.
//

#include "Sales_item.h"
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char *argv[]) {

  // insert code here...
  std::cout << "Hello, World!\n";

  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto i : ivec) {
    cout << ((i & 0x1) ? i * 2 : i) << " ";
  }
  cout << endl;

  return 0;
}
