#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    int most_frequent_element(int arr[], int size) {
	    int max_frequency = 0;
	    int max_element = 0;
		int i;
		int j;
		for (i = 0; i <= size; i++) {
		    int current_frequency = 0;
			for (j = 0; j <= size; j++){
			    if (arr[j] == arr[i]) {
				    current_frequency++;
				}
				if (current_frequency > max_frequency) {
                    max_frequency = current_frequency;
                    max_element = arr[j];
                }  
            }			
        }		
    return max_element;
	}
int main(void){
	int size;
	scanf("%d", &size);
	int arr[size];
	int yinc;
	for (yinc = 0; yinc <= size; yinc++){
	    printf("arr number at %d:", yinc);	
	    scanf("%d", &arr[yinc]);
	}

printf("frequent number is %d", most_frequent_element(arr, size));
}
    	