#include <iostream>
#include <fstream>
#include <climits>
#include <iomanip>
using namespace std;

int main() {
    int numRecords(0), num(0), total(0), min = INT_MAX, max = INT_MIN;
    double avg(0);
    ifstream statistics;
    
    statistics.open("statistic.txt");
    if (!statistics) {
        cout << "Error: statistics.txt not found in the same folder as this program.\n";
        return 1;
    }
    while (statistics >> num) {
        numRecords++;
        total += num;
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    avg = static_cast<double>(total) / numRecords;

    cout << "Minimum value: " << min << endl
    << "Maximum value: " << max << endl
    << "Average: " << fixed << setprecision(2) << avg << endl
    << "Total value: " << total << endl
    << "Number of records: " << numRecords << endl
    << "Submitted by: Thant Naing Aung" << endl;

    return 0;
}






/*

In this assignment, you need to write a C++ program that will read the attached statistics.txt file and calculate the 5 statistical values from the file.  
Name the program statsApp.cpp and write code to use ifstream from the #include<fstream> preprocessor library.  Add code to define ifstream and open the file for input. 
You can use sample programs from Chapter 5 and modify it for this assignment.

Use any of the loop processing methods we learned (while, do-while or for loops).

Define any variables you need to be able to calculate the statistical information.

When all the records are read, write the information to the console and add "Submitted by:  your-name" as the last line in the output.

Download the statistics.txt which is a file containing more than 4000 records and report the following:

    Minimum value
    Maximum value
    Average
    Total value
    Number of records

Output lines should list the name of the calculated statistic, followed by a semicolon and the number, with 2 decimal positions for average only.  
Take a screen image of the output.  Example (numbers are sample numbers only, not the answer):

Minimum:  -399

Maximum:  203043

Total:  4237893

Average:  5869.34

Number of records:  4356 */