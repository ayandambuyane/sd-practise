#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()   
{
    srand(time(0)); // Seed the random number generator
int number= rand() % 100 + 1;
int guess;
const int maxAttempts = 5;

   // srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have " << maxAttempts << " attempts to guess it." << endl;

    for (int attempts = 0; attempts < maxAttempts; ++attempts) 
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            --attempts; // Do not count this as a valid attempt
            continue;
        }

        if (guess < number)
         {
            cout << "Guess higher" << endl;
        } 
        else if (guess > number)
         {
            cout << "Guess lower" << endl;
        }
         else
         {
            cout << "You win!" << endl;
            return 0; // Exit the game on a correct guess
        }
    }

   cout << "You lose! The number was "<<number<< endl; // If we reach here, the player has used all attempts without guessing correctly    

   
    return 0;
}

