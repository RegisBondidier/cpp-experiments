// read and write a first name 
#include "std_lib_facilities.h" 
int main() 
{ 
    // Get info from user
    cout << "Please enter your first name (followed by 'enter'):\n"; 
    string first_name; // first_name is a variable of type string 
    cin >> first_name; // read characters into first_name
    cout << "Please enter your friend name (followed by 'enter'):\n"; 
    string friend_name; // first_name is a variable of type string 
    cin >> friend_name; // read characters into first_name
    cout << "Please enter your friend sex (m/f followed by 'enter'):\n"; 
    char friend_sex {0};
    cin >> friend_sex;
    cout << "Please enter your age (followed by 'enter'):\n"; 
    int age {0};
    cin >> age;
    if (age <=0 || age > 110)
    {
        simple_error("you're kidding!");
    }

    // Print message
    cout << "Dear " << first_name << ",\n\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    
    if (friend_sex == 'm') 
    {
        cout << "If you see " << friend_name << " please ask him to call me\n";
    }
    else
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age < 12)
    {
        cout << "Next year you will be " << age+1 << ".\n";
    }
    if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    if (age >= 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }
    cout << "Yours sinverely,\n\n\t\t\tRegis\n\n";
}