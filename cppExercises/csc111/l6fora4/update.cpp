// Submitted by: Thant Naing Aung
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main() {
    ofstream winnersFile;
    winnersFile.open("WorldSeriesWinners.txt", std::ios::app);

    if (!winnersFile) {
        cout << "Unable to open winners file." << endl;
        return 0;
    }

    ifstream newwinnersFile;
    newwinnersFile.open("NewWinners.txt");

    if (!newwinnersFile) {
        cout << "Unable to open new winners file." << endl;
        winnersFile.close();
        return 0;
    }

    string team;
    int count = 0;

    while (getline(newwinnersFile, team)) {
        winnersFile << team << endl;
        count++;
    }

    cout << count << " winning teams added to the file." << endl;

    winnersFile.close();
    newwinnersFile.close();

    return 0;
}
/*Lab Exercise 6 - Update the WorldSeriesWinners.txt with newwinners.txt teams
Instructions

In Assignment 4, World Series Winners, the winners.txt was not updated since 2020.
Write a C++ program to append the attached file to the end of the WorldSeriesWinners.txt file.
You can either read from the old file WorldSeriesWinners.txt, and read the newwinners.txt file and create a new output  file,
or open the old file as ofstream with an append option, and read the newwinners.txt file to add new records to the end of the file.
Don't forget to close the files.

The NewWinners.txt will be attached to this assignment.  To complete this assignment, attach your source code.*/

