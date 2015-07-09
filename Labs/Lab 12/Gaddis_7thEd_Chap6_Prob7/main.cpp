/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 9, 2015, 1:54 PM
 * Purpose:  Given date output the day of the week
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float ftoc(float);
float ftcItrp(float,float,float,float,float);

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float f1=32.0f,f2=212.0f,c1=0,c2=100.0f;
    
    //Loop and output all the values
    cout<<"Farhenheit"<<endl;
    cout<<"   Celsius"<<endl;
    cout<<"   Celsius"<<endl;
    cout<<endl;
    for(float farhen=f1;farhen<f2;farhen++){
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<setw(10)<<farhen;
        cout<<setw(10)<<ftoc(farhen);
        cout<<setw(10)<<ftcItrp(farhen,f1,f2,c1,c2);
        cout<<endl;
    }

    return 0;
}

float ftcItrp(float f,float f1,float f2,float c1,float c2){
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}
float ftoc(float f){
    return 5.0f/9*(f-32);
}

