//Name: Eselly Lopez Luna
//Email: eselly.lopezluna11@myhunter.cuny.edu
//Instructor: Tong Yi
//Course: CSCI 135
//Assignment: Project 1C
//Program: This program finds the duration between 
//two times given in 24-hour format

#include <iostream>
#include <string>
using namespace std;

int main(){
    int dur_hour;
    int dur_min;
    string start;
    string end;
    int start_hr;
    int start_min;
    int end_hr;
    int end_min;

    cout << "Enter start time: " << endl;
    cin >> start;
    cout << "Enter end time: " << endl;
    cin >> end;

    int start_comma= start.find(":");
    int end_comma= end.find(":");

    start_hr=stoi(start.substr(0,start_comma));
    start_min = stoi(start.substr(start_comma +1,2));

    end_hr=stoi(end.substr(0,end_comma));
    end_min=stoi(end.substr(end_comma+1,2));

    if (end_hr < start_hr)
    {
        cout << "Invalid Input." << endl;
        return -1;
    }

    if (start_min > end_min){
        end_hr--;
        end_min += 60;
    }

    dur_min= end_min-start_min;
    dur_hour= end_hr-start_hr;

    cout << "Duration is " << dur_hour << " hours and " << dur_min << " minutes." << endl;
    return 0;
     
}
