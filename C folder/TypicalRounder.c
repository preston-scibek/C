#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
	float user_input;
	scanf("%f", &user_input);
	float user_input_modfy_tob_round = (int)user_input +.5;
		if (user_input > user_input_modfy_tob_round ) {
		float user_input_up = (user_input +.5);
		int user_input_round_up = (int)user_input_up;
		printf("%d", user_input_round_up);
	}
	else {
	    int user_input_round_down = (int)user_input;
		printf("%d", user_input_round_down);
	}
}