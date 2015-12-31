// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
//
// struct doubly_list
// {
//     int info;
//     struct doubly_list *prev;
//     struct doubly_list *next;
// }*first,*last,*newnode,*ptr;
//
// int main()
// {
//     int item,i,loc;
//     char ch;
//     newnode=(struct doubly_list*)malloc(sizeof(struct doubly_list));
//     first=newnode;
//     last=newnode;
//     newnode->prev=NULL;
//     do
//     {
//         printf("Enter data: ");
//         scanf("%d",&item);
//         newnode->info=item;
//         printf("Do you want to create another node:(y/n)");
//         fflush(stdin);
//         scanf("%c",&ch);
//         if(tolower(ch)=='y')
//         {
//             newnode->next=(struct doubly_list*)malloc(sizeof(struct doubly_list));
//             newnode->next->prev=newnode;
//             newnode=newnode->next;
//             last=newnode;
//         }
//         else
//         {
//             newnode->next=NULL;
//         }
//     }while(tolower(ch)!='n');
//     printf("Doubly Linked List is:");
//     ptr=first;
//     i=1;
//     while(ptr!=NULL)
//     {
//         printf("Node %d : %d",i,ptr->info);
//         ptr=ptr->next;
//         i++;
//     }
// printf("Enter the item tobe inserted: ");
//     scanf("%d",&item);
//     printf("Enter the location: ");
//     scanf("%d",&loc);
//     newnode=(struct doubly_list *)malloc(sizeof(struct doubly_list));
//     newnode->info=item;
//     ptr=first;
//     i=1;
//     while(i  != loc)  {
//         ptr=ptr->next;
//         i++;
//     }
//     newnode->next=ptr->next;
//     newnode->prev=ptr;
//     ptr->next->prev=newnode;
//     ptr->next=newnode;
//
//     printf("After insertion the linked list is:\n");
//     ptr=first;
//     i=1;
//     while(ptr!=NULL)
//     {
//         printf("\nNode %d : %d",i,ptr->info);
//         ptr=ptr->next;
//         i++;
//     }
//     return 0;
// }




#include <stdio.h>
#include "doubly.h"

int main(){
   List new_list;

   initialize_list(&new_list);
   add_as_last(&new_list , 23);
   add_as_last(&new_list , 33);
   add_as_last(&new_list , 43);
   add_as_last(&new_list , 53);


   add_as_first(&new_list , 25);
   add_as_first(&new_list , 35);
   add_as_first(&new_list , 45);
   add_as_first(&new_list , 55);
   add_as_first(&new_list , 75);

   insert(&new_list , 1234 , 7);
   reverse(&new_list);
   print_list(&new_list);




   return 0;
}
