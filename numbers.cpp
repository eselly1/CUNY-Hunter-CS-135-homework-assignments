/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor:  Tong Yi
Date: Oct 2024
Assignment: Lab 5E
Program: This program adds a function
isTwinPrime which returns if n+2 or
n-2 is a prime number
*/

#include <iostream>
using namespace std;

// bool isDivisibleBy(int n, int d)
// {
//     if (d == 0)
//     {
//         cout << "No" << endl;
//         return false;
//     }
//     if (n % d == 0)
//     {
//         cout << "Yes" << endl;
//         return true;
//     }
//     else
//     {
//         cout << "No" << endl;
//         return false;
//     }
// }

bool isPrime(int n)
{
    bool is_prime = true;
    if (n == 1 || n == 0 || n < 0)
    {
        is_prime = false;
        return is_prime;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0 && i > 1)
        {
            is_prime = false;
        }
    }

    return is_prime;
}
int nextPrime(int n)
{
    do
    {
        n += 1;
        isPrime(n);
    } while (!isPrime(n));

    return n;
}

int countPrime(int n, int d)
{
    int primeCount = 0;
    do
    {
        n = nextPrime(n);
        primeCount++;

    } while (n <= d);

    cout << primeCount;
    return primeCount;
}

bool isTwinPrime(int n)
{
    if (isPrime(n))
    {
        if (isPrime((n + 2)))
            return true;
        else if (isPrime((n - 2)))
            return true;
        else
            return false;
    }
    else
        return false;
}

int nextTwinPrime(int n)
{
    do
    {
        n = nextPrime(n);

    } while (!isTwinPrime(n));
    return n;
}

int largestTwinPrime(int n, int d)
{
    int prevTwin = 0;
    if (isTwinPrime(n))
        prevTwin = n;
    while (nextTwinPrime(n) <= d && n < d){
        n = nextTwinPrime(n);
        if (n > prevTwin)
        {
            prevTwin = n;
        }
    }

    if (prevTwin == 0)
        return -1;
    else
        return prevTwin;
}
int main()
{
    int n, d;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "enter another number: " << endl;
    cin >> d;

    cout << largestTwinPrime(n, d);
    return 0;
}