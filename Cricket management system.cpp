#include <iostream>
#include <iomanip>
using namespace std;
struct Player {
    string name;
    int runsScored;
    int wicketsTaken;
};
void addPlayer(Player players[], int &playerCount) 
{
    if (playerCount < 10) 
	{
        cout << "Enter player name: ";
        cin >> players[playerCount].name;
        cout << "Enter runs scored by the player: ";
        cin >> players[playerCount].runsScored;
        cout << "Enter wickets taken by the player: ";
        cin >> players[playerCount].wicketsTaken;

        playerCount++;
        cout << "Player added successfully.\n";
    } else {
        cout << "Maximum player limit reached.\n";
    }
}
void displayPlayers(const Player players[], int playerCount) 
{
    if (playerCount > 0) {
        cout << "\nPlayer Details\n";
        cout << setw(20) << "Name" << setw(20) << "Runs Scored" << setw(20) << "Wickets Taken\n";
        for (int i = 0; i < playerCount; ++i) {
            cout << setw(20) << players[i].name << setw(20) << players[i].runsScored << setw(20) << players[i].wicketsTaken << endl;
        }
    } else 
	{
        cout << "No players available.\n";
    }
}
float calculateBattingAverage(const Player players[], int playerCount) {
    if (playerCount > 0) {
        int totalRuns = 0;
        for (int i = 0; i < playerCount; ++i) {
            totalRuns += players[i].runsScored;
        }
        return static_cast<float>(totalRuns) / playerCount;
    } else {
        return 0.0;
    }
}
float calculateBowlingAverage(const Player players[], int playerCount) {
    if (playerCount > 0) {
        int totalWickets = 0;
        for (int i = 0; i < playerCount; ++i) {
            totalWickets += players[i].wicketsTaken;
        }
        return static_cast<float>(totalWickets) / playerCount;
    } else {
        return 0.0;
    }
}

int main() 
{
    const int MAX_PLAYERS = 10;
    Player players[MAX_PLAYERS];
    int playerCount = 0;
	int choice;
 do {
        cout << "\nCricket Management System\n";
        cout << "1. Add Player\n";
        cout << "2. Display Players\n";
        cout << "3. Calculate Batting Average\n";
        cout << "4. Calculate Bowling Average\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addPlayer(players, playerCount);
                break;
            case 2:
                displayPlayers(players, playerCount);
                break;
            case 3:
                cout << "Batting Average: " << calculateBattingAverage(players, playerCount) << endl;
                break;
            case 4:
                cout << "Bowling Average: " << calculateBowlingAverage(players, playerCount) << endl;
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

