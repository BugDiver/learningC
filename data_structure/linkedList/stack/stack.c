#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define NULL_ERROR -9999

void initialize_stack(Stack *stack){
	stack->top_element = NULL;
	stack->length = 0;
}

void push(Stack *stack, int value){
	Element * e = (Element *)malloc(sizeof(Element));
	e->value = value;
	if(stack->length == 0){
      e->previous = NULL;
   }else{
      e->previous = stack->top_element;
   }
   stack->top_element = e;
   stack->length++;
};

int pop(Stack *stack){
	Element *element_to_pop = stack->top_element;
	if (element_to_pop == NULL) {
		return NULL_ERROR;
	}
	stack->top_element = element_to_pop->previous;
	free(element_to_pop);
	return element_to_pop->value;
}

void print_stack(Stack *stack){
	if(stack == NULL)
		printf("%d\n",NULL_ERROR );
	Element *element = stack->top_element;
	if (element == NULL){
		printf("%d\n",NULL_ERROR );
	}
	while (element != NULL) {
			printf("%d\n", element->value);
			element = element->previous;
	}
}
