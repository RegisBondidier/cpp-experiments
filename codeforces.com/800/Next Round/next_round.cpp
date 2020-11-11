#include <iostream>
#include <vector>

using namespace std;

const int nb_friends = 3;

int main() 
{
    // get input from user
    int nb_participants ;
    cin >> nb_participants;
    int kplace;
    cin >> kplace;
    vector<int> scores(nb_participants);
    for (auto& score: scores) {
        cin >> score;
    }

    int next_round_score = scores[kplace-1];
    int next_round_participant_number = 0;
    for (auto& score: scores) {
        if ( (score > 0) && (score >=next_round_score) ) {
            next_round_participant_number++;
        }
    }
    cout << next_round_participant_number << endl;
    return 0;
}