#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));
  int array[100], min(INT_MAX), max(INT_MIN), total(0),
      count = sizeof(array) / sizeof(array[0]), evenCount(0), oddCount(0);
  for (int i = 0; i < 100; i++) {
    array[i] = rand() % 100 + 1;

    cout << array[i] << " ";
    if ((i + 1) % 20 == 0) {
      cout << endl;
    }

    if (array[i] < min) {
      min = array[i];
    }

    if (array[i] > max) {
      max = array[i];
    }

    if (array[i] % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
    total += array[i];
  }
  cout << "Minimum value: " << min << "\nMaximum value: " << max
       << "\nTotal of all the numbers: " << total
       << "\nAverage of all the numbers: " << float(total) / count
       << "\nThe numbers in the middle of the array: " << array[99 / 2] << " "
       << array[100 / 2]
       << "\nThe number in the first element of the array: " << array[0]
       << "\nThe number in the last element of the array: " << array[99]
       << "\nCount of odd numbers: " << oddCount
       << "\nCount of even numbers: " << evenCount << endl;

  return 0;
}

// notes to self: 9, 11, 12, 15, 37, 38, 40 hardcoded

/*Lab Exercise:  Creating an array of random numbers

In this exercise, we will work with an array of 100 elements. The numbers loaded
into the array will be generated using a randomizer function.  Once the array is
loaded, generate the following statistics:

    Print the numbers of the array in 5 rows of 20 numbers each
    Minimum value
    Maximum value
    Total of all the numbers
    Average of all the numbers
    The number in the middle of the array
    The number in the first element of the array
    The number in the last element of the array
    Count of odd numbers
    Count of even numbers

Note:  You might need to research how to use the randomizer function of C++.
*/