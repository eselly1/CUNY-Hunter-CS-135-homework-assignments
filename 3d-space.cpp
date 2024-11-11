/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
Course: CSCI 135
Instructor: Tong Yi
Date: Nov 2024
Assignment: Lab 9E
Program: This program dynamically allocates
memory to two objects and later deletes them,
using pointers to 
modify given values
*/
#include <iostream>
#include <cmath>
using namespace std;

class Coord3D
{
public:
    double x;
    double y;
    double z;
    double length(Coord3D *p);
    Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
    void move(Coord3D *ppos, Coord3D *pvel, double dt);
    Coord3D* createCoord3D(double x, double y, double z);
    void deleteCoord3D(Coord3D *p);
};

double length(Coord3D *p)
{
    double sum;
    sum = ((*p).x * (*p).x) + ((*p).y * (*p).y) + ((*p).z * (*p).z);
    double len;
    len = sqrt(sum);
    return len;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double first_point, second_point;
    first_point= length(p1);
    second_point=length(p2);

    if(first_point > second_point)
        return p1;
    else
        return p2;
};

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    (*ppos).x = (*ppos).x + (*pvel).x * dt;

    (*ppos).y = (*ppos).y + (*pvel).y * dt;

    (*ppos).z = (*ppos).z + (*pvel).z * dt;
};


Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D;
    *p= {x,y,z};
    return p;

};


void deleteCoord3D(Coord3D *p){
    delete p;

};

int main()
{
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos);
    deleteCoord3D(pvel);

    return 0;
}