#include <stdio.h>
int main() {

  int n, i, range,j;
  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Enter the range:");
  scanf("%d",&range);
  for (i = 1; i <= range; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  for (i = 1; i <= range; ++i) {
    printf("%d * %d = %d \n", n+1, i, (n+1)* i);
  }

  return 0;
}
