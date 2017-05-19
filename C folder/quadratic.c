#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
    printf("solve equation AX^2 + BX + C\n");
    printf("input first constant(A)\n");
    float const_a;
    scanf("%f", &const_a);
    printf("input second constant(B)\n");
    float const_b;
    scanf("%f", &const_b);
    printf("input third constant(C)\n");
    float const_c;
    scanf("%f", &const_c);
	float sum_quad = ((0-const_b)+(sqrt((pow(const_b,2))-(4*const_a*const_c))))/(2*const_a);
	float minus_quad = ((0-const_b)-(sqrt((pow(const_b,2))-(4*const_a*const_c))))/(2*const_a);
    printf("The two answers are %f and %f", sum_quad, minus_quad);
}