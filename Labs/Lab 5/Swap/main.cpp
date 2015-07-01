/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on June 29, 2015, 12:43 PM
 * Purpose: To show how to swap
 */ 

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    int min=10,max=100;
    
    //Input the values for a and b
    cout<<"Input 2 integer values between "<<min<<" and ";
    cout<<max<<endl;
    cin>>a>>b;
    
    //Validate the Results 
    if(a>=min && a <=max && b >=min && b <=max){
        //Prompt the user for which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage Variable -> s or in-place xor -> i"<<endl;
        //Declare the variables
        char type;
        cin>>type;
        switch(type){
            case 's':{
                int temp=a;
                a=b;
                b=temp;
                cout<<"type is visible due to scope"<<endl;
                cout<<"type = "<<type<<endl;
                break;
            }
            case 'i':{
                a=a^b;
                b=a^b;
                a=a^b;
                break;
            }
            default: 
                cout<<"You don't follow instructions"<<endl;
                cout<<"You didn't type an s or an i"<<endl;
                return 1;
                cout<<"old a = "<<b<<", new a = "<<a<<endl;
                cout<<"old b = "<<a<<", new b = "<<b<<endl;
        }
    
    }else{
        cout<<"You don't follow instructions"<<endl;
        cout<<"Values not between range given"<<endl;
        cout<<"No swap for you"<<endl;
        return 1;
    }
    
    //Output the results for the swap
    
    //cout<<temp<<endl;  // Scope/visibility error
    //cout<<type<<endl;  // Scope/visibility error
    
    //Exit Stage Right!
    return 0;
}

