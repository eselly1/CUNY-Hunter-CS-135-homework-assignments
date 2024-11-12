/*
name: Eselly Lopez Luna
email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
instructor: Tong Yi
assignment: HW 7.18
program: This program returns the perimeter
of a structure Triangle
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x_coord;
    double y_coord;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

double distance(Point a, Point b)
{
    double dist, xsum, ysum, sum;
    xsum = (a.x_coord - b.x_coord);
    ysum = (a.y_coord - b.y_coord);
    xsum = xsum * xsum;
    ysum = ysum * ysum;
    sum = xsum + ysum;
    dist = sqrt(sum);

    return dist;
}

double perimeter(Triangle a)
{
    double peri;
    double x, y, z;

    x = distance(a.a, a.b);
    y = distance(a.b, a.c);
    z = distance(a.c, a.a);
    peri = x + y + z;
    
    return peri;
}

int main()
{
    double w, x, y, z, u, v;
    cout << "Enter first point: " << endl;
    cin >> w >> x;
    Point a = {w, x};

    cout << "Enter second point: " << endl;
    cin >> y >> z;
    Point b = {y, z};

    cout << "Enter third point: " << endl;
    cin >> u >> v;
    Point c = {u, v};

    Triangle q = {a, b, c};

    return perimeter(q);
}