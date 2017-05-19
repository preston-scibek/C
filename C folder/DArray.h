#ifndef DARRAY_H 
#define DARRAY_H

struct DArray{
	int capacity;
	int size;
	int *contents;
};
struct DArray *create_dyn_array(int capacity);
void add_dyn_array(struct DArray *arr, int thing_to_add, int index);
void append_dyn_array(struct DArray *arr, int thing_to_add);
void remove_dyn_array(struct DArray *arr, int index);
void remove_end_dyn_array(struct DArray *arr);
void free_dyn_array(struct DArray *arr);


struct DSArray{
	int capacity;
	int size;
	char **contents;
};
struct DSArray *create_dyn_string_array(int capacity);
void add_dyn_string_array(struct DSArray *arr, char *thing_to_add, int index);
void append_dyn_string_array(struct DSArray *arr, char *thing_to_add);
void remove_dyn_string_array(struct DSArray *arr, int index);
void remove_end_dyn_string_array(struct DSArray *arr);
void free_dyn_string_array(struct DSArray *arr);

#endif // DARRAY_H
