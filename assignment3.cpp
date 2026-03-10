#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int numGuess = 0;
    cout<<"Guess a number between 1-100:"<<endl;

    do{
        cin>>guess;
        numGuess++;
        if (guess > number)
            cout<<"Too high. Try again."<<endl;
        else if (guess < number)
            cout<<"Too low. Try again."<<endl;
        else{
            cout<<"Congratulations. You figured out my number."<<endl;
            cout<<"You guessed "<<numGuess<<" times."<<endl;
        }
    }
    while(guess != number);
    return 0;
}