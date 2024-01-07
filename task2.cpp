#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// Function for user's choice
char getuserchoice()
{
    cout<<"Enter your choice (R for ROCK, P for PAPER, S for SCISSORS): ";
    char choice;
    cin>>choice;
    return toupper(choice);
}

// Function for computer's choice
char getcompchoice()
{
    srand(time(NULL));
    int randomNum = rand() % 3;
    switch(randomNum)
    {
        case 0: return 'R';
        case 1: return 'P';
        case 2: return 'S';
    }
    return ' ';
}

// Function to determine the winner
char winner(char userChoice, char compChoice)
{
    cout<<"Computer's choice: "<<compChoice<<endl;
    if(userChoice == compChoice)
    {
        cout<<"It's a TIE!";
    }
    else if(userChoice == 'R' && compChoice == 'S' ||
            userChoice == 'P' && compChoice == 'R' ||
            userChoice == 'S' && compChoice == 'P')
    {
        cout<<"YOU WIN!!"<<endl;
    }
    else
    {
        cout<<"Computer WINS!!"<<endl;
    }
}
int main()
{
    char userChoice, compChoice;
    int play = 1;
    while(play)
    {
        userChoice = getuserchoice();
        compChoice = getcompchoice();
        winner(userChoice, compChoice);
        cout<<"Play again((1(yes)/0(no)): ";
        cin>>play;
    }
    return 0;
}