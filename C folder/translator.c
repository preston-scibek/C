#include <stdio.h>
#include <stdlib.h>
void trans(){
	char english[5][10] = {"cat", "dog", "table", "fat", "red"};
	char spanish[5][10] = {"gato", "perro", "mesa", "gordo", "rojo"};
	char user_word[10];
	scanf("%s", &user_word);
	int inc;
	for (inc = 0; inc < 5; inc++){
		if (strcmp(user_word, english[inc])==0){
			printf("%s", spanish[inc]);
			break;
		}
	}
}
int main(void){
	trans();
	}
	


