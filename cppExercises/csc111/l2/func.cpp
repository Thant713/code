#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double F) {
    return 5 * (F - 32) / 9;
} 

int main() {
    const int col1 = 12;
    const int col2 = 10;

    cout << left << setw(col1) << "Fahrenheit" << setw(col2) << "Celsius" << endl;
    cout << fixed << setprecision(1);

    for (int F = 32; F <= 100; F++) {
        double C = celsius(F);
        cout << left << setw(col1) << F << setw(col2) << C << endl;
    }

    return 0;

}

/*
The formula for converting a temperature from Fahrenheit to Celsius is:

C = 5 * (F - 32) / 9

where F is the Fahrenheit temperature and C is the Celsius temperature.  
Write a function named celsius that accepts a Fahrenheit temperature as an argument.  
The function should return the temperature, converted to Celsius.  
Demonstrate the function by calling it in a loop that displays a table of the Fahrenheit temperatures 32 - 100 
and their Celsius equivalents.  The output should have column headings:

Fahrenheit  Celsius

Display the numbers in a standard width and fixed position and 1 decimal position in the Celsius column.  
Align the numbers with the first letter of the headings.
*/
