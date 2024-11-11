/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi
Course: CSCI 135
Assignment: Homework E5.15
Program: This program sorts 3 numbers
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    if (a > b)
    {
        int d = a;
        a = b;
        b = d;
    }
    
}

void sort3(int &a, int &b, int &c){
    sort2(a,b);
    sort2(b,c);
    sort2(a,c);
    if (b<a)
        sort2(a,b);

}
int main()
{
    int a, b, c;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Enter third number: " << endl;
    cin >> c;

    sort3(a,b,c);

    cout <<a << b<< c<<endl;

    return a, b, c;
}