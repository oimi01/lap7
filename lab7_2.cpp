#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    string name;
    cout << "?????: ";
    getline (cin,name);    
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    int gear;
    cout << name << ": " ;
    cin >> gear;
    cout << "Fahsai: I think you may be GEAR " << (gear/10000000-12) << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();
    cout << name << ": " ;
    string movie;
    // cin >> movie;
    getline (cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string day;
    cout << name << ": " ;
    // cin >> day;
    getline (cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    string text;
    cout << name << ": " ;
    cin >> text;
    cout << "Fahsai: 555+ see you "<< day << ". Bye Bye \\(^ ^)/";


    return 0;
}