int is_even(num){
	return num % 2;
};

int is_odd(num){
	return !(is_even(num));
};
int square(num){
	return num * num ;
};
int cube(num){
	return num * num * num;
};

int gcd(int divider , int dividend){
	int reminder = dividend %divider ;
	while(reminder != 0){
		dividend = divider;
		divider = reminder;
		reminder = dividend %divider ;
	}
	return divider;
};

int lcm(int num1 ,int num2){
	return (num1 * num2) / gcd(num1 ,num2);
}
int simple_interset(int principle , int rate , int time){
	return (principle *rate * time) /100 ;
}
int compound_interset(int principle , int rate , int time){
	int si ,amount = principle;
	for (int i = 0; i < time; i++) {
		si = simple_interset(amount,rate,1);
		amount  = amount + si ;
	}
	return amount - principle;
};

float convert_fahr_to_cent(float fahr_temp){
	return (fahr_temp - 32) * (5.0/9) ;
};

float convert_cent_to_fahr(float cent_temp){
	return (cent_temp * (9.0/5)) + 32;
};

int sum_of_1_to_n(int num){
	return (num/2) * (num -1);
};

int greatest_of_three(num1 ,num2 ,num3){
	if(num1 > num2 && num1 > num3)
		return num1;
	if(num2 > num3)
		return num2;
	else
		return num3;
};
float ave_of_three_numbers(num1 ,num2 ,num3){
	return (num1 +num2 +num3) / 3;
};

float ave_as_percent(num1 ,num2 ,num3 ,specified_number){
	 return (ave_of_three_numbers(num1 ,num2 ,num3) * 100) / specified_number;
}
