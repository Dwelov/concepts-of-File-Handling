#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file1("copy_of_ofstream.txt");
    ifstream file2("intro.txt");
    ofstream mergedFile("merged.txt");
    if(file1.is_open() && file2.is_open() && mergedFile.is_open()){
        string line;
        while(getline(file1, line)){
            mergedFile << line << endl;
        }
        file1.close();
        while(getline(file2, line)){
            mergedFile << line << endl;
        }
        file2.close();
        mergedFile.close();
    }
    return 0;
}