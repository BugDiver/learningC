#include <stdio.h>
#include "stack.h"

int main(){
   Stack new_stack;

   initialize_stack(&new_stack);

   push(&new_stack , 35);
   push(&new_stack , 45);
   push(&new_stack , 55);
   push(&new_stack , 65);
   push(&new_stack , 75);

   printf("poped value is %d\n",pop(&new_stack));
   printf("poped value is %d\n",pop(&new_stack));
   printf("poped value is %d\n",pop(&new_stack));
   printf("poped value is %d\n",pop(&new_stack));
   printf("poped value is %d\n",pop(&new_stack));
   printf("poped value is %d\n",pop(&new_stack));
   print_stack(&new_stack);
   return 0;
}
