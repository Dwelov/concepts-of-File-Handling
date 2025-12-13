#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

string toLowerCase(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main()
{
    string word, searchWord;
    ifstream file("ofstream.txt");
    cout << "Enter a word you want to search in the file: ";
    cin >> searchWord;
    if (file.is_open())
    {
        bool found = false;
        while (file >> word)
        {
            if (toLowerCase(word) == toLowerCase(searchWord))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Word found in the file" << endl;
            return 1;
        }
        else
        {
            cout << "Word not found in the file" << endl;
            return 0;
        }
    }
    else
    {
        cout << "Unable to open file" << endl;
        return -1;
    }
}