#include <stdio.h>

int main(void) {
  float arg1, arg2, result;

  scanf("%f", &arg1);
  scanf("%f", &arg2);

  result = arg1 / arg2;
  
  printf("%f", result);

  return 0;
}
