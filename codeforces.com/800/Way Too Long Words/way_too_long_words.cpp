#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() 
{
    int nb_lines;
    cin >> nb_lines;
    vector<string> words(nb_lines);
    for (int i = 0; i < nb_lines; i++){
        string new_word;
        cin >> new_word;
        words.push_back(new_word);
    }

    for (string word: words) {
        int len = word.length();
        if (len > 10) {
            string abbr = word[0] + to_string(len - 2) + word[len - 1];
            cout << abbr << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
