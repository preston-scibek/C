#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int factorial(int numb_to_factorial){
    if (numb_to_factorial==0){ 
	    return 1; 
    }
	else if (numb_to_factorial==1){ 
	    return 1; 
	} 
	else{ 
	return numb_to_factorial*factorial(numb_to_factorial-1);
}
}
int main(void) {
int numb_to_factorial;


scanf("%d", &numb_to_factorial);
printf("%d", factorial(numb_to_factorial));	

}