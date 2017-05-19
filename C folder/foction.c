#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
int myPowerFunction(int numba, int exponent){
    if (exponent == 0) return numba; 
    int product = 1; 
    for(; exponent > 0; exponent--) {
	    product *= numba;
	} 
    return product;
}
int user_numn;
int user_exponent;
scanf("%d", &user_numn);
scanf("%d",&user_exponent);
printf("%d \n", myPowerFunction(user_numn,user_exponent)); 

int fibonacci(int nth_num){
    if (nth_num==0){ 
	    return 0; 
    }
	else if (nth_num==1){ 
	    return 1; 
	} 
	else{ 
	    return fibonacci(nth_num-1)+fibonacci(nth_num-2);
	}
}
int usa_nth_num;
scanf("%d", &usa_nth_num);
printf("%d", fibonacci(usa_nth_num));	

}