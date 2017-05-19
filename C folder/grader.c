#include <math.h>
#include <stdio.h> 
#include <stdlib.h>
int main(void) {
	float float_grade;
	int inc;
	float float_grade_average;
    char grade(float float_grade) {
        printf("Enter grade %d: ", inc);
		scanf("%f", &float_grade);
		float_grade_average+=float_grade;
        if (float_grade <= 59.5) {
            return 'F';	
        }
        else if (float_grade <= 69.5) {
            return 'D';
        }
        else if (float_grade <= 79.5) {
            return 'C';
        }
        else if (float_grade <= 89.5) {
            return 'B';
        }
        else {
            return 'A';
        }		
    }
	for(inc = 1; inc <= 5; inc++) {	
	printf("Grade %d was a %c \n", inc, grade(float_grade));
    }
	char gradea(float float_grade_average) {
		float_grade_average = float_grade_average/5;
        if (float_grade_average <= 59.5) {
            return 'F';	
        }
        else if (float_grade_average <= 69.5) {
            return 'D';
        }
        else if (float_grade_average <= 79.5) {
            return 'C';
        }
        else if (float_grade_average <= 89.5) {
            return 'B';
        }
        else {
            return 'A';
        }		
    }

    printf("The average grade is a %c", gradea(float_grade_average));	
}   		
