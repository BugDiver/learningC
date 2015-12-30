#include <stdio.h>
#include "queue.h"

int main(){
   Queue new_queue;

   initialize_queue(&new_queue);

   enqueue(&new_queue , 35);
   enqueue(&new_queue , 45);
   enqueue(&new_queue , 55);
   enqueue(&new_queue , 65);
   enqueue(&new_queue , 75);
   printf("dequeued value is %d\n",dequeue(&new_queue));
   printf("dequeued value is %d\n",dequeue(&new_queue));
   printf("dequeued value is %d\n",dequeue(&new_queue));
   printf("dequeued value is %d\n",dequeue(&new_queue));
   printf("dequeued value is %d\n",dequeue(&new_queue));
   printf("dequeued value is %d\n",dequeue(&new_queue));
   // print_queue(&new_queue);
   return 0;
}
