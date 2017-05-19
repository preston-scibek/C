#include <stdio.h>
main(){
	int a1;
	int a2;
	int a3;
	float a11;
	float a22;
	float a33;
	FILE *fp;
	fp = fopen("gradefffs.txt", "r");
	fscanf(fp, "%d", &a1);
	fscanf(fp, "%f", &a11);
	fscanf(fp, "%d", &a2);
	fscanf(fp, "%f", &a22);
	fscanf(fp, "%d", &a3);
	fscanf(fp, "%f", &a33);
	if(a22 > a11 && a22 > a33){
		printf("%d has the highest grade", a2);
	}
	if(a11 > a22 && a11 > a33){
		printf("%d has the highest grade", a1);
	}
	if(a33 > a22 && a33 > a11){
		printf("%d has the higest grade", a3);
	}
	fclose(fp);
}