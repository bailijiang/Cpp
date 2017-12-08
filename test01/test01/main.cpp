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
#include <stdexcept>
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

  Sales_item item1, item2;
  cout << "Please input 2 items obj: " << endl;

  while (cin >> item1 >> item2) {
    try {
      if (item1.isbn() != item2.isbn()) {
        throw runtime_error("Data must refer to same ISBN!");
      }
      cout << "item1 + item2 = " << item1 + item2 << endl;
    } catch (runtime_error err) {
      cout << err.what() << "\nTry again? Enter y or n" << endl;
      char c;
      cin >> c;
      if (!cin || c == 'n') {
        break;
      }
    }
  }

  return 0;
}
