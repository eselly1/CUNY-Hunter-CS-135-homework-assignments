/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@muhynter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Homework e4.8
Program: This program takes a string and prints 
out each character on a separate line
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter name: " << endl;
    cin >> name;
    for (int i=0; i<name.length(); i++){
        cout << name[i] << endl;
    }

    return 0;
}