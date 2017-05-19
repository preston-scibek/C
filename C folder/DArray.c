#include <stdio.h>
#include <stdlib.h>
#include "DArray.h"
/*
struct DArray{
	int capacity;
	int size;
	int *contents;
};

struct DSArray{
	int capacity;
	int size;
	char **contents;
};
*/
struct DArray *create_dyn_array(int capacity){
	struct DArray *arr = (struct DArray *)malloc(sizeof(struct DArray));
	arr->capacity = capacity;
	arr->size = 0;
	arr->contents = (int *)malloc(sizeof(int) * capacity);
	return arr;
}

void add_dyn_array(struct DArray *arr, int thing_to_add, int index){
	int i;
	//If we need more space, double the capacity.
	if (arr->size ==  arr->capacity){
		int *new_contents = (int *)malloc(sizeof(int)*arr->capacity*2);
		for (i=0; i<arr->size; i++){
			new_contents[i] = arr->contents[i];
		}
		free(arr->contents);
		arr->contents = new_contents;
		arr->capacity = arr->capacity*2;
	}
	//Shift everything down.
	for (i = arr->size-1;i >= index; i--){
		arr->contents[i+1] = arr->contents[i];
	} 
	arr->contents[index] = thing_to_add;

	arr->size++;
}

//Add to the end
void append_dyn_array(struct DArray *arr, int thing_to_add){
	add_dyn_array(arr, thing_to_add, arr->size);
}

//Remove element at index
void remove_dyn_array(struct DArray *arr, int index){
  int i;
  for (i = index+1; i < arr->size; i++){
	  arr->contents[i-1]=arr->contents[i];
  }  
  arr->size--;
}

void remove_end_dyn_array(struct DArray *arr){
	remove_dyn_array(arr, arr->size-1);
}

void free_dyn_array(struct DArray *arr){
	free(arr->contents);
	free(arr);
}



//DSArrays
struct DSArray *create_dyn_string_array(int capacity){
	struct DSArray *arr = (struct DSArray *)malloc(sizeof(struct DSArray));
	arr->capacity = capacity;
	arr->size = 0;
	arr->contents = (char **)malloc(sizeof(char *) * capacity);
	return arr;
}

void add_dyn_string_array(struct DSArray *arr, char *thing_to_add, int index){
	int i;
	//If we need more space, double the capacity.
	if (arr->size ==  arr->capacity){
		char **new_contents = (char **)malloc(sizeof(char *)*arr->capacity*2);
		for (i=0; i<arr->size; i++){
			new_contents[i] = arr->contents[i];
		}
		free(arr->contents);
		arr->contents = new_contents;
		arr->capacity = arr->capacity*2;
	}
	//Shift everything down.
	for (i = arr->size-1;i >= index; i--){
		arr->contents[i+1] = arr->contents[i];
	} 
	arr->contents[index] = thing_to_add;

	arr->size++;
}

//Add to the end
void append_dyn_string_array(struct DSArray *arr, char *thing_to_add){
	add_dyn_string_array(arr, thing_to_add, arr->size);
}

//Remove element at index
void remove_dyn_string_array(struct DSArray *arr, int index){
  int i;
  arr->contents[index] = NULL;
  for (i = index+1; i < arr->size; i++){
	  arr->contents[i-1]=arr->contents[i];
  }  
  arr->size--;
}

void remove_end_dyn_string_array(struct DSArray *arr){
	remove_dyn_string_array(arr, arr->size-1);
}

void free_dyn_string_array(struct DSArray *arr){
	free(arr->contents);
	free(arr);
}