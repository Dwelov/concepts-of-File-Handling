#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //ofstream is a class belonged to fstream header file
    ofstream file("ofstream.txt");

    //When you open a file using ofstream, if the file doesn’t exist, it will be created automatically.
    if (!file) {
        cerr << "Error opening the file" << endl;
        return 1;
    }

    file << "This is my first file operation in C++" << endl;

    // Now I am writing something more in the file using the insertion operator (<<)
    
    file << "Steps to Create a File in C++\n"
         << "The following are the steps involved to create the files.\n"
         << "Include the header file: You need <fstream> which provides classes for file handling.\n"
         << "Use ofstream class: ofstream is used to create and write to files.\n"
         << "When you open a file using ofstream, if the file doesn’t exist, it will be created automatically.\n"
         << "Open the file: You can open a file either by passing the filename in the constructor or using .open() method.\n"
         << "Write to the file: Use the insertion operator (<<) to write content.\n"
         << "Close the file: Always close the file using .close() to free resources.\n";

    file.close(); // good practice
   
    return 0;
}
