/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 28, 2015, 9:38 PM
 * Purpose: Calculating total length of fence needed for a rectangular area
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float width;   //width   = width of rectangular area in feet (ft)
    float height;  //height  = height of rectangular area in feet (ft)
    float tLength; //tLength = total length needed in feet (ft)
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Width = "<<endl;
    cin>>width;
    cout<<"Height = "<<endl;
    cin>>height;
    tLength=(2*width)+(2*height);
    cout<<"The total length needed = "<<tLength<<" ft"<<endl;
    
    //Exit Stage Right!
    return 0;
}

