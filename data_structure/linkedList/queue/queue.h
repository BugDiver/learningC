
typedef struct element {
	int value;
	struct element *next;
} Element;

typedef struct queue {
	Element *f_element;
	Element *l_element;
	int length;
} Queue;

void initialize_queue (Queue *);
void enqueue(Queue *, int );
int dequeue(Queue *);
void print_queue(Queue *);
