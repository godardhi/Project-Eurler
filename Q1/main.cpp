/*
    Q1 : Multiples of 3 and 5

    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.

*/

#include <iostream>


using namespace std;

int main()
{

    cout<<"The sum of all the multiples of x and y below an interval\n";

    int multiplesOf_x, multiplesOf_y, multiplesOf_X, multiplesOf_Y;
    int interval;
    cout<<"Enter two numbers: ";
    cin>>multiplesOf_x;
    cin>>multiplesOf_y;
    cout<<"Enter any upper bound ([0, interval]): ";
    cin>>interval;
    double sum=0;
    for(int i=0; i<interval; i++)
    {
        multiplesOf_X = i*multiplesOf_x;
        multiplesOf_Y = i*multiplesOf_y;

        if(multiplesOf_X <interval)
        {
            //out<< multiplesOf_X;

            sum = sum + multiplesOf_X;
        }
        if(multiplesOf_Y <interval)
        {
            //cout<< multiplesOf_Y;

            sum = sum + multiplesOf_Y;
        }

                 
    }

    cout<<"The sum of all the multiples of "<<multiplesOf_x<<" and "<<multiplesOf_y<<" below "<< interval <<" is : "<<sum;

    return 0;
}