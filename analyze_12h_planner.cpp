// file name: analyze_12h_planner.cpp
#include <iostream>
#include <fstream> //ifstream, ofstream
#include <string>
using namespace std;

//(1) function declaration with only function header, no function body.
//(2) main function needs to know the parameters and return type of
//    a function so that it can call the function.
//(3) function definitation will be put after the definition of main function
string hours_minutes_in_24h(string str);

int duration(string str);

#ifndef UNIT_TEST
int main()
{

    // TODO: enter file name
    string file_name;
    cout << "Enter file name: " << endl;
    getline(cin, file_name);

    // TODO: enter the priority to search for as a string
    string targ_priority;
    cout << "Enter priority: " << endl;
    cin >> targ_priority;

    // TODO: instantiate an ifstream object fin to open the file with given file name
    ifstream fin(file_name);

    // TODO: skip the first line of the csv file since it is captions, no actual data
    string caption;
    getline(fin, caption);

    // each row of data has time interval, activity name, and priority
    string time;     // variable to save time interval
    string activity; // variable to save activity name
    string priority; // variable to save priority
    int total = 0;
    // Note that fin is the ifstream object to read the input file.
    while (getline(fin, time, ','))
    {
        getline(fin, activity, ',');
        getline(fin, priority); // priority is the last data in a row, no ',' followed

        // TODO:  process the read data
        if (targ_priority == priority)
        {
            int dur;
            dur = duration(time);
            total += dur;
            cout << time << "," << activity << "," << dur << endl;
        }
    }

    // TODO: close file object fin.
    fin.close();
    // TODO: print total duration of all activities in that priority
    cout << "Total duration: " << total;

    return 0;
}
#endif

// Purpose: Let str be a string representing time in 12-hour notation.
// Convert 12-hour time notation str to 24-hour notation,
// where hours information is put in variable hours,
// minutes information is put in variable minutes.
// For example, if str is "12:30 am", then hours is 0 and minutes is 30.
// if str is "1:02 pm", then hours is 13 and minutes is 2.
//
// The & following type int in int& hours
// means formal parameter hours is pass by reference.
// Similar for & in int& minutes.

// function definition, with instructions provided in function body.
string hours_minutes_in_24h(string str)
{
    // TODO: write instructions in function body
    string morning[] = {"01:", "02:", "03:", "04:", "05:", "06:", "07:", "08:", "09:", "10:", "11:", "00:"};
    string evening[] = {"13:", "14:", "15:", "16:", "17:", "18:", "19:", "20:", "21:", "22:", "23:", "12:"};

    int colon = str.find(":");
    string time_sub = str.substr(0, colon) + str.substr(colon + 1);
    if (str.substr(6, 2) == "AM")
    {
        int hour = stoi(time_sub.substr(0, 2));
        string min=time_sub.substr(colon+1);

        string time = "";
        time += morning[hour - 1];
        time += min;
        return time;
    }
    else if (str.substr(6, 2) == "PM")
    {
        int hour = stoi(time_sub.substr(0, 2));
        string min=time_sub.substr(colon+1);

        string time = "";
        time += evening[hour - 1];
        time += min;
        return time;
    }
}

// Let time be a string using dash symbol '-' to separate two time in 12 hours notation.
// An example of str is "11:30 am-2:15 pm", return the duration between those two time notations in minutes.
// Since the number of minutes between 11:30 am and 2:15 pm is 165 minutes,
// the return is 165.
int duration(string str)
{
    // TODO: write instructions in function body
    int split = str.find("-");
    string start = str.substr(0, split);
    start = hours_minutes_in_24h(start);
    string end = str.substr(split + 1);
    end = hours_minutes_in_24h(end);
    int start_comma = start.find(":");
    int end_comma = end.find(":");
    int start_hr, start_min, end_hr, end_min, dur_hour, dur_min;

    start_hr = stoi(start.substr(0, start_comma));
    start_min = stoi(start.substr(start_comma + 1, 2));

    end_hr = stoi(end.substr(0, end_comma));
    end_min = stoi(end.substr(end_comma + 1, 2));

    if (start_min > end_min)
    {
        end_hr--;
        end_min += 60;
    }

    dur_min = end_min - start_min;
    dur_hour = end_hr - start_hr;
    dur_min += 60 * dur_hour;
    return dur_min;
}