/*
name: eselly Lopez Luna
email: eselly,lopezluna11@myhunter.cuny.edu
instructor: Tong Yi 
course: CSCI 135
assignment: homework e 7.1
program: this program is sorts two numbers, but 
utilizes pointers instead of the variables directly
*/
#include <iostream> 
using namespace std;

void sort2(double* p, double* q){
    if (*p > *q)
    {
        double d = *p;
        *p = *q;
        *q = d;
    }
}


int main(){
    double a,b;
    cout << "enter first num: " << endl;
    cin >> a;
    cout << "enter second number: " << endl;
    cin >> b;
    double* p= &a;
    double* q = &b;
    sort2(p,q);
    cout << a << " "<< b << endl;
    return 0;
}