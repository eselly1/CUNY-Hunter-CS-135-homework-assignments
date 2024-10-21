/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
instructor: Tong Yi
assignment: Lab 6B
program: This program is a Caesar cipher, which
encrypts words by shifting letters a certain number
of units to the right
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){
    if (isupper(c)){
        if (c + rshift > 90){
            int wrap = (c + rshift) - 90;
            c= 64+wrap;

        }
        else{
            c+=rshift;
        }
    }
    else if (islower(c)){if (c + rshift > 122){
            int wrap = (c + rshift) - 122;
            c= 96+wrap;

        }
        else{
            c+=rshift;
        }

    }
    return c;
    
}

string encryptCaesar(string plaintext, int rshift){
    string message = "";

    for (int i = 0; i < plaintext.length(); i ++){
        char c = char(plaintext[i]);
        char new_c = shiftChar(c, rshift);
        message += new_c;

    }
    return message;
}

int main(){
    string plaintext;
    int rshift;

    cout << "Enter plaintext: " << endl;
    getline(cin, plaintext);
    cout << "Enter shift: " << endl;
    cin >> rshift;

    cout << "Ciphertext: " << encryptCaesar(plaintext,rshift) << endl;
    
    return 0;
}