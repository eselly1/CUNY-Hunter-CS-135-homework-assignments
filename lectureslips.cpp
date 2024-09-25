#include <iostream>
#include <string>
using namespace std;

int main()
{

    string startTime;
    string endTime;
    cout << "Enter start time: " << endl;
    cin >> startTime;
    cout << "Enter end time: " << endl;
    string shh = startTime.substr(0, 2);
    string smm = startTime.substr(2, 2);
    int startHour = stoi(shh);
    int startMin = stoi(smm);
    string ehh = endTime.substr(0, 2);
    string emm = endTime.substr(2, 2);
    int endHour = stoi(ehh);
    int endMin = stoi(emm);
    int durHour;
    int durMin;
    if (startHour < 0 || startHour > 23 || endHour < 0 || endHour > 23 || startMin < 0 || startMin > 59 || endMin < 0 || endMin < 59)
    {

        cout << "Invalid input." << endl;
        return -1;
    }

    if (startHour==endHour){

    }
    else if (startHour > endHour)
    {
        durHour=endHour+1;
    }
    else 
        durHour=endHour-startHour;

    if (startMin + endMin >=60){
        
    }

    return 0;
}