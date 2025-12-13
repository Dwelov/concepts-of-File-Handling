// Appending new data in the file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file("q3.txt", ios::app);
    string data;
    cout << "Enter the data you want to enter in the file:";
    getline(cin, data);
    if (file.is_open())
    {
        file << string(20, '-') << endl; // Adding a separator line
        file << data << endl;
        file.close();
        cout << "Data appended successfully.";
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}