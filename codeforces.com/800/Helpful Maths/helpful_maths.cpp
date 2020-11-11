#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    // get input from user
    string input;
    cin >> input;

    // rearrange the string
    vector<char> numbers;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] != '+') {
            numbers.push_back(input[i]);
        }
    }
    sort(numbers.begin(), numbers.end());

    // display output
    for (auto it = numbers.begin(); it != prev(numbers.end()); ++it) {
        cout << *it << '+';
    }
    cout << numbers.back() << endl;
    return 0;
}