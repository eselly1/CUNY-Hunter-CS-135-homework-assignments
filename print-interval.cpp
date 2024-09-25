/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Assignment: Lab 2B
Program: asks for lower and upper limits of 
a range, and prints all the numbers 
in the range
*/

#include <iostream>
using namespace std;

int main(){
    int l;
    int u;
    cout << "please enter L: " << endl;
    cin >> l;
    cout << "please enter U: " << endl;
    cin >> u;

    for (int i=l; i<u; i++){
        cout << i << " ";
    }

    return 0;
}