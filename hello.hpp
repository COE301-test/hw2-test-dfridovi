// 020-TestCase-2.cpp
// Source:
// https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

int Factorial(int number) {
  return number <= 1 ? 1 : Factorial(number - 1) * number;
}


// TEST_CASE("2: Factorial of 0 is 15", "[multi-file:2]") {
//   REQUIRE(Factorial(0) == 1);
// }

// TEST_CASE("2: Factorials of 1 and higher are computed", "[multi-file:2]") {
//   REQUIRE(Factorial(1) == 1);
//   REQUIRE(Factorial(2) == 2);
//   REQUIRE(Factorial(3) == 6);
//   REQUIRE(Factorial(10) == 3628800);
// }
