#include <iostream>
#include <fstream>
using namespace std;

void addData()
{
    ofstream writeFile("ofstream.txt", ios::app);
    if (writeFile.is_open())
    {
        writeFile << "This is a new line added to the file.\n";
        writeFile.close();
    }
    else
    {
        cout << "Unable to open file for writing";
    }
}
int main()
{
    string data;
    cout << "Enter the data to be added to the file: ";
    getline(cin, data);
    addData();
    return 0;
}