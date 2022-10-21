#include <stdio.h>
int main() {
  int op;
  int first, second;
  printf("Enter an operator (1.ADD,2.SUB,3.MULTIPLY,4.DIV,5.MODULUS): ");
  scanf("%d", &op);
  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);

  switch (op) {
    case 1:
      printf("%d + %d = %d", first, second, first + second);
      break;
    case 2:
      printf("%d - %d = %d", first, second, first - second);
      break;
    case 3:
      printf("%d * %d = %d", first, second, first * second);
      break;
    case 4:
      printf("%d / %d = %d", first, second, first / second);
      break;
    case 5:
      printf("%d Modulo %d = %d", first, second, first % second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}

