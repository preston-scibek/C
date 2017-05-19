#include <stdio.h>
#include <stdlib.h>
int main(void){
int quote;
	printf("0. Grace Hopper \n1. Donald Knuth\n 2. Randy Pausch\n 3. Alan Perl is Please \n enter choice: ");
	scanf("%d", &quote);
	switch(quote){
		case 0 :
			printf("Quote by Grace Hopper\n A ship in port is safe; but that is not what ships are built for.\n");
			break;
		case 1 :
			printf("Quote by Donald Knuth\n An algorithm must be seen to be believed.\n");
			break;
		case 2 :
			printf("Quote by Randy Pausch\n Experience is what you get when you didn't get what you wanted.\n");
			break;
		case 3 :
			printf("Quote by Alan Perlis\n One man's constant is another man's variable.\n");
			break;
		default :
			printf("Please enter a valid number :");
		}
}