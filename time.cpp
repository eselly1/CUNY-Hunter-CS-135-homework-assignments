/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
date: Nov 2024
instructor: Tong Yi
assignment: Lab 10B
program: This program adds the function
addMinutes which returns the time after 
min minutes have elapsed
after Time time
*/

#include <iostream>
using namespace std;

class Time
{
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time)
{
    int elapsed = 0;
    elapsed += time.h * 60;
    elapsed += time.m;
    return elapsed;
}

int minutesUntil(Time earlier, Time later)
{
    int dur_hr, dur_min = 0;
    int total_dur;
    dur_hr = later.h - earlier.h;
    dur_min = later.m - earlier.m;

    total_dur = dur_hr * 60;
    total_dur += dur_min;

    return total_dur;
}

Time addMinutes(Time time0, int min)
{
    if (min >= 60)
    {
        time0.h += min / 60;
        min = min % 60;

        if (time0.m + min >= 60)
        {
            time0.h += 1;
            time0.m = (time0.m + min) - 60;
        }
        else
            time0.m = time0.m + min;
    }
    else
    {
        if (time0.m + min >= 60)
        {
            time0.h += 1;
            time0.m = (time0.m + min) - 60;
        }
        else
            time0.m = time0.m + min;
    }

    return time0;
}

int main()
{
    int min, h, m;
    cout << "Enter time: " << endl;
    cin >> h >> m;
    Time time0 = {h, m};

    cout << "Enter duration: " << endl;
    cin >> min;

    time0 = addMinutes(time0, min);
    cout << time0.h << ":" << time0.m << endl;

    return 0;
}