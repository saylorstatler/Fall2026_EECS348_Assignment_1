/* EECS 348 Assignment 1
Description: C program that picks a secret number between 1 and 10.
The user gets up to 3 tries to guess the number
Inputs: The user's guesses entered through the terminal.
Outputs: Terminal messages telling the user whether their guess is correct, 
too high, too low, or if they have used all 3 tries.
Collaborators: Nivedita Rekha (classmate)
Other Sources: 
Google Gemini, Microsoft CoPilot - used for my two GenAI and 
Author: Saylor Statler
Creation Date: September 8, 2026
Revision Date: September 8, 2026
Revisions: Modified the original AI-generated C code for overall improvement
*/ 



#include <stdio.h> 
int main()
{
//Define main function and C program begins executing
    int secret = 7; 
//Create an integer variable named secret and store the secret number in it
    int guess; 
//Create an integer variable named guess to store the user guess
    for (int i = 0; i < 3; i++) 
    { 
//Start a for loop with three attempts to guess the secret number
        printf("Enter your guess (1-10): "); 
//Display a message asking the user to enter a number from 1 through 10
        scanf("%d", &guess); 
//Read the user input and store it in the guess variable
//The & symbol gives scanf() the memory address where the input should be stored
        if (guess == secret) 
        { 
//Check whether the user guess is equal to the secret number
            printf("Correct! You win!\n"); 
//Display a message telling the user that the guess was correct
            return 0; 
        }
//End the program with return value 0
        if (guess < secret) { 
//Check whether the user guess is smaller than the secret number
            printf("Too low.\n"); 
//Tell the user that their guess was lower than the secret number
        } 
        else
        { 
//If the guess was not equal to the secret and was not lower it must be higher
            printf("Too high.\n"); 
//Tell the user that their guess was higher than the secret number
        } 
    } 
    printf("Sorry, you lose. The number was %d.\n", secret); 
//After all three attempts are used tell the user they lost and show number
    return 0; 
//End the main function and the program completed successfully
}

