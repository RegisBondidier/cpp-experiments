#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    // get input from user
    int n;
    cin >> n;
    string s;
    cin >> s;

    // count stones to remove
    int output = 0;
    if (s.length() != 1) {
        for (int i = 1; i < s.length(); ++i) {
            if (s[i-1] == s[i]) {
                ++output;
            }
        }
    }
    cout << output << endl;
    return 0;
}