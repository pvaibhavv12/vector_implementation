#include<stdio.h>
#include<stdlib.h>
#include"vector.h"

int min(int a,int b){
    return a > b ? b : a;
}

// ALL FUNCTIONS FOR INTEGERS

void vector_init(vector_int* vec){
    
    vec->capacity = 1;
    vec->elements = 0;
    vec->arr = malloc(sizeof(int) * vec->capacity);
    vec->push_back = vector_add;
    vec->pop_back = vector_del;
    vec->size = number_of_elements;

}

void increase_size(vector_int* vec){

    vec->capacity = vec->capacity * 2;
    vec->arr = realloc(vec->arr , vec->capacity * sizeof(int));

}

void vector_add(vector_int* vec,int ele){

    vec->elements++;

    if(vec->elements == vec->capacity + 1)
        increase_size(vec);

    vec->arr[vec->elements - 1] = ele;

}

bool vector_del(vector_int* vec){
    if(vec->elements <= 0)
        return false;
    vec->elements--;
    return true;
}

int number_of_elements(vector_int* vec){
    return vec->elements;
}

int* begin(vector_int* vec){
    return &vec->arr[0];
}

int* end(vector_int* vec){
    return &vec->arr[vec->elements - 1];
}

int front(vector_int* vec){
    if(vec->elements == 0)
        return false;
    return vec->arr[0];
}

int back(vector_int* vec){
    if(vec->elements == 0)
        return false;
    return vec->arr[vec->elements - 1];
}

int* max_element(vector_int* vec,int* start,int* end){
    if(vec->elements == 0)
        return false;
    int now_max = vec->arr[0];
    int max_index = 0;
    
    int asked_length = end - start;
    int size_of_arr = vec->elements;

    for(int i = 1; i < min(asked_length,size_of_arr);i++){
        
        if(vec->arr[i] > now_max){
            now_max = vec->arr[i];
            max_index = i;
        }
    }
    
    return &vec->arr[max_index]; 
}

int* min_element(vector_int* vec,int* start,int* end){
    if(vec->elements == 0)
        return false;
    int now_min = vec->arr[0];
    int min_index = 0;

    int asked_length = end - start;
    int size_of_arr = vec->elements;

    for(int i = 0; i < min(asked_length,size_of_arr);i++){

        if(vec->arr[i] < now_min){
            now_min = vec->arr[i];
            min_index = i;
        }
    }

    return &vec->arr[min_index];
}


// FUNCTIONS FOR CHAR



void vector_char_init(vector_char* vec){
    
    vec->capacity = 1;
    vec->elements = 0;
    vec->arr = malloc(sizeof(char) * vec->capacity);
    vec->push_back = vector_char_add;
    vec->pop_back = vector_char_del;
    vec->size = number_of_elements_char;

}

void increase_char_size(vector_char* vec){

    vec->capacity = vec->capacity * 2;
    vec->arr = realloc(vec->arr , vec->capacity * sizeof(char));

}

void vector_char_add(vector_char* vec,char ele){

    vec->elements++;

    if(vec->elements == vec->capacity + 1)
        increase_char_size(vec);

    vec->arr[vec->elements - 1] = ele;

}

bool vector_char_del(vector_char* vec){
    if(vec->elements <= 0)
        return false;
    vec->elements--;
    return true;
}

int number_of_elements_char(vector_char* vec){
    return vec->elements;
}

char* begin_char(vector_char* vec){
    return vec->arr;
}


char* end_char(vector_char* vec){
    return &vec->arr[vec->elements - 1];
}

char front_char(vector_char* vec){
    if(vec->elements == 0)
        return '0';
    return vec->arr[0];
}

char back_char(vector_char* vec){
    if(vec->elements == 0)
        return '0';
    return vec->arr[vec->elements - 1];
}

char* max_char_element(vector_char* vec,char* start,char* end){
    
    int now_max = vec->arr[0];
    int max_index = 0;
    
    int asked_length = end - start;
    int size_of_arr = vec->elements;

    for(int i = 1; i < min(asked_length,size_of_arr);i++){
        
        if(vec->arr[i] > now_max){
            now_max = vec->arr[i];
            max_index = i;
        }
    }

    return &vec->arr[max_index]; 
}

char* min_char_element(vector_char* vec,char* start,char* end){
    
    int now_min = vec->arr[0];
    int min_index = 0;

    int asked_length = end - start;
    int size_of_arr = vec->elements;

    for(int i = 0; i < min(asked_length,size_of_arr);i++){

        if(vec->arr[i] < now_min){
            now_min = vec->arr[i];
            min_index = i;
        }
    }

    return &vec->arr[min_index];
}