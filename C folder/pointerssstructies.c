#include <stdio.h>
#include <stdlib.h>
struct Student{ 
	char name[100];
	float grades [5];
};
float average_for_student(struct Student *studentss){
int i;
float average = 0;
for(i = 0; i < 5; i++){
average += studentss->grades[i];
}
return average/5;
} 
int main(void){
struct Student students[] = {{"Eleanor Rigby" ,{70 ,50 ,55.9 ,98 ,100}},
{"Father McKenzie", {100 ,100 ,100 ,0 ,50.5}}};

int i; 
for(i = 0; i < 2; i++){
	printf("The average grade for %s was a %f percent." , students[i].name, average_for_student(&students[i])); 
} 
}
