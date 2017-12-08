#include "chapter6.h"
#include <iostream>

size_t count_calls() {
  static size_t count = 0;
  return ++count;
}