/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 2, 2015, 10:20 AM
 * Purpose: Approximate PI with a dart board
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants 
const double PI=atan(1.0);
const double MXRND=pow(2,31)-1;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //set the random number seed with time
    srand(static_cast<unsigned int>(time(0)));
    //Determine the maximum and minimum
    unsigned int max=rand(), min=rand();
    unsigned int nDarts=100000, nDrtInC=0;
    float apprxPI=0;
    //Loop to find the darts in the circle
    for(int dart=1;dart<=nDarts;dart++){
        float x=rand()/MXRND;  //[0,1]
        float y=rand()/MXRND;  //[0,1]
        if(x*x+y*y<=1)nDrtInC++;
    }
    apprxPI=4.0f*nDrtInC/nDarts;
    //Output the results
    cout<<fixed<<showpoint<<setprecision(20)<<endl;
    cout<<"The exact value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;

    return 0;
}

