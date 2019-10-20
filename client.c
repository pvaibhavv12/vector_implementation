#include<stdio.h>
#include"vector.h"

typedef struct vector_int_stack{

    vector_int stack_int;

} vector_int_stack;

void init_for_stack(vector_int_stack* s){

    vector_init(&(s->stack_int));


}

void push_for_stack(vector_int_stack* s,int ele){
    
    (s->stack_int).push_back(&(s->stack_int),ele);

}

int pop_for_stack(vector_int_stack* s){
    
    (s->stack_int).pop_back(&(s->stack_int));

}

void display_for_stack(vector_int_stack* s){
    
    int length = s->stack_int.size(&s->stack_int);

    for(int i = 0; i < length ; i++){
        printf("print for stack %d\n",s->stack_int.arr[i]);
    }
}

int main(){
    /*vector_int v;
    vector_char vc;

    vector_init(&v);
    vector_char_init(&vc);

    v.push_back(&v,5);
    v.push_back(&v,8);
    v.push_back(&v,9);
    v.push_back(&v,5);
    v.push_back(&v,3);
    v.push_back(&v,1);
    v.push_back(&v,0);
    v.push_back(&v,58);
    v.push_back(&v,56);
    v.push_back(&v,533);
    v.push_back(&v,589);

    vc.push_back(&vc,'v');
    vc.push_back(&vc,'a');
    vc.push_back(&vc,'i');
    vc.push_back(&vc,'b');
    vc.push_back(&vc,'h');
    vc.push_back(&vc,'a');
    vc.push_back(&vc,'v');
    vc.push_back(&vc,'v');

    for(int i = 0; i < v.size(&v) ; i++)
        printf("%d \n",v.arr[i]);
    printf("////////////////////////////////////////\n");
    for(int i = 0; i < vc.size(&vc) ; i++)
        printf("%c\n",vc.arr[i]);

    int max = *max_element(&v,begin(&v),end(&v));

    char min = *min_char_element(&vc,begin_char(&vc),end_char(&vc));

    printf("max_element : %d  ,min_element : %c \n",max,min);

    printf("int front %d back %d\n",front(&v),back(&v));

    printf("pointers %p %p\n",begin(&v),end(&v));

    printf(" char front %c back %c\n",front_char(&vc),back_char(&vc));

    printf("size of int %d",v.capacity);
    printf("sizeof char %d\n",vc.capacity);*/

    /*
    vector_init(&v);
    int n;
    do
    {
        scanf("%d",&n);
        v.push_back(&v,n);
        printf("number of elements :%d capacity : %d\n",v.size(&v),v.capacity);
    } while (n);*/


    vector_int_stack stack;

    init_for_stack(&stack);

    push_for_stack(&stack,5);
    push_for_stack(&stack,6);
    push_for_stack(&stack,7);
    push_for_stack(&stack,8);
    push_for_stack(&stack,9);
    push_for_stack(&stack,10);
    push_for_stack(&stack,153);

    display_for_stack(&stack);

    printf("pushed everything \n");
    printf("\n\n");
    pop_for_stack(&stack);
    pop_for_stack(&stack);
    pop_for_stack(&stack);
    pop_for_stack(&stack);
    printf("display after pop functions \n");
    display_for_stack(&stack);
    

}