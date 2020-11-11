#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    // get input from user
    string s;
    cin >> s;

    // count distict characters of s
    vector<int> alphabet(26, 0);
    for (int i = 0; i < s.length(); ++i) {
        int index = s[i] - 'a';
        alphabet[index] = 1;
    }
    int unique_letters = 0;
    for (auto letter : alphabet) {
        unique_letters += letter;
    }

    string output = ((unique_letters % 2) == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";
    cout << output << endl;
    return 0;
}