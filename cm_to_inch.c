#include <stdio.h>

int main(void) {
  float CM_TO_INCH = 2.54;
  float cm_input, result;

  scanf("%f", &cm_input);

  result = cm_input / CM_TO_INCH;

  printf("%f(cm) = %f(in).\n", cm_input, result);

  return 0;
}
