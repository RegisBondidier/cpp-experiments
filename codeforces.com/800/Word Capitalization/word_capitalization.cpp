#include <iostream>

using namespace std;

int main() 
{
    // get input from user
    string s;
    cin >> s;

    // Capitalize
    s.front() = toupper(s.front());
    cout << s << endl;
    return 0;
}