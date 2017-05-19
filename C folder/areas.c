#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
float circle(int small_radi, int large_radi) {
    float small_radi_area;
	float large_radi_area;
	float donut_area;
	printf("Give me the smaller radius: ");
	scanf("%d", &small_radi);
	printf("Give me the larger radius: ");
	scanf("%d", &large_radi);
	small_radi_area = M_PI*pow(small_radi,2);
	large_radi_area = M_PI*pow(large_radi,2);
	donut_area = large_radi_area - small_radi_area;
	return donut_area;
	}
int main(void) {	
    int small_radi;
	int large_radi;    
	printf("The area is %f", circle(small_radi,large_radi));
}
	
	
	