
int str_length(char *str){
	int length = 0;
	while(*str != '\0'){
		length++;
		str+=1;
	}
	return length;
};

char *concat(char *dest ,char *source){
	int i = str_length(dest);
	int length = str_length(source);
	for (int j = 0; j < length; i++, j++) {
    	*(dest + i) = *(source + j);
   	}
   	*(dest + i +1) = '\0';
   	return dest;
}

char * to_upper_case(char *lower){
	int length = str_length(lower);
	for (int i = 0; i < length; ++i){
		if(*(lower+i) >= 'a' && *(lower+i) <='z')
			*(lower+i) = *(lower+i) - 32;
	}
	return lower;
};

char * to_lower_case(char *upper){
	int length = str_length(upper);
	for (int i = 0; i < length; ++i){
		if(*(upper+i) >= 'A' && *(upper+i) <='Z')
			*(upper+i) = *(upper+i) + 32;
	}
	return upper;
};

int count_vowel(char *word){
	char *str = to_upper_case(word);
	int length = str_length(str);
	int no_f_vowels = 0;
	for (int i = 0; i < length; ++i){
		char character = *(str+i);
		if(character=='A' || character=='E' || character=='I'|| character=='O'|| character=='U')
			no_f_vowels++;
	}
	return no_f_vowels;
}

int is_palindrome(char *word){
	int length = str_length(word);
	for(int i = 0; i < length/2; i++){
		if(*(word+i) != *((word+length-1)-i))
			return 0;
	}
	return 1;
};

int is_palindrome_recursion(char *word ,int length){
	if(length <= 1)
		return 1;
	else if(*word == *(word+length-1) )
		return is_palindrome_recursion(word+1 , length-2);
	else
		return 0;
}
