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
