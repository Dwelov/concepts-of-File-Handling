//reading the files and display them on the console
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("q3.txt");
    string line;
    if(file.is_open()){
        while(getline(file, line)){
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }
    return 0;
}
