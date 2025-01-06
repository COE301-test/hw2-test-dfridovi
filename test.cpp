#include "hello.hpp"

#include <iostream>

#define TEST_EQUALS(x, y) if (x != y) return 1;
#define TEST_CASE(f) if (f() != 0) return 1;

int my_fancy_tests() {
  Foo foo = Foo();
  TEST_EQUALS(foo.Function(), EXPECTED_RESULT);

  return 0;
}

int main(void) {
#  TEST_CASE(my_fancy_tests);

  TEST_EQUALS(Factorial(0), 1);
  TEST_EQUALS(Factorial(1), 1);
  TEST_EQUALS(Factorial(2), 2);
  TEST_EQUALS(Factorial(3), 6);
  TEST_EQUALS(Factorial(10), 3628800);

  return 0;
}
