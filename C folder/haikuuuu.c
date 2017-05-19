#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("outputhaiku.txt", "w+");
	printf("Enter your line");
	char i[100];
	char ii[100];
	char iii[100];
	fgets(i, 100, stdin);
	fputs(i, fp);
	fgets(ii, 100, stdin);
	fputs(ii, fp);
	fgets(iii, 100, stdin);
	fputs(iii, fp);
	fclose(fp);
}