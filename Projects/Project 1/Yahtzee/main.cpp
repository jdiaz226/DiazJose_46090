/* 
 * File:   main.cpp
 * Author: Jose Diaz
 * Created on July 18, 2015, 9:47 AM
 * Purpose: Yahtzee Game
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(int argc, char** argv){
    //Declare Variables
    const int MAXRNDS = 13;
    int rounds = 0;
    int die[5];
    string keepers;
    int aces = -1;
    int twos = -1;
    int threes = -1;
    int fours = -1;
    int fives = -1;
    int sixes = -1;
    int threKnd = -1;
    int fourKnd = -1;
    int fullHse = -1;
    int smlStrt = -1;
    int lStrt = -1;
    int yahtzee = -1;
    int chance = 1;
    bool catUsed[13];
    int uScore;
    int lScore;
    int uBonus = 0;
    
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
        cout<<"\n\nYour first rolls are:" << endl;
        //Roll a six sided die
        for(int i=0;i<5;i++){
            die[i]=rand()%6+1;
        }
        cout << die[0] << ' ' << die[1] << ' ' << die[2] << ' ' << die[3] << ' ' << die[4] << endl;
        cout << "Which dice would you like to reroll?\n1s keep dice, while 0s reroll.\nExample: 01011 to reroll first and third." << endl;
        //Ask user if he/she wishes to roll again while keeping any number of dice
        while(true){
            cin >> keepers;
            bool go = false;
            for(int i = 0; i < keepers.size(); i++)
                if(keepers[i] < '0' || keepers[i] > '1')
                    go = true;
                    break;
        }
        cout << "Your second rolls are: " << endl;
        for(int i = 0; i < 5; i++)
            if(keepers[i] != '1')
                die[i] = rand()%6+1;
                cout << die[0] << ' ' << die[1] << ' ' << die[2] << ' ' << die[3] << ' ' << die[4] << endl;
                //Ask user one final time for a re-roll
                cout << "Last Chance... Which dice would you like to reroll?\n" << endl;
                while(true){
                    cin >> keepers;
                    bool go = false;
                    for(int i = 0; i < keepers.size(); i++)
                        if(keepers[i] < '0' || keepers[i] > '1')
                            go = true;
                            break;
                }
                //Display final roll for that round
                cout << "Your final rolls are: " << endl;
                for(int i = 0; i < 5; i++)
                    if(keepers[i] != '1')
                        die[i] = rand()%6+1;
                        cout << die[0] << ' ' << die[1] << ' ' << die[2] << ' ' << die[3] << ' ' << die[4] << endl;
                        //Display score card
                        cout << "\n\nScoring Options: Enter number for category to enter score.\n" << endl;
                        cout << "1 - Score Aces: " << aces << " \n";
                        cout << "2 - Score Twos: " << twos << " \n";
                        cout << "3 - Score Threes: " << threes << " \n";
                        cout << "4 - Score Fours: " << fours << " \n";
                        cout << "5 - Score Fives: " << fives << " \n";
                        cout << "6 - Score Sixes: " << sixes << " \n";
                        cout << "7 - Score 3 of a Kind: " << threKnd << " \n";
                        cout << "8 - Score 4 of a Kind: " << fourKnd << " \n";
                        cout << "9 - Score Full House: " << fullHse << " \n";
                        cout << "10 - Score Small Straight: " << smlStrt << " \n";
                        cout << "11 - Score Large Straight: " << lStrt << " \n";
                        cout << "12 - Score Yahtzee: " << yahtzee << " \n";
                        cout << "13 - Score Chance: " << chance << " \n";
                        
                        //Prompt user to select a score option and fill in score card
                        int option;
                        cout << "Option: ";
                        cin >> option;
                        switch (option){
                            case 1: if (catUsed[1] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        cout << "Enter Ace Score.\n";
                                        cin >> aces;
                                        catUsed[1] = true;
                                        break;
                                
                            case 2: if (catUsed[2] == true)
                                        cout << "pick another category" << endl;	
                                    else
                                        cout << "Enter Twos Score.\n";
                                        cin >> twos;
                                        catUsed[2] = true;
                                        break;
                            case 3: if (catUsed[3] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        cout << "Enter Threes Score.\n";
                                        cin >> threes;
                                        catUsed[3] = true;
                                        break;
                            case 4: if (catUsed[4] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        cout << "Enter Fours score.\n";
                                        cin >> fours;
                                        catUsed[4] = true;
                                        break;
                            case 5: if (catUsed[5] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        cout << "Enter Fives score.\n";
                                        cin >> fives;
                                        catUsed[5] = true;
                                        break;
                            case 6: if (catUsed[6] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        cout << "Enter Sixes score.\n";
                                        cin >> sixes;
                                        catUsed[6] = true;		
                                        break;
                            case 7: if (catUsed[7] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        threKnd=die[0]+die[1]+die[2]+die[3]+die[4];;
                                        catUsed[7] = true;
                                        break;
                            case 8: if (catUsed[8] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        fourKnd=die[0]+die[1]+die[2]+die[3]+die[4];;
                                        catUsed[8] = true;	
                                        break;
                            case 9: if (catUsed[9] == true)
                                        cout << "pick another category" << endl;
                                    else
                                        fullHse=25;
                                        catUsed[9] = true;
                                        break;
                            case 10: if (catUsed[10] == true)
                                        cout << "pick another category" << endl;
                                     else
                                        smlStrt=30;
                                        catUsed[10] = true;
                                        break;
                            case 11: if (catUsed[11] == true)
                                        cout << "pick another category" << endl;
                                     else
                                        lStrt=40;
                                        catUsed[11] = true;	
                                        break;
                            case 12: if (catUsed[12] == true)
                                        cout << "pick another category" << endl;
                                     else
                                        yahtzee=50;
                                        catUsed[12] = true;		
                                        break;
                            case 13: if (catUsed[13] == true)
                                        cout << "pick another category" << endl;
                                     else
                                        chance=die[0]+die[1]+die[2]+die[3]+die[4];
                                        catUsed[13] = true;	
                                        break;
                            default: cout << "Illegal choice made. Please choose another." << endl;
                        }
    }
    
    //Calculate the sum of the Upper score card and lower score card
    uScore = aces + twos + threes + fours + fives + sixes;
    lScore = threKnd + fourKnd + fullHse + smlStrt + lStrt + yahtzee + chance;
    //Determine if the user gets bonus points
    if (uScore >= 63)
        uBonus = 35;
    
    //Display end of game
    cout << "You have finished the game. Let's see how you did.\n\n";
    
    //Calculate total results
    int totalScore = uScore + uBonus + lScore;
    
    //Display total results
    cout << "Congratulations. Your total score is " << totalScore << ".\n Not too shabby.";
    
    return 0;
}

