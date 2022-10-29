#include <stdio.h>

int main(void) {
  int a, b;
  int sum, avg;

  scanf("%d", &a);
  scanf("%d", &b);

  sum = a + b;
  avg = sum / 2;

  printf("SUM: %d\nAVG: %d", sum, avg);

  return 0;
}
