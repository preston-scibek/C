#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arrequal(int arr1[], int arr2[], int size){
    int inc;
		for (inc = 0; inc <= size; inc++){
		    if (arr1[inc] == arr2[inc]) {
			    return 1;
		    }
		    else {
		        return 0;
		    }
	     }
    }
int main(void){
	int size;
	scanf("%d", &size);
	int arr1[size];
	int arr2[size];
	int yinc;
	for (yinc = 0; yinc <= size; yinc++){
	    printf("arr1 number at %d:", yinc);	
	    scanf("%d", &arr1[yinc]);
	} 
	for (yinc = 0; yinc <= size; yinc++){
	    printf("arr2 number at %d:", yinc);	
	    scanf("%d", &arr2[yinc]);
	} 
			
	printf("%d", arrequal(arr1, arr2, size));
}
	
    