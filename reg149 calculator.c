#include <stdio.h>
#include <math.h>
int main() {
  char op;
  double first, second;
  printf("Enter an operator (1.ADD,2.SUB,3.MUL,4.DIV,5.SQUARE): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '1':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '2':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '3':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '4':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    case '5':
      printf("%.1lf / %.1lf = %.1lf", first, second, pow(first,second));
	  break;	
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

