#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;


                //   T A S K  1
// Create a program that generates a random number and asks the
// user to guess it. Provide feedback on whether the guess is too
// high or too low until the user guesses the correct number.


int main()
{
    //For the generation of random number we need to initialize srand.
    srand(time(0));  


    
    // It generates the number from 1-10 
    int number = rand() % 10+1;
    int guess_number;
    int tries = 0;


    cout<<"Guess the entered number"<<endl;

    cout<<"We have selected a random number between 1 to 10 . Let's see if you can guess it"<<endl;

    while(guess_number != number)
    {
        tries++;
        cout<<"enter a guess"<<endl;
        cin>>guess_number;

        if(guess_number<number)
        {
            cout<<"TOO LOW!! Please try a greater number"<<endl;
            
        }

        else if(guess_number>number)
        {
            cout<<"TOO HIGH!! Please try a smaller number"<<endl;
        }

        else{
            cout<<"CORRECT!! WOAH,WELL DONE! YOU GUESSED THE RIGHT NUMBER!"<<endl;
            break;
        }
    }


    return 0;

}