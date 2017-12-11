//
//  main.cpp
//  test01
//
//  Created by Bryan.bai on 12/8/17.
//  Copyright (c) 2017 home. All rights reserved.
//
#include "Sales_item.h"
#include "chapter6.h"
#include "chapter7.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main(int argc, const char *argv[]) {

  Sales_data total;
  if (cin >> total.bookNo && cin >> total.units_sold && cin >> total.revenue) {
    Sales_data trans;
    while (cin >> trans.bookNo && cin >> trans.units_sold &&
           cin >> trans.revenue) {
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      } else {
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
        total = trans;
      }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue
         << endl;

  } else {
    cerr << "No data?!" << endl;
    return -1;
  }

  return 0;
}
