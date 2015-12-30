
typedef struct element {
	int value;
	struct element *previous;
} Element;

typedef struct stack {
	Element *top_element;
	int length;
} Stack;

void initialize_stack (Stack *);
void push(Stack *, int );
int pop(Stack *);
void print_stack(Stack *);
