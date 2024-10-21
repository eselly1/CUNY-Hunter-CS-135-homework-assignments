/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
date: oct 2024
instructor: Tong Yi
assignment: Lab 6C
program: This program is a vigenere cipher,
which shifts the letters of a phrase by
a different number of units for every letter
to encode the message
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string encryptVigenere(string plaintext, string keyword)
{
    string ciphertext = "";
    int key_i = 0;
    for (int i = 0; i < plaintext.length(); i++)
    {
        if (key_i > (keyword.length() - 1))
        {
            key_i = 0;

        }
        int shift;
        plaintext[i] = char(plaintext[i]);

        if (isalpha(plaintext[i]))
        {
            keyword[key_i] = char(keyword[key_i]);
            shift = keyword[key_i] - 97;
            if (isupper(plaintext[i]))
            {
                if (plaintext[i] + shift > 90)
                {
                    int wrap = (plaintext[i] + shift) - 90;
                    plaintext[i] = 64 + wrap;
                }

                else
                {
                    plaintext[i] += shift;
                }
            }

            else if (islower(plaintext[i]))
            {
                if (plaintext[i] + shift > 122)
                {
                    int wrap = (plaintext[i] + shift) - 122;
                    plaintext[i] = 96 + wrap;
                }
                else
                {
                    plaintext[i] += shift;
                }
            }
            key_i++;
            ciphertext += char(plaintext[i]);
        }
        else
            ciphertext += char(plaintext[i]);

        
    }

    return ciphertext;
}

int main()
{
    string plaintext, keyword;
    cout << "Enter plaintext: " << endl;
    getline(cin, plaintext);
    cout << "Enter keyword: " << endl;
    cin >> keyword;
    cout << "Ciphertext: " <<  encryptVigenere(plaintext, keyword) << endl;
    return 0;
}