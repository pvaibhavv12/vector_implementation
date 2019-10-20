#ifndef VECTOR_CHAR_H
#define VECTOR_CHAR_H


typedef struct vector_char {
    
    int capacity;
    int elements;
    char *arr;
    void (*push_back)(struct vector_char* vec , char ele);
    bool (*pop_back)(struct vector_char* vec);
    int (*size)(struct vector_char* vec);

} vector_char;


void vector_char_init(vector_char* vec);
void vector_char_add(vector_char* vec , char ele);
bool vector_char_del(vector_char* vec);
char* begin_char(vector_char* vec);
char* end_char(vector_char* vec);
char front_char(vector_char* vec);
char back_char(vector_char* vec);
int number_of_elements_char(vector_char* vec);
char* min_char_element(vector_char* v,char* start,char* end);
char* max_char_element(vector_char* v,char* start,char* end);
void vector_display_char(vector_char* vec);

#endif