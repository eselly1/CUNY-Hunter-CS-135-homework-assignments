/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi 
Course: CSCI 135
Assignment: Homework E 5.6
Program: This program returns the middle of a string
*/

#include <iostream>
#include <string> 
using namespace std;

string middle(string str){
    string mid;
    if (str.length() % 2 == 0){
        int i = str.length()/2;
        mid = str.substr(i-1,2);
    }
    else {
        int i = str.length()/2;
        mid = str.substr(i,1);
    }
    return mid;
}

int main(){
    string str;
    cout << "Enter a word:" << endl;
    cin >> str;
    cout << middle(str);
    return 0;
}