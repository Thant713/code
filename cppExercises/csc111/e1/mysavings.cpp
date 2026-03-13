#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    double total{0}, eachAmount{0};
    int count{0};
    ifstream savings;

    savings.open("./savings.txt");
    if (!savings) {
        cout << "Error: file not found in the same folder as this program\n";
        return 1;
    }
    
    while (savings >> eachAmount) {
        total += eachAmount;
        count++;
    }

    cout << fixed << setprecision(2) << "You averaged $" << total / count << " savings per day and reached a total of $" 
    << total << " saved in " << count << " days." << endl;
    cout << "Submitted by: Thant Naing Aung\n"; 
    
    savings.close();
    
    return 0;
}

/*In this part II of the exam, please create a C++ program named mysavings.cpp that fulfills the following requirements

(25 points) In the main function of the C++ program, code program statements to do the following:
1. Download the attached savings.txt file. 

2. Save the savings.txt file to a location on your computer where the program can read it.

3. In a loop, read the amounts including cents from the savings.txt file. The loop should end when there are no more records.

4. Accumulate the total and count the number of records read. Each record read is 1 day of savings.

5. When the program finished reading all the records, calculate the average savings per day, and the total savings amount.

6. Write an output as follows:
"You averaged $ xxx.xx savings per day and reached a total of $ xxx.xx saved in nnn days."
where xxx.xx and nnn are numbers calculated by the program for average, total and count of records (1 line is 1 day of savings).

7.  Write another output line:  "Submitted by: " and your full name after.

Hint: In this file processing, you can use the stream operator >> as the file reader because the file contains only one column of numeric data with decimal positions.*/