#include <stdio.h>
#include "str_utils.h"

int main(void){
	char a[50] = "vinay";
	char b[50] = "shankar";
	char *c = "malayalam";
	printf("%s\n",concat(a ,b));
	printf("%d\n",str_length(a));
	printf("%s\n",to_upper_case(a));
	printf("%s\n",to_lower_case(a));
	printf("%d\n",count_vowel(a) );
	printf("%d\n",is_palindrome(c));
	printf("using recursion %d\n",is_palindrome_recursion(c , str_length(c)));

	return 0;
}

