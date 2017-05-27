#include "std_lib_facilities.h"

int main()
{
    string first_name, friend_name, pronoun;
    char friend_sex;

    cout << "Enter name of person you want to write to:\n";
    cin >> first_name;
    cout << "Enter name of a mutual Friend:\n";
    cin >> friend_name;
    cout << "Enter 'm' if " << friend_name << "is male and 'f' if female.\n";
    cin >> friend_sex;

    if(friend_sex == 'm') {
        pronoun = "him";
    } else if(friend_sex == 'f') {
        pronoun = "her";
    } else {
        pronoun = "them";
    }

    cout << "Dear " + first_name + ",\n";
    cout << "   Have you seen " + friend_name + " lately?\n";
    cout << "Please tell " << pronoun << " I say hi.\n";


    keep_window_open();
    return 0;
}
