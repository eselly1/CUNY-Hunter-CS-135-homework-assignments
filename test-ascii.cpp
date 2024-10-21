/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
instructor: Tong Yi
assignment: Lab 6A
program: This program takes a string input and returns 
the character from the input along with its ASCII code
*/

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;


int main() {
    
    string str;
    cout << "Input: " << endl;
    getline(cin, str);
    
    
    for (int i = 0; i < str.length(); i++){
        cout << str[i] << " " << int(char(str[i])) << endl;
    }
    
    return 0;
}
