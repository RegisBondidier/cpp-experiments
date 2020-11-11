#include <iostream>
#include <vector>

using namespace std;

const int nb_friends = 3;

int main() 
{
    // get input from user
    int nb_problem;
    cin >> nb_problem;
    vector<vector<int>> solutions(nb_problem, vector<int>(nb_friends));
    for (auto& solution: solutions) {
        for (auto& sol: solution) {
            cin >> sol;
        }
    }

    // sum of each solution
    vector<int> sum(nb_problem, 0);
    for (int x = 0; x < nb_problem; ++x) {
        for (int y = 0; y < nb_friends; ++y) {
            sum[x] += solutions[x][y];
        }
    }

    // number of accepted solutions
    int accepted = 0;
    for (int s: sum) {
        if (s >= 2) {
            accepted++;
        }
    }
    cout << accepted << endl;
    return 0;
}