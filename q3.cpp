// create teh text file and store the user input
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("q3.txt");
    string name, city;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin >> city;
    file<<string(20,'-')<<"Student Data"<<string(20,'-')<<endl;
    file << "Name: " << name << endl
    << "Age: " << age << endl
    << "City: " << city << endl;
    file.close();
    return 0;
}