#include <iostream>
#include <string>
#include <fstream>
using std::cout;
using std::ifstream;
using std::string;
using std::endl;
using std::cin;

int main() {
  ifstream teamFile("Teams.txt");
  ifstream winnersFile("WorldSeriesWinners.txt");
  string teamList[31], team, winners[130], winner;

  int i = 0;
  while (getline(teamFile, team)) {
    teamList[i] = team;
    i++;
  }

  i = 0;
  while (getline(winnersFile, winner)) {
    winners[i] = winner;
    i++;
  }

  i = 0;
  while (i < 31) {
    cout << teamList[i] << "\n";
    i++;
  }

  string userTeam;
  cout << "Enter a team name: " << endl;
  getline(cin, userTeam);

  std::find(teamList, teamList + 31, userTeam);




  return 0;
}
/*Assignment 4 - World Series Winners

Instructions

This homework is from our textbook page 459 # 16. The Dodgers recently won the World Series vs the Tampa Bay Rays. Attached are two files:

Teams.txt
This file contains a list of several Major League baseball teams in alphabetical order. Each team listed in the file has won the World Series at least once.

WorldSeries Winners.txt
This file contains a chronological list of the World Series winning teams from 1903–2020.
The first line is the team that won in 1903, and the last line is the team that won in 2020.
Note: The World Series was not played in 1904 or 1994.

Write a program to append (using another file) the winners from 2021–2026. You can create another file of new winners.

Write a program that:

* Displays the contents of Teams.txt on the screen
* Prompts the user to enter the name of a team
* Displays the number of times that team has won the World Series from 1903 to 2026

In the program, 2 arrays are needed:

* TeamList array
* Winners array

TeamList array will contain entries from Teams.txt.
Winners array will contain entries from WorldSeriesWinners.txt.

Use a search algorithm to validate whether the user’s entry exists in the team list.

Use a loop to:

* Count the years the team won the World Series
* List those years in the output
* Display the total number of wins

Output format should be:

In years xxxx, xxxx, xxxx, xxxx, ...
Team xxxxxx won n times.

Add logic to allow another search or exit the program.

Remember to add your name in a comment in the program and display:
Submitted by: Your Name

Upload:

* Completed program source code (.cpp file)
* Image of the output

Issues with other operating systems:

You might encounter issues with invalid characters in Teams.txt and WorldSeriesWinners.txt due to incompatible text encoding.
Windows uses CR/LF line endings, while UNIX (MacOS/Linux) uses LF only.

Additional OS-specific files are provided:

* TeamsForMac.txt
* WorldSeriesWinnersForMac.txt

Use these files for MacOS or Linux environments.

Assignments and Lab Exercises are due 1 week after release. After one week past the due date, submissions are no longer accepted or graded.
*/
