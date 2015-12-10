#include<stdio.h>
#include "basicLib.h"

int boolean(int flag){
	if(flag == 0)
		printf("TRUE\n");
	if(flag == 1)
		printf("FALSE\n");
	return 0;
}

int main(void){
	printf("2 is Even Number ? ");
		boolean(is_even(2));
	printf("3 is odd number ? ");
		boolean(is_odd(3));
	printf("square of  %d is %d\n", 5, square(5));
	printf("cube of %d is %d \n",  5, cube(5));
	printf("gcd of %d and %d is %d\n", 3, 12,gcd(3,12));
	printf("gcd of %d and %d is %d\n", 24, 12,gcd(24,12));
	printf("lcm of %d and %d is %d\n", 24, 12,lcm(24,12));
	printf("lcm of %d and %d is %d\n", 35, 15,lcm(35,15));
	printf("simple interset of %d , %d and %d is %d and it should be 4800\n",20000 , 8, 3,simple_interset(20000,8,3));
	printf("compound interset of %d , %d and %d is %d and it should be 610\n",1000 , 10, 5,compound_interset(1000,10,5));
	printf("temp in fahr.  %f is equal to %f in cent.\n", 0.0,convert_fahr_to_cent(0));
	printf("temp in fahr.  %f is equal to %f in cent.\n", -40.0,convert_fahr_to_cent(-40));
	printf("temp in fahr.  %f is equal to %f in cent.\n", 32.0,convert_cent_to_fahr(32));
	printf("temp in fahr.  %f is equal to %f in cent.\n", -40.0,convert_cent_to_fahr(-40));
	printf("sum of 1 to %d   is %d \n",10,sum_of_1_to_n(10));
	printf("greatest number between %d , %d and %d is %d\n",12 ,13 ,14 ,greatest_of_three(12,13,14));
	printf("ave of  %d , %d and %d is %f\n",12 ,13 ,14 ,ave_of_three_numbers(12,13,14));
	printf("percent ave of %d , %d and %d as a precent of %d  is %f \n",12,13,14,100, ave_as_percent(12,13,14,100));
};
