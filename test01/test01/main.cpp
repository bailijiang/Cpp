//
//  main.cpp
//  test01
//
//  Created by Bryan.bai on 12/8/17.
//  Copyright (c) 2017 home. All rights reserved.
//
#include "Sales_item.h"
//#include "chapter6.h"
#include "chapter7.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {

#if 1
  Sales_data total;
  if (read(cin, total)) {
    Sales_data trans;
    while (read(cin, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(cout, total) << endl;
        total = trans;
      }
    }
    print(cout, total) << endl;

  } else {
    cerr << "No data?!" << endl;
    return -1;
  }
#endif

#if 0
  Person Client1("Bryan.bai", "home");
  Client1.Show_info();
  cout << Client1.getname() << endl;
  cout << Client1.getaddress() << endl;

  cout << "PLease input one person name and address" << endl;
  Person p1("", "");

  read(cin, p1);
  print(cout, p1) << endl;

#endif

  cout << "vs or xcode ???" << endl;
  cout << "vs or xcode222 ???" << endl;

  return 0;
}
