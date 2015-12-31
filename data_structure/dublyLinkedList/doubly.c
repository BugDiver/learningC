#include <stdio.h>
#include <stdlib.h>
#include "doubly.h"

#define NULL_ERROR -9999

void initialize_list(List *list){
	list->f_element = list->l_element = NULL;
	list->length = 0;
}

Element *setValue(value){
	Element * e = (Element *)malloc(sizeof(Element));
	e->value = value;
	e->next = NULL;
	e->prev = NULL;
	return e;
}

void add_as_last(List *list, int value){
	Element *element =  setValue(value);
	if (list->length == 0) {
		list->f_element = list->l_element = element;
	}
	else{
		element->prev = list->l_element;
		list->l_element->next = element;
		list->l_element = element;
	}
	list->length++;
};

void add_as_first(List *list , int value) {
	Element *element =  setValue(value);
	if (list->length == 0) {
		list->f_element = list->l_element =element;
	}
	else{
		element->next = list->f_element;
		list->f_element->prev =element;
		list->f_element =element;
	}
	list->length++;
}
void reverse(List *list){
	Element *temp = NULL;
	Element *current = list->f_element;
	while (current !=  NULL){
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;
       current = current->prev;
     }
     if(temp != NULL )
        list->f_element = temp->prev;
}

void insert(List *list ,int value , int position){
	if(position == 0){
		add_as_first(list , value);
	}else if(position == list->length-1){
		add_as_last(list ,value);
	}else{
		Element *element =  setValue(value);
		Element *temp = list->f_element;
      int i=1;
      while(i  != position)  {
          temp=temp->next;
          i++;
      }
      element->next=temp->next;
      element->prev=temp;
      temp->next->prev=element;
      temp->next=element;
	}
}
void print_list(List *list){
	if(list == NULL)
		printf("%d\n",NULL_ERROR );
	Element *element = list->f_element;
	if (element == NULL){
		printf("%d\n",NULL_ERROR );
	}
	while (element != NULL) {
			printf("%d\n", element->value);
			element = element->next;
	}
}
