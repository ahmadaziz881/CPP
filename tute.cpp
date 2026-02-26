#include <iostream>
using namespace std;

int main() {
    const int candidates = 3;
    const int voters = 10;
    
    int votes[candidates] = {0};   
    int choice;

    cout << "<----Voting---->" << endl;
    cout << "Members:" << endl;
    cout << "1. member A" << endl;
    cout << "2. member B" << endl;
    cout << "3. member C" << endl;

    // Voting 
    for(int i = 1; i <= voters; i++) {
        cout << "\nVoter " << i << ", enter your vote (1-3): ";
        cin >> choice;

        if(choice >= 1 && choice <= 3) {
            votes[choice - 1]++;   
        } else {
            cout << "Invalid vote! Try again." << endl;
            i--;  
        }
    }

  
    cout << "\n===== RESULTS =====" << endl;
    cout << "Candidate A: " << votes[0] << " votes" << endl;
    cout << "Candidate B: " << votes[1] << " votes" << endl;
    cout << "Candidate C: " << votes[2] << " votes" << endl;

 
    int maxVotes = votes[0];
    int winnerIndex = 0;

    for(int i = 1; i < candidates; i++) {
        if(votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    cout << "\nWinner: Candidate " << char('A' + winnerIndex) 
         << " with " << maxVotes << " votes!" << endl;

    return 0;
}