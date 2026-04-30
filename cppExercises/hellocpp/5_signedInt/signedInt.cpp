#include <iostream>
int main()
{
  short smallNum{-100};
  int Num{42000};
  long bigNum{1000000};
  std::cout << smallNum << std::endl << Num << std::endl << bigNum << std::endl << smallNum + Num << std::endl << bigNum / Num << std::endl << bigNum % smallNum << std::endl;

  return 0;
}
// TODO: Declare short, int, and long variables and print them
// - short smallNum{-100}
// - int regularNum{42000}
// - long bigNum{1000000}
// Example output:
//   short: -100
//   int: 42000
//   long: 1000000

// TODO: Print arithmetic results
// - Show addition, integer division, and modulo
// Example output:
//   15 + 7 = 22
//   17 / 5 = 3
//   17 % 5 = 2

