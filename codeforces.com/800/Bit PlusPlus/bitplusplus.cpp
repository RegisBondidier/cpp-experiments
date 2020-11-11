#include <iostream>

using namespace std;

int main() 
{
    // get input from user
    int nb_statements;
    cin >> nb_statements;
    int x = 0;
    while(nb_statements--) {
        string statement;
        cin >> statement;
        if ((statement == "++x") ||
            (statement == "x++") ||
            (statement == "++X") ||
            (statement == "X++")) {
            x++;
        }
        if ((statement == "--x") ||
            (statement == "x--") ||
            (statement == "--X") ||
            (statement == "X--")) {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}