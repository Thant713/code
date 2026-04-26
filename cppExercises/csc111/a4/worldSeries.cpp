// "Submitted by: Thant Naing Aung"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::cout;
using std::ifstream;
using std::string;
using std::endl;
using std::cin;

int main() {

  ifstream teamFile("Teams.txt");
  ifstream winnersFile("WorldSeriesWinners.txt");

  if (!teamFile || !winnersFile) {
    cout << "Error opening files." << endl;
    return 0;
  }

  string teamList[31];
  string winners[130];
  string line;

  int i = 0;

  while (getline(teamFile, line)) {
    if (!line.empty() && line.back() == '\r') {
      line.pop_back();
    }
    teamList[i++] = line;
  }

  i = 0;

  while (getline(winnersFile, line)) {
    if (!line.empty() && line.back() == '\r') {
      line.pop_back();
    }
    winners[i++] = line;
  }

  teamFile.close();
  winnersFile.close();

  for (int i = 0; i < 31; i++) {
    cout << teamList[i] << endl;
  }

  char choice = 'y';

  while (choice == 'y') {

    string userTeam;
    cout << "Enter a team name: ";
    getline(cin >> std::ws, userTeam);

    if (!userTeam.empty() && userTeam.back() == '\r') {
      userTeam.pop_back();
    }

    bool foundTeam = false;

    for (int i = 0; i < 31; i++) {
      if (teamList[i] == userTeam) {
        foundTeam = true;
      }
    }

    int year = 1903;
    int count = 0;
    std::vector<int> yrs;

    if (foundTeam) {

      for (int i = 0; i < 130; i++) {
        if (winners[i] == userTeam) {
          yrs.push_back(year + i);
          count++;
        }
      }

      cout << "In years ";
      for (int i = 0; i < yrs.size(); i++) {
        cout << yrs[i];
        if (i < yrs.size() - 1) {
          cout << ", ";
        }
      }
      cout << endl;

      cout << "Team " << userTeam << " won " << count << " times" << endl;

    } else {
      cout << "Invalid Team" << endl;
    }

    cout << "Search another team? (y/n): ";
    cin >> choice;
  }

  cout << "Submitted by: Thant Naing Aung" << endl;

  return 0;
}
