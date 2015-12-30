int factorial( num ){
  int factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial = factorial * i ;
  }
  return factorial;
};

int fibonacci( num ){
  int a = 0 , b = 1 , fibo;
  switch (num) {
    case 1 : return a;
    break;
    case 2 : return b ;
    break;
    default : for (int i = 2; i < num; i++) {
      fibo = a + b;
      a = b;
      b = fibo;
    }
  return fibo;
  }
}
