//
//  chapter7.h
//  test01
//
//  Created by Bryan.bai on 12/11/17.
//  Copyright (c) 2017 home. All rights reserved.
//

#ifndef test01_chapter7_h
#define test01_chapter7_h

#endif

#include <iostream>

using namespace std;

struct Sales_data {
  string isbn() const { return bookNo; };
  Sales_data &combine(const Sales_data &);

  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;

  return *this;
}

istream &read(istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;

  return is;
}

ostream &print(ostream &os, Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue;

  return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);

  return sum;
}

class Person {

public:
  Person(string Client_name, string Client_address);
  Person();

  string name;
  string address;

  void Show_info() {
    cout << name << "'s"
         << " address is " << address << endl;
  } //类内定义函数

  string &getname() { return name; }
  string &getaddress() {
    return address;
  } //返回姓名地址的函数，只可访问，不可修改
};
Person::Person(string Client_name, string Client_address)
    : name(Client_name), address(Client_address){}; //构造函数定义内部变量

istream &read(istream &is, Person &person) {
  is >> person.name >> person.address;

  return is;
}

ostream &print(ostream &os, Person &person) {
  os << person.name << " " << person.address;

  return os;
}
