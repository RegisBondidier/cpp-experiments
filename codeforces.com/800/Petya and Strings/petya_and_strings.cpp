#include <iostream>

using namespace std;

int main() 
{
    // get input from user
    string s1, s2;
    cin >> s1 >> s2;

    int result = 0;
    for (int i = 0; i < s1.length(); ++i) {
        if (tolower(s1[i]) > tolower(s2[i])) {
            result = 1;
            break;
        }
        if (tolower(s1[i]) < tolower(s2[i])) {
            result = -1;
            break;
        }
    }
    cout << result << endl;

    return 0;
}