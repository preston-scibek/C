#include <stdio.h>
#include <stdlib.h>
int main(void){
int x[2] = {3, 5};
int *ptr;
ptr = &x[0];
(*ptr) = 5;
printf("%d", (*ptr));
printf("\n%d", x[0]);
	}
	


