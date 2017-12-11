//
//  chapter6.h
//  test01
//
//  Created by Bryan.bai on 12/8/17.
//  Copyright (c) 2017 home. All rights reserved.
//

#include <iostream>

using namespace std;
using ArrT = string[3];

size_t count_calls();
void swap(int *pt1, int *pt2);
void reset(int &i);
bool findUpper(string const &str);
void displayArr(const int *, const int *);
string (&reArr(string (&arr)[3]))[3];
ArrT &func1(ArrT &arr);
auto func2(ArrT &arr) -> string (&)[3];

ArrT &func3(ArrT &arr);

int f(int a, int b);
