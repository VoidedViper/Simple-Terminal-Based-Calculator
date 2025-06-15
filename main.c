#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

double resultNo;

double add(double x, double y)
{
  return (x + y);
}
double multiply(double x, double y)
{
  return (x * y);
}
double subtract(double x, double y)
{
  return (x - y);
}
double divide(double x, double y)
{
  return (x / y);
}


void calculator(void) {
  char selectedMode[3];
  printf("\n\nCurrent Number is: %.2f", resultNo);
  printf("\n\nAdd (A), Subtract (S), Multiply (M), Divide (D), SQRT (SR), Sin (radians) (SN), Cos (radians) (COS), Quit (Q)\nInput Mode: ");
  scanf("%s", selectedMode);
  double firstNo = 0;
  double secondNo = 0;
  for (int i = 0; selectedMode[i]; i++) {
      selectedMode[i] = tolower(selectedMode[i]);
  }
  if (strcmp(selectedMode, "a") == 0){
    printf("Input First Number: ");
    scanf("%lf", &firstNo);
    printf("Input Second Number: ");
    scanf("%lf", &secondNo);
    resultNo = add(firstNo, secondNo);
    printf("%.2f", resultNo);
  }
  else if (strcmp(selectedMode, "s") == 0){
    printf("Input First Number: ");
    scanf("%lf", &firstNo);
    printf("Input Second Number: ");
    scanf("%lf", &secondNo);
    resultNo = subtract(firstNo, secondNo);
  }
  else if (strcmp(selectedMode, "m") == 0){
    printf("Input First Number: ");
    scanf("%lf", &firstNo);
    printf("Input Second Number: ");
    scanf("%lf", &secondNo);
    resultNo = multiply(firstNo, secondNo);
  }
  else if (strcmp(selectedMode, "d") == 0){
    printf("Input First Number: ");
    scanf("%lf", &firstNo);
    printf("Input Second Number: ");
    scanf("%lf", &secondNo);
    resultNo = divide(firstNo, secondNo);
  }
  else if (strcmp(selectedMode, "sr") == 0){
    printf("Input Number: ");
    scanf("%lf", &firstNo);
    resultNo = sqrt(firstNo);
  }
  else if (strcmp(selectedMode, "sn") == 0){
    printf("Input Number: ");
    scanf("%lf", &firstNo);
    resultNo = sin(firstNo);
  }
  else if (strcmp(selectedMode, "cos") == 0){
    printf("Input Number: ");
    scanf("%lf", &firstNo);
    resultNo = cos(firstNo);
  }
  else if (strcmp(selectedMode, "q") == 0){
    abort();
  }
  else {
    printf("INVALID INPUT");
  }
}

int main(void) {
  printf("~==================~");
  printf("\n\nC a l c u l a t o r\n\n");
  printf("~==================~");
  while(1){
  calculator();
}
}
