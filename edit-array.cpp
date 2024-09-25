/*
Author: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Instructor: Tong Yi 
Assignment: Lab 2C
Program: This program creates an array, fills it 
with the value of 1, and asks user to input an 
index and new value 
*/

#include <iostream>
using namespace std;

int main(){
    int myArray[10]= {1};
    // for (int i=0; i < 10; i++ ){
    //     myArray[i]=1;
    //}
    int i;
    int v; 
    do {
        for (int i=0; i < 10; i++){
            if (i==9)
                cout << myArray[i] << endl;
            else
                cout << myArray[i] << " ";
        }
        cout << "Input index: " << endl;
        cin >> i;
        cout << "Input value: " << endl;
        cin >> v;
        if (i >= 0 && i <= 9){
            myArray[i] = v;
        }
        
    } while (i >=0 && i <=9);

    if (i < 0 || i >= 10)
    cout << "Index out of range. Exit." << endl;

    return 0;
}