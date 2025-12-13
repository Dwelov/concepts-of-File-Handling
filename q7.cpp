#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("ofstream.txt");
    ofstream copy("copy_of_ofstream.txt");
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            copy << line << endl;
        }
    }
    return 0;
}