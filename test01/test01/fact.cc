#include "chapter6.h"

size_t count_calls() {
  static size_t count = 0;
  return ++count;
}

void swap(int *pt1, int *pt2) {
  int temp;
  temp = *pt1;
  *pt1 = *pt2;
  *pt2 = temp;
}

void reset(int &i) { i = 0; }

bool findUpper(string const &str) {
  for (auto ch : str) {
    if (isupper(ch))
      return true;
  }
  return false;
}

void displayArr(const int *begin, const int *end) {
  while (begin != end) {
    cout << *begin++ << endl;
  }
}

string (&reArr(string (&arr)[3]))[3] { return arr; }

ArrT &func1(ArrT &arr) { return arr; }

auto func2(ArrT &arr) -> string (&)[3] { return arr; }

string arrS[3];

decltype(arrS) &func3(ArrT &arr) { return arr; }

int f(int a, int b) { return a + b; }