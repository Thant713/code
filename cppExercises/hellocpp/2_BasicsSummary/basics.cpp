/*Enter your student ID number: Enter your current GPA: Enter your letter grade (A, B, C, D, F): 
Student ID: 12345
Current GPA: 3.5
Letter Grade: A
GPA with 0.5 improvement: 4
Honor roll eligible: 1*/

// TODO: Create a comprehensive program that applies all concepts from this chapter
// TODO: Declare and initialize variables for student ID (int), GPA (double), and grade letter (char)

// TODO: Add comments explaining what your program does

// TODO: Prompt user for their student ID number and get input

// TODO: Prompt user for their current GPA and get input

// TODO: Prompt user for their letter grade (A, B, C, D, F) and get input

// TODO: Display all the information in a formatted way using std::cout

// TODO: Calculate and display what their GPA would be if it increased by 0.5 points

// TODO: Use bool variable to check if GPA is above 3.0 (honor roll eligible)

#include <iostream>
using namespace std;

int main() {
    double id{0}, gpa{0};
    char lg;
    bool h;

    cout << "Enter your student ID number: " << "Enter your current GPA: " << "Enter your letter grade (A, B, C, D, F): ";
    cin >> id >> gpa >> lg;

    cout << "Student ID: " << id << endl
    << "Current GPA: " << gpa << endl
    << "Letter Grade: " << lg << endl
    << "GPA with 0.5 improvement: " << gpa + 0.5 <<endl;

    if (gpa > 3) {
        h = 1;
        cout << "Honor roll eligible: " << h;
    }

    return 0;
}