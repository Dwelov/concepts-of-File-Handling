#include <iostream>
#include <fstream>
using namespace std;

string name = "Siraj", password = "18hudd0";

//functions for the login
string login(string name, string password ){
 if(name == "Siraj" && password == "18hudd0"){
    return "Login Successful";
} else {
    return "Login Failed";
 }
}

int main(){
    string name, password;
    cout << "Enter your name: ";
    cin>>name;
    cout<<"Enter the password: ";
    cin>>password;
    ifstream readFile("ofstream.txt");
    if(login(name, password) == "Login Successful"){
        string line;
        if(readFile.is_open()){
            while(getline(readFile, line)){
                cout << line << endl;
            }
            readFile.close();
        } else {
            cout << "Unable to open file";
        }
    }
return 0;
}