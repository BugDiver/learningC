#include<stdio.h>

int print_reverse(int * list , int length){
	for (int i = 0; i <= length; i++){
		printf("%d\n" , *((list+length)-i));
	}
	return 0;
}

int sum_of_array(int * list ,int length){
	int sum  = 0;
	for (int i = 0; i < length; i++){
		sum = sum+ *(list+i);
	}
	printf("sum is %d\n", sum);
	return 0;
}

int print_odd(int * list , int length){
	printf("even no :- ");
	for (int i = 0; i < length; i++){
		if (*(list+i) % 2 != 0){
			printf("%d,",*(list+i) );
		}
	}
	printf("\n");
	return 0;
};
int print_even(int * list , int length){
	printf("odd no :- ");
	for (int i = 0; i < length; i++){
		if (*(list+i) % 2 == 0){
			printf("%d,",*(list+i) );
		}
	}
	printf("\n");
	return 0;
};

int main(void){
	int numbers[10];
	printf("enter your number :--\n");
	for (int i = 0; i < 10; i++){
		scanf("%d" ,&numbers[i]);
	}

	print_even(numbers , 10);
	print_odd(numbers , 10);
	sum_of_array(numbers ,10);
	print_reverse(numbers ,10);

	return 0;

}