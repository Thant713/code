#include <iostream>
#include <string>
using namespace std;

void printLine() {
  cout << string(20, '-') << endl;
  return;
}

void printGreeting() {
  cout << "Hello, World!" << endl;
  return;
}

void printNumber(int n) { cout << "Number: " << n << endl; }

int main() {
  printLine();
  printGreeting();
  printNumber(42);
  printLine();
  return 0;
}

// TODO: Create a void function named printLine that prints 20 dashes
// - The function takes no parameters
// - It should print a line of 20 '-' characters followed by a newline

// TODO: Create a void function named printGreeting that takes no parameters
// - Print "Hello, World!"

// TODO: Create a void function named printNumber that takes an int parameter
// - Print "Number: " followed by the number

// TODO: Call printLine(), then printGreeting(), then printNumber(42), then
// printLine() again Expected output:
//   --------------------
//   Hello, World!
//   Number: 42
//   --------------------