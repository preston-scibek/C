#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *my_concat(char *str1, char *str2){
	//scanf("%s", str1);
	//printf("\n\n");
	//scanf("%s", str2);
	int x = strlen(str1);
	int y = strlen(str2);
	char *new_str = (char *)malloc((x+y) * sizeof(char)+1);
	int i;
	for(i = 0; i<x; i++){
		new_str[i] = str1[i];
	}
	for(i=0; i<y; i++){
		new_str[i+x] = str2[i];
	}
	new_str[x+y] = '\0';
	return new_str;
}
int main(int argc, char** argv){
	//char *str1;
	//char *str2;
	if(strcmp(my_concat("nic", "dogd"), "nicdogd")==0){
		printf("hi");
	}
}

