#include <iostream>

using namespace std;

int main() 
{
    // get input from user
    int M, N;
    cin >> M >> N;

    // How many dominos can be placed
    int nb_dominos;
    nb_dominos = (M * N) / 2;
    cout << nb_dominos << endl;
    return 0;
}