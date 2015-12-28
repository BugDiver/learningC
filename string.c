#include <stdio.h>
#include "str_utils.h"

int main(void){
	char a[] = "vinay ";
	char b[] = "shankar shukla";
	char *c = "malayalam";
	char *d[] = {"Camle","CASE"};

	printf("the length of '%s' is  ==> %d\n",a,str_length(a));
	printf("concatination of 'vinay ' and '%s' is ==> '%s'\n",b,concat(a,b));
	printf("upper case of 'vinay shankar shukla' is ==> %s\n",to_upper_case(a));
	printf("lower case of 'VINAY SHANKAR SHUKLA' is  ==> %s\n",to_lower_case(a));
	printf("no of vowels in '%s'  is  ==> %d\n",a,count_vowel(a));
	printf("'%s' is palindrome  ==> %d ",c,is_palindrome(c));
	printf("using recursion  ==> %d\n",is_palindrome_recursion(c,str_length(c)));
	printf("reverse of 'shankar shukla' is ==> %s\n",reverse(b,str_length(b)));
	printf("stripped string is ==> %s\n",strip(a,str_length(a)));
	return 0;
}
