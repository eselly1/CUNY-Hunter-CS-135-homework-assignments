/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
instructor: Tong Yi
date: oct 2024
assignment: Lab 6D
program: This program encrypts and decrypts
given plain text using both Caesar and Vigenere 
methods of encryption. It first asks for a 
plaintext message, then asks for 
a number to shift the letters by for the
Caesar cipher. It encrypts the message, 
and using the returned value as an input, it 
reverses the encryption in a separate function.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
These two functions are recycled from caesar.cpp
*/

char shiftChar(char c, int rshift)
{
    if (isupper(c))
    {
        if (c + rshift > 90)
        {
            int wrap = (c + rshift) - 90;
            c = 64 + wrap;
        }
        else
        {
            c += rshift;
        }
    }
    else if (islower(c))
    {
        if (c + rshift > 122)
        {
            int wrap = (c + rshift) - 122;
            c = 96 + wrap;
        }
        else
        {
            c += rshift;
        }
    }
    return c;
}
string encryptCaesar(string plaintext, int rshift)
{
    string ciphertext = "";

    for (int i = 0; i < plaintext.length(); i++)
    {
        char c = char(plaintext[i]);
        char new_c = shiftChar(c, rshift);
        ciphertext += new_c;
    }
    return ciphertext;
}

/*
This function is recycled from vigenere.cpp
*/ 

string encryptVigenere(string plaintext, string keyword)
{
    string ciphertext2 = "";
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
            ciphertext2 += char(plaintext[i]);
        }
        else
            ciphertext2 += char(plaintext[i]);
    }

    return ciphertext2;
}

/*
Using the returned string ciphertext from encryptCaesar, 
this function reverses the Caesar cipher
*/

string decryptCaesar(string ciphertext, int rshift)
{
    string decrypted = "";
    for (int i = 0; i < ciphertext.length(); i++)
    {
        char c = char(ciphertext[i]);
        if (isupper(c))
        {
            if (c - rshift < 65)
            {
                int wrap = (c - rshift) + 90;
                c = wrap - 64;
            }
            else
            {
                c -= rshift;
            }
        }
        else if (islower(c))
        {
            if (c - rshift < 97)
            {
                int wrap = (c - rshift) + 122;
                c = wrap - 96;
            }
            else
            {
                c -= rshift;
            }
        }
        decrypted += c;
    }
    return decrypted;
}

/*
Using the returned string ciphertext2 from encryptVigenere, 
this function reverses the Vigenere cipher
*/

string decryptVigenere(string ciphertext2, string keyword)
{
    string decrypted = "";
    int key_i = 0;
    for (int i = 0; i < ciphertext2.length(); i++)
    {
        if (key_i > (keyword.length() - 1))
        {
            key_i = 0;
        }
        int shift;
        ciphertext2[i] = char(ciphertext2[i]);

        if (isalpha(ciphertext2[i]))
        {
            keyword[key_i] = char(keyword[key_i]);
            shift = keyword[key_i] - 97;
            if (isupper(ciphertext2[i]))
            {
                if (ciphertext2[i] - shift < 65)
                {
                    int wrap = (ciphertext2[i] - shift) + 90;
                    ciphertext2[i] = wrap - 64;
                }

                else
                {
                    ciphertext2[i] -= shift;
                }
            }

            else if (islower(ciphertext2[i]))
            {
                if (ciphertext2[i] - shift < 97)
                {
                    int wrap = (ciphertext2[i] - shift) + 122;
                    ciphertext2[i] = wrap - 96;
                }
                else
                {
                    ciphertext2[i] -= shift;
                }
            }
            key_i++;
            decrypted += char(ciphertext2[i]);
        }
        else
            decrypted += char(ciphertext2[i]);
    }

    return decrypted;
}

int main()
{
    string plaintext, keyword;
    int rshift;
    cout << "Enter plaintext: " << endl;
    getline(cin, plaintext);
    cout << endl;
    cout << "= Caesar =" << endl;
    cout << "Enter shift: " << endl;
    cin >> rshift;
    string ciphertext = encryptCaesar(plaintext, rshift);
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted: " << decryptCaesar(ciphertext, rshift) << endl;
    cout << endl;
    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: " << endl;
    cin >> keyword; 
    string ciphertext2= encryptVigenere(plaintext, keyword);
    cout << "Ciphertext: " << ciphertext2 << endl;
    cout << "Decrypted: " << decryptVigenere(ciphertext2, keyword) << endl;
    return 0;
}