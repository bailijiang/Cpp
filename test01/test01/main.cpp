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

#if 0
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

  Sales_data item1;
  print(cout, item1) << endl;

  Sales_data item2("x-202-3456-01", 20, 23.45);
  print(cout, item2) << endl;

  Sales_data item3("x-303-3456-03");
  print(cout, item3) << endl;

  Sales_data item4(cin);
  print(cout, item4) << endl;
  
  pause();
  return 0;
}
