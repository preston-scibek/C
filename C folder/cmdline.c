#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
	char names[21][15] = {"Chris", "Ashlee", "Dylan", "Christian", "Kyle", "Jared", "Tyler", "Matt", "Andy", "McAndrew", "Sean", "Preston", "Nick", "Skyler", "Justin", "Kyle", "Daniel", "Joseph", "Max", "Nygel", "Nicole"};
	int inc;
	for (inc = 0; inc < 21; inc++){
		if (strcmp(argv[1], names[inc])==0){
			printf("yes");
			break;
		}
	}
}	

