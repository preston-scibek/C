#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
int main(void){
	struct Dog{
		char name[100];
		char breed[100];
		char owner_name[100];
		int age;
	};
	struct Dog garm = {"Garm", "Hellhound", "Hel", 2000};
	struct Dog *guard_dog;
	guard_dog = &garm;
	printf("%s\n", garm.name);
	printf("%s\n", garm.breed);
	printf("%s\n", garm.owner_name);
	printf("%s\n", guard_dog->owner_name);
	printf("%d\n", garm.age);
	guard_dog->age+=1000;
	printf("%d\n", garm.age);
	char title[] = {'j','o','h','n','\0','n','a','s','h'};
	printf("%s",title);
	int x[100];
	x[0] = 1;
	x[1] = 2;
	x[2] = 3;
	x[3] = 4;
	x[4] = 6;
	x[5] = 5;
	printf("%d\n", (&x[3]));
	printf("%d\n", (&x[1]));
	printf("%d\n", 2686044-2686036);
	struct Captain{
	char *name;
	char *tv_series;
	char *ship_name;
	};

struct Captain *picard = (struct Captain *)malloc(sizeof(struct Captain));
	(*picard).name = "Jean-Luc Picard";
	(*picard).tv_series = "Star Trek: The Next Generation";
	(*picard).ship_name = "USS Enterprise D";
	printf("%s", (*picard).name);
	picard->name = "Jean-Luc Picard";
	picard->tv_series = "Star Trek: The Next Generation";
	picard->ship_name = "USS Enterprise D";
	printf("%s", picard->name);

}