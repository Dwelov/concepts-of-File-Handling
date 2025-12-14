#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(ifstream& file) {
    string line;
    if (!file.is_open()) {
        cerr << "Error opening the file" << endl;
        return; // stop the function instead of break
    }
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    ifstream file("Book1.csv"); // replace with your filename
    readFile(file);
    return 0;
}
