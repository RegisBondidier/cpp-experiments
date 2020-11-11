#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    // get input from user
    int input;
    int i_one, j_one;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> input;
            if (input == 1) {
                i_one = i;
                j_one = j;
            }
        }
    }
    int i_moves = abs(2 - i_one);
    int j_moves = abs(2 - j_one);
    int nb_moves = i_moves + j_moves;

    cout << nb_moves << endl;
    return 0;
}