#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define NULL_ERROR -9999
void initialize_queue(Queue *queue){
	queue->f_element = queue->l_element = NULL;
	queue->length = 0;
}

void enqueue(Queue *queue, int value){
	Element * e = (Element *)malloc(sizeof(Element));
	e->value = value;
	e->next = NULL;
	if (queue->length == 0) {
		queue->f_element = queue->l_element = e;
	}
	else{
		queue->l_element->next = e;
		queue->l_element = e;
	}
	queue->length++;
};

int dequeue(Queue *queue){
	Element *element_to_deque = queue->f_element;
	if (element_to_deque == NULL) {
		return NULL_ERROR;
	}
	queue->f_element = element_to_deque->next;
	free(element_to_deque);
	return element_to_deque->value;
}

void print_queue(Queue *queue){
	if(queue == NULL)
		printf("%d\n",NULL_ERROR );
	Element *element = queue->f_element;
	if (element == NULL){
		printf("%d\n",NULL_ERROR );
	}
	while (element != NULL) {
			printf("%d\n", element->value);
			element = element->next;
	}
}
