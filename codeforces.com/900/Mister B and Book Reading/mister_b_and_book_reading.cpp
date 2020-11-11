#include <iostream>

using namespace std;

int main() 
{
    // get input from user
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;

    // Compute number of days
    int nb_pages_left = c;
    int days = 0;

    while (true) {
        int speed = v0 + a * days;
        if (speed > v1) speed = v1;
        nb_pages_left -= speed;
        ++days;
        if (nb_pages_left > 0) {
            // reread
            nb_pages_left += l;
        } else {
            break;
        }
    }

    // Print number of days
    cout << days << endl;
    return 0;
}