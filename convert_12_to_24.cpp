// Name: Eselly Lopez Luna
// Instructor: Tong Yi
// Course: CSCI 135
// Assignment: Project 1B
// Program: This program converts a string given in 12-hour notation 
// to 24-hour notation

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string time;
    string morning[] = {"01:", "02:", "03:", "04:", "05:", "06:", "07:", "08:", "09:", "10:", "11:", "00:"};
    string evening[] = {"13:", "14:", "15:", "16:", "17:", "18:", "19:", "20:", "21:", "22:", "23:", "12:"};
    cout << "Enter time in 12 hour notation: " << endl;
    getline(cin, time);
    int colon = time.find(":");
    string time_sub = time.substr(0, colon) + time.substr(colon + 1);
    if (time.substr(6,2)=="AM")
    {
        int hour = stoi(time_sub.substr(0, 2));
        int min = stoi(time_sub.substr(2, 2));
        if (hour >= 1 && hour <= 12 && min >= 00 && min <= 59)
        {
            if(min<10)
                cout << "12-hour notation " << time << " in 24-hour notation is "
                 << morning[hour - 1] <<"0" << min << "." << endl;
            else 
                cout << "12-hour notation " << time << "in 24-hour notation is "
                 << morning[hour - 1] << min << "." << endl;
        }
        else
        {
            cout << "Invalid input. " << endl;
            return -1;
        }
    }
    else if (time.substr(6,2)=="PM")
    {
        int hour = stoi(time_sub.substr(0, 2));
        int min = stoi(time_sub.substr(2, 2));
        if (hour >= 1 && hour <= 12 && min >= 00 && min <= 59)
        {
            if(min<10)
                cout << "12-hour notation " << time << " in 24-hour notation is "
                 << evening[hour - 1] << "0" << min << "." << endl;
            else 
                cout << "12-hour notation " << time << " in 24-hour notation is "
                 << evening[hour - 1] << min << "." << endl;
        }
        else
        {
            cout << "Invalid input." << endl;
            return -1;
        }
    }

    return 0;
}