/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor: Tong Yee
Date: Sept 2024
Assignment: smaller of the two numbers
*/
#include <iostream> 
using namespace std;

int main (){
    int num1;
    int num2;
    cout << "enter first number:" << endl;
    cin >> num1;
    cout << "enter second number:" << endl;
    cin >> num2;
    if (num1 > num2){
        cout << "The smaller of the two is " << num2;
    }
    else {
        cout << "The smaller of the two is " << num1;
    }
    return 0;
}
