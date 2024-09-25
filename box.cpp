/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Lab 4A
Program: This program takes an input of 
width and height and returns a box of
those dimensions
*/

#include <iostream>
using namespace std;

int main(){
    int w,h;
    cout << "Input width: " << endl;
    cin >> w;
    cout << "Input height: " << endl;
    cin >> h;
    cout << "Shape:" << endl;
    for(int i =0; i<h; i++){
        for(int i= 0; i<w;i++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}