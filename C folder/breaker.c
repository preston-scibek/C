#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
    int user_input;
	int user_input_x_two;
	scanf("%d", &user_input);
	while(1){
		user_input_x_two = user_input*2;
		printf("%d", user_input_x_two);
		user_input = user_input_x_two;
	}
}
// turns into negatives then 0s