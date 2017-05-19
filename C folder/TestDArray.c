#include <stdio.h>
#include <stdlib.h>
#include "DArray.h"

int main(void){
   struct DArray *arr = create_dyn_array(10);
   int i;
   for (i = 0; i < 1000; i++){
	   append_dyn_array(arr, i);
   }
   remove_dyn_array(arr, 995);
   for (i = 0; i < arr->size; i++){
	   printf("%d\n", arr->contents[i]);
   }
   printf("%d\n", arr->capacity);
   
   struct DSArray *arr2 = create_dyn_string_array(10);
   append_dyn_string_array(arr2, "hi");
   append_dyn_string_array(arr2,"bye");
   append_dyn_string_array(arr2, "ciao");
   for (i = 0; i < arr2->size; i++){
	   printf("%s\n", arr2->contents[i]);
   }
}