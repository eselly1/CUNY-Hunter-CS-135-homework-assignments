/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
instructor: Tong Yi
course: CSCI 135
Assignment: homework E8.1
Program: this program reads and writes into a file
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream in_file;
    in_file.open("hello.txt");
    in_file << setw(13) << "Hello, World!";
    in_file.close();
    in_file.open("hello.txt");
    string greeting;
    getline(in_file, greeting);
    cout << greeting;
    return 0;

}