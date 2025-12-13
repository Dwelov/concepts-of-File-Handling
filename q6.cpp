#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void textInfo(ifstream& file){
    int wordCount,lineCount,charCount;
    wordCount = lineCount = charCount = 0;
    string line,word;
    if(file.is_open()){
        while(getline(file,line)){
            lineCount++;
            charCount += line.length();//counts the charcter stream that makes up the line
            istringstream iss(line); // iss creates a stream from the line. this can be helpful because
            //the extraction operator is automatically splits by the whitespace
            while(iss >> word){
                wordCount++;
            }
        }
        cout << "Number of lines: " << lineCount << endl;
        cout << "Number of words: " << wordCount << endl;
        cout << "Number of characters: " << charCount << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
}

int main(){
    ifstream file("ofstream.txt");
    textInfo(file);
    return 0;
}