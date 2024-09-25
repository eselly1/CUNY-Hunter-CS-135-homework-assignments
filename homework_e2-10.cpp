/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Assignment: Homework E2.10
Program: prints the cost per 100 miles and
distance a car can go given user input of 
number of gallons, fuel efficiency, and cost 
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int gallons;
    int efficiency;
    float cost;

    cout << "Enter gallons: " << endl;
    cin >> gallons;
    cout << "Enter efficiency: " << endl;
    cin >> efficiency;
    cout << "enter cost: " << endl;
    cin >> cost;
    int dist = 100/efficiency;

    cout << dist * cost  << " " << gallons / efficiency;
    
    return 0;
}