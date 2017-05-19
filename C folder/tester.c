//I'm a comment 
/*
I'm a block comment I can be multiline 
*/
#include <stdio.h> 
#include <stdlib.h>
int main(void)
 {  
	printf("char has %d bytes and %d bits\n", sizeof(char), sizeof(char)*8);
	printf("short has %d bytes and %d bits\n", sizeof(short), sizeof(short)*8);
	printf("int has %d bytes and %d bits\n", sizeof(int), sizeof(int)*8);
	printf("long has %d bytes and %d bits\n", sizeof(long), sizeof(long)*8);
	printf("long long has %d bytes and %d bits\n", sizeof(long long), sizeof(long long)*8);
	printf("float has %d bytes and %d bits\n", sizeof(float), sizeof(float)*8);
	printf("double has %d bytes and %d bits\n", sizeof(double), sizeof(double)*8);
	// a byte is larger/ variables used in sizeof could be very large and would be large number of bits
	// if a datatype was in bits then it could end up being a large number of bits
}