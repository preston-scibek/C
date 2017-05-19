#include <stdio.h>
#include <stdlib.h>
int main(void){
	int foo[] = {1,2,3,4,5};
	int ii;
	/*part 1*/printf("%d\n", sizeof(int));
	for(ii=0; ii<5; ii++){
		printf("%d\n", &foo[ii]);
		// the address increasees by 4 each indice
	}
	/*end part 1*/
	/*part 2*/
	int *i = &foo[0];
	
	printf("%d\n", (*(i+0)));
	printf("%d\n", (*(i+1)));
	printf("%d\n", (*(i+2)));
	printf("%d\n", (*(i+3)));
	printf("%d\n", (*(i+4)));
	// prints out each indice in the array
	/*end part 2*/
					
}