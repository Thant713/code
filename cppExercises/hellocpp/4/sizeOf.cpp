#include <iostream>
using namespace std;

int main() {
  int intArray[10]{};
  double doubleArray[10]{};
  char charArray[10]{};

  cout << "int array (10 elements): " << sizeof(intArray) << " bytes"
       << "\ndouble array (10 elements): " << sizeof(doubleArray) << " bytes"
       << "\nchar array (10 elements): " << sizeof(charArray) << " bytes"
       << endl;
  cout << "\nOne int: " << sizeof(int) << " bytes"
       << "\nOne double: " << sizeof(double) << " bytes"
       << "\nOne char: " << sizeof(char) << " bytes" << endl;

  if (sizeof(intArray) + sizeof(doubleArray) + sizeof(charArray)
      == (sizeof(int) + sizeof(double) + sizeof(char)) * 10) {
    cout << "\nVerification: int array = 4 * 10 = 40 bytes" << endl;
  }

  return 0;
}

/* cout << "\nVerification: int array = " << sizeof(int) << " * 10 = " <<
 * sizeof(int) * 10 << " bytes" << '\n'; */
// TODO: Print the total size of each array in bytes
// Example output:
//   int array (10 elements): 40 bytes
//   double array (10 elements): 80 bytes
//   char array (10 elements): 10 bytes

// TODO: Print the size of one element of each type
// Example output:
//   One int: 4 bytes
//   One double: 8 bytes
//   One char: 1 bytes

// TODO: Verify that total size = element size * count
// - Print a message confirming this relationship
