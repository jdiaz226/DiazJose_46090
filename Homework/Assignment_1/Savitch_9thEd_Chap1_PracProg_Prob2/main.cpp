/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 28, 2015, 9:38 PM
 * Purpose: Calculating total number of peas in a pod with "Hello" and "Good-bye" messages
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
    int nop; //nop = number of pods
    int ppp; //ppp = peas per pod
    int tp;  //tp = total peas
    
    //Input Values Here
    
    //Process Input Here
    
    //Output Unknowns Here
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>nop;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>ppp;
    tp=nop*ppp;  //Calculating total number of peas
    cout<<"If you have ";
    cout<<nop;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<ppp;
    cout<<" peas per pod, then\n";
    cout<<"you have ";
    cout<<tp;
    cout<<" peas in all the pods.\n";
    cout<<"Good-bye\n";

    //Exit Stage Right!
    return 0;
}



