/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 18, 2015, 9:47 AM
 * Purpose: Yahtzee Game
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!



int main(int argc, char** argv){
    //Display game title
    cout<<setw(10)<<"Yahtzee"<<endl<<endl;
    cout<<"  Start Y/N"<<endl;
    
    //Declare Variable to start game
    char answr;
    
    //Input to start game
    cout<<"Answer: ";
    cin>>answr;
    if(answr=='y'||answr=='Y'){
    
    
    
    //Declare Variables
    char answer;             //Answer to allow user to play again or end the program
    
    //Loop game until player decides to stop
    do{
    //Declare Variables
    const int MAXRNDS = 13;  //MAXRNDS = max number of rounds (13)
    int rounds = 0;          //Rounds 1-13, initialized at 0
    int die[5];              //Five Dice
    string keepers;          //The dice the user wishes to keep after each roll
    int aces = 0;            //aces    = Number of 1s rolled multiplied by 1
    int twos = 0;            //twos    = Number of 2s rolled multiplied by 2
    int threes = 0;          //threes  = Number of 3s rolled multiplied by 3
    int fours = 0;           //fours   = Number of 4s rolled multiplied by 4
    int fives = 0;           //fives   = Number of 5s rolled multiplied by 5
    int sixes = 0;           //sixes   = Number of 6s rolled multiplied by 6
    int threKnd = 0;         //threKnd = Three of a kind 
    int fourKnd = 0;         //fourKnd = Four of a kind
    int fullHse = 0;         //fullHse = Full House
    int smlStrt = 0;         //smlStrt = Small Straight
    int lStrt = 0;           //lStrt   = Large Straight
    int yahtzee = 0;         //yahtzee = Yahtzee
    int chance = 0;          //chance  = Chance
    bool catUsed[13];        //Score Card Position
    int uScore;              //Upper Section Score
    int lScore;              //Lower Section Score
    int uBonus = 0;          //Upper Section Bonus Score
    int option;              //Category on Score Card
    int nAces;               //Number of Aces in final roll
    int nTwos;               //NUmber of Twos in final roll
    int nThres;              //Number of Threes in final roll
    int nFors;               //Number of Fours in final roll
    int nFves;               //Number of Fives in final roll
    int nSixs;               //Number of Sixes in final roll
    
    //Set Empty Score Card
    catUsed[1]   = false;
    catUsed[2]   = false;
    catUsed[3]   = false;
    catUsed[4]   = false;
    catUsed[5]   = false;
    catUsed[6]   = false;
    catUsed[7]   = false;
    catUsed[8]   = false;
    catUsed[9]   = false;
    catUsed[10]  = false;
    catUsed[11]  = false;
    catUsed[12]  = false;
    catUsed[13]  = false;
    
    //Loop the Game Until the Score Card is filled up
    while(rounds<MAXRNDS){          
        rounds+=1;
        
        //Set the random number seed
        srand(time(0));
        cout<<endl<<endl<<"Your first rolls are:" << endl;
        
        //Roll a six sided die
        for(int i=0;i<5;i++){
            die[i]=rand()%6+1;
        }
        cout<<die[0]<<' '<<die[1]<<' '<<die[2]<<' '<<die[3]<<' '<<die[4]<<endl;
        
        //Ask user if wishes to roll again while keeping certain  dice
        cout<<"Which dice would you like to re-roll?"<<endl<<"1s keep dice, while 0s re-roll."<<endl<<"Example: 01011 to re-roll first and third."<<endl;
        while(true){
            cin>>keepers;
            bool go=false;
            for(int i=0;i<keepers.size();i++)
                if(keepers[i]<'0'||keepers[i]>'1')
                    go=true;
                    break;
        }
        
        //Display second roll
        cout<<"Your second rolls are: "<<endl;
        for(int i=0;i<5;i++)
            if(keepers[i]!='1')
                die[i]=rand()%6+1;
                cout<<die[0]<<' '<<die[1]<<' '<<die[2]<<' '<<die[3]<<' '<<die[4]<<endl;
                
                //Ask user one final time for a re-roll
                cout<<"Last Chance... Which dice would you like to re-roll?"<<endl<<endl;
                while(true){
                    cin>>keepers;
                    bool go=false;
                    for(int i=0;i<keepers.size();i++)
                        if(keepers[i]<'0'||keepers[i]>'1')
                            go=true;
                            break;
                }
                
                //Display final roll for that round
                cout<<"Your final rolls are: "<<endl;
                for(int i=0;i<5;i++)
                    if(keepers[i]!='1')
                        die[i]=rand()%6+1;
                        cout<<die[0]<<' '<<die[1]<<' '<<die[2]<<' '<<die[3]<<' '<<die[4]<<endl;
                        
                        //Display score card
                        cout<<endl<<endl<<"Scoring Options: Enter number for category to enter score."<<endl<<endl;
                        cout<<"1  - Score Aces:            "<<aces<<endl;
                        cout<<"2  - Score Twos:            "<<twos<<endl;
                        cout<<"3  - Score Threes:          "<<threes<<endl;
                        cout<<"4  - Score Fours:           "<<fours<<endl;
                        cout<<"5  - Score Fives:           "<<fives<<endl;
                        cout<<"6  - Score Sixes:           "<<sixes<<endl;
                        cout<<"7  - Score 3 of a Kind:     "<<threKnd<<endl;
                        cout<<"8  - Score 4 of a Kind:     "<<fourKnd<<endl;
                        cout<<"9  - Score Full House:      "<<fullHse<<endl;
                        cout<<"10 - Score Small Straight:  "<<smlStrt<<endl;
                        cout<<"11 - Score Large Straight:  "<<lStrt<<endl;
                        cout<<"12 - Score Yahtzee:         "<<yahtzee<<endl;
                        cout<<"13 - Score Chance:          "<<chance<<endl;
                        
                        //Prompt user to select a score option and fill in score card
                        do{
                            cout<<"Please select an appropriate option: ";
                            cin>>option;
                            switch (option){
                                case 1: if (catUsed[1]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==1);
                                        }else{
                                            cout<<"Enter Number of Aces from last roll"<<endl;
                                            cin>>nAces;
                                            aces=nAces;
                                            catUsed[1]=true;
                                            break;
                                        }
                                case 2: if (catUsed[2]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==2);  	
                                        }else{
                                            cout<<"Enter Number of Twos from last roll"<<endl;
                                            cin>>nTwos;
                                            twos=nTwos*2;
                                            catUsed[2]=true;
                                            break;
                                        }
                                case 3: if (catUsed[3]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==3);  	
                                        }else{
                                            cout<<"Enter Number of Threes from last roll"<<endl;
                                            cin>>nThres;
                                            threes=nThres*3;
                                            catUsed[3]=true;
                                            break;
                                        }
                                case 4: if (catUsed[4]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==4);  	
                                        }else{
                                            cout<<"Enter Number of Fours from last roll"<<endl;
                                            cin>>nFors;
                                            fours=nFors*4;
                                            catUsed[4]=true;
                                            break;
                                        }
                                case 5: if (catUsed[5]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==5);  	
                                        }else{
                                            cout<<"Enter Number of Fives from last roll"<<endl;
                                            cin>>nFves;
                                            fives=nFves*5;
                                            catUsed[5]=true;
                                            break;
                                        }
                                case 6: if (catUsed[6]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==6);  	
                                        }else{
                                            cout<<"Enter Number of Sixes from last roll"<<endl;
                                            cin>>nSixs;
                                            sixes=nSixs*6;
                                            catUsed[6]=true;		
                                            break;
                                        }
                                case 7: if (catUsed[7]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==7);  	
                                        }else{
                                            threKnd=die[0]+die[1]+die[2]+die[3]+die[4];
                                            catUsed[7]=true;
                                            break;
                                        }
                                case 8: if (catUsed[8]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==8);  	
                                        }else{
                                            fourKnd=die[0]+die[1]+die[2]+die[3]+die[4];;
                                            catUsed[8]=true;	
                                            break;
                                        }
                                case 9: if (catUsed[9]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==9);  	
                                        }else{
                                            fullHse=25;
                                            catUsed[9]=true;
                                            break;
                                        }
                                case 10: if (catUsed[10]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==10);  	
                                        }else{
                                            smlStrt=30;
                                            catUsed[10]=true;
                                            break;
                                        }
                                case 11: if (catUsed[11]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==11);  	
                                        }else{
                                            lStrt=40;
                                            catUsed[11]=true;	
                                            break;
                                        }
                                case 12: if (catUsed[12]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==12);  	
                                        }else{
                                            yahtzee=50;
                                            catUsed[12]=true;		
                                            break;
                                        }
                                case 13: if (catUsed[13]==true){
                                            do{
                                                cout<<"Pick another category"<<endl;
                                                cin>>option;
                                            }while(option==13);  	
                                        }else{
                                            chance=die[0]+die[1]+die[2]+die[3]+die[4];
                                            catUsed[13]=true;	
                                            break;
                                        }
                                default: cout<<"Illegal choice made. Please choose another."<<endl;
                            }
                        }while(catUsed[1]==false&&catUsed[2]==false&&catUsed[3]==false&&catUsed[4]==false&&catUsed[5]==false&&catUsed[6]==false&&catUsed[7]==false&&catUsed[8]==false&&catUsed[9]==false&&catUsed[10]==false&&catUsed[11]==false&&catUsed[12]==false&&catUsed[13]==false||option>13);
    }
    //Display Final Score Card
    cout<<endl<<endl<<"Scoring Options: Enter number for category to enter score."<<endl<<endl;
    cout<<"1  - Score Aces:            "<<aces<<endl;
    cout<<"2  - Score Twos:            "<<twos<<endl;
    cout<<"3  - Score Threes:          "<<threes<<endl;
    cout<<"4  - Score Fours:           "<<fours<<endl;
    cout<<"5  - Score Fives:           "<<fives<<endl;
    cout<<"6  - Score Sixes:           "<<sixes<<endl;
    cout<<"7  - Score 3 of a Kind:     "<<threKnd<<endl;
    cout<<"8  - Score 4 of a Kind:     "<<fourKnd<<endl;
    cout<<"9  - Score Full House:      "<<fullHse<<endl;
    cout<<"10 - Score Small Straight:  "<<smlStrt<<endl;
    cout<<"11 - Score Large Straight:  "<<lStrt<<endl;
    cout<<"12 - Score Yahtzee:         "<<yahtzee<<endl;
    cout<<"13 - Score Chance:          "<<chance<<endl;                    

    //Calculate the sum of the Upper score card and lower score card
    uScore=aces+twos+threes+fours+fives+sixes;
    lScore=threKnd+fourKnd+fullHse+smlStrt+lStrt+yahtzee+chance;
    
    //Determine if the user gets bonus points
    if (uScore>=63)uBonus=35;
    
    //Display end of game
    cout<<"You have finished the game. Let's see how you did."<<endl<<endl;
    
    //Calculate total results
    int totalScore=uScore+uBonus+lScore;
    
    //Display total results
    cout<<"Congratulations. Your total score is "<<totalScore<<endl<<endl;
 
    cout<<"Would you like to play again? Y/N"<<endl;
    cin>>answer;
    
    }while(answer=='Y'||answer=='y');
    
    //Exit Stage Right!
    return 0;
    }else{
        return 0;
    }
}

