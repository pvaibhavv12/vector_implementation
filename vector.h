#ifndef VECTOR_H
#define VECTOR_H

typedef int bool;
#define true 1
#define false 0

#include"vector_char.h"

// INTEGERS 

typedef struct vector_int {
    
    int capacity;
    int elements;
    int *arr;
    void (*push_back)(struct vector_int* vec , int ele);
    bool (*pop_back)(struct vector_int* vec);
    int (*size)(struct vector_int* vec);
    
} vector_int;


void vector_init(vector_int* vec);
void vector_add(vector_int* vec , int ele);
bool vector_del(vector_int* vec);
int* begin(vector_int* vec);
int* end(vector_int* vec);
int front(vector_int* vec);
int back(vector_int* vec);
int number_of_elements(vector_int* vec);
int* min_element(vector_int* v,int* start,int* end);
int* max_element(vector_int* v,int* start,int* end);
void vector_display(vector_int* vec);


#endif