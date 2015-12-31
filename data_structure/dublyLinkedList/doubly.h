
typedef struct element {
	int value;
	struct element *next;
	struct element *prev;
} Element;

typedef struct list {
	Element *f_element;
	Element *l_element;
	int length;
} List;

void initialize_list (List *);
void add_as_last(List *, int );
void add_as_first(List *, int );
void reverse(List *);
void insert(List * , int , int);
void print_list(List *);
