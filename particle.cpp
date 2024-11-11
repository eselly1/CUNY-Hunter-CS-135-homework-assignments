/*
Name: Eselly Lopez Luna
Email: eselly.lopezluna11@myhunter.cuny.edu
course: CSCI 135
Instructor: Tong Yi
Assignment: Lab 9F
Program: This program creates a new
class Particle, and modifies
it using formulae from 3d-space.cpp,
while dynamically allocating memory
and deleting it, all through the usage of pointers
*/

#include <iostream>
using namespace std;

class Particle
{
public:
    double x;
    double y;
    double z;
    double vx;
    double vy;
    double vz;
    Particle *createParticle(double x, double y, double z,
                             double vx, double vy, double vz);
    void setVelocity(Particle *p, double vx, double vy, double vz);
    Particle getPosition(Particle *p);
    void move(Particle *p, double dt);
    void deleteParticle(Particle *p);
};

Particle *createParticle(double x, double y, double z,
                         double vx, double vy, double vz)
{
    Particle *p = new Particle;
    *p = {x, y, z, vx, vy, vz};

    return p;
};
void setVelocity(Particle *p, double vx, double vy, double vz) {
    (*p).vx=vx;
    (*p).vy=vy;
    (*p).vz=vz;

};
Particle getPosition(Particle *p) {
    return *p;

};
void move(Particle *p, double dt) {
    (*p).x = (*p).x + (*p).vx * dt;

    (*p).y = (*p).y + (*p).vy * dt;

    (*p).z = (*p).z + (*p).vz * dt;

};
void deleteParticle(Particle *p) {
    delete p;

};

int main()
{
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while (time < 3.0)
    {
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        move(p, dt);
        time += dt;

        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    deleteParticle(p);
}