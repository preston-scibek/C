#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int numba;
    printf("give me dang number: \n");
    scanf("%d", &numba);
    int inc;
	int is_it_prime;
	for(inc = 2; inc < numba; inc++) {
        if (numba % inc == 0 && numba != 0) {
            printf("%d is composite", numba);
            is_it_prime = 0;
			break;
		}
		else {
			is_it_prime+= numba % inc;
        }   
    }
    if (is_it_prime != 0 && numba != 1) {
        printf("%d is prime", numba);
    }
    if (numba == 1) {
    printf("1 is a unit");
    }	
}