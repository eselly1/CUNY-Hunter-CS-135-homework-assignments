/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
date: Nov 2024
instructor: Tong Yi
assignment: Lab 10E
program: This program adds new function
timeOverlap, which returns a bool
true if the start/end times of
two time-slots overlap
*/

#include <iostream>
using namespace std;

class Time
{
public:
    int h;
    int m;
};

enum Genre
{
    ACTION,
    COMEDY,
    DRAMA,
    ROMANCE,
    THRILLER
};

class Movie
{
public:
    string title;
    Genre genre;
    int duration;
};

class TimeSlot
{
public:
    Movie movie;
    Time startTime;
};

// int minutesSinceMidnight(Time time)
// {
//     int elapsed = 0;
//     elapsed += time.h * 60;
//     elapsed += time.m;
//     return elapsed;
// }

// int minutesUntil(Time earlier, Time later)
// {
//     int dur_hr, dur_min = 0;
//     int total_dur;
//     dur_hr = later.h - earlier.h;
//     dur_min = later.m - earlier.m;

//     total_dur = dur_hr * 60;
//     total_dur += dur_min;

//     return total_dur;
// }

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

void printMovie(Movie mv)
{
    string g;
    switch (mv.genre)
    {
    case ACTION:
        g = "ACTION";
        break;
    case COMEDY:
        g = "COMEDY";
        break;
    case DRAMA:
        g = "DRAMA";
        break;
    case ROMANCE:
        g = "ROMANCE";
        break;
    case THRILLER:
        g = "THRILLER";
        break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts)
{
    Time end = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m
         << ", ends by " << end.h << ":" << end.m << "]" << endl;
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    Time end = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot
        next = {nextMovie, end};
    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    Time ts1_end = addMinutes(ts1.startTime, ts1.movie.duration);
    Time ts2_end = addMinutes(ts2.startTime, ts2.movie.duration);

    if (ts1.startTime.h == ts2.startTime.h)
    {
        return true;
    }

    if (ts1_end.h == ts2.startTime.h)
    {
        if (ts1_end.m > ts2.startTime.m)
            return true;
        else
            return false;
    }
    else if (ts1_end.h < ts2.startTime.h)
    {
        return false;
    }
    else if (ts2_end.h == ts1.startTime.h)
    {
        if (ts2_end.m > ts1.startTime.m)
            return true;
        else
            return false;
    }
    else if (ts2_end.h < ts1.startTime.h)
    {
        return false;
    }
    return true;

}
int main()
{
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Hereditary", THRILLER, 127};
    Movie movie4 = {"Woman of the Hour", THRILLER, 95};

    TimeSlot first = {movie1, {9, 15}};
    TimeSlot second = scheduleAfter(first, movie2);
    TimeSlot third = scheduleAfter(second, movie2);
    TimeSlot fourth = scheduleAfter(third, movie4);
    TimeSlot fifth = scheduleAfter(fourth, movie3);

    cout << timeOverlap(first, second);

    return 0;
}