#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
    
	printf("When Johnny Truant was 6 years old, Amber was 3 years old. When Johnny Truant is 60 years old, how old is Amber?");
	int user_input;
	AGAIN:
	scanf("%d", &user_input);
 	if( user_input != 57){
	printf("Try again.");
	goto AGAIN;
	}
	printf("You are right, the answer is %d years", user_input);
}
	
	