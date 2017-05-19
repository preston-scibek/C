#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main(void){
    srand(time(NULL));
	int rando = rand() % 10 +1;
	int u_guess;
	printf("I am thinking of a number between 1 and 10");
	printf("\n Your guess: ");
	scanf("%d", &u_guess);
	int inc;
	for (inc = 0; u_guess != rando; inc++) {
	    printf("Incorrect. Guess again: ");
		scanf("%d", &u_guess);
	}
	if (u_guess == rando) {
	    printf("Correct! The answer was %d. Number of guesses: %d", u_guess, inc+1);
    }
}