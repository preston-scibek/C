#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
	float user_input;
	scanf("%f", &user_input);
	float user_input_div_ten = user_input/10;
	float user_input_round = (int)user_input_div_ten +.5;
		if (user_input_div_ten > user_input_round ) {
		float div_ten_plus_five = (user_input_div_ten +.5);
		int use_input_round_up_resized = (int)div_ten_plus_five;
		printf("%d", use_input_round_up_resized*10);
	}
	else {
	    int use_input_round_down_resized = (int)user_input_div_ten;
		printf("%d", use_input_round_down_resized*10);
	}
}