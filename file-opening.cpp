//in this program we will perform the file opening and reading
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream file;
    string line;
    // first checking the file exists or not
    if (!file) {
        cerr << "Error opening the file" << endl;
        return 1;
    }
    //we have to open the file before reading
    file.open("ofstream.txt");
    //getline() is a function that reads a line from the input stream and stores it into the string object line
    //that we declared first, it will run once for each line until the end of the file
    // getline() works only with the input stream i.e, ifstream or cin
    while (getline(file, line)) {
        cout << line << endl;
    }
    //always close the files after operations
    file.close();
    return 0;
}