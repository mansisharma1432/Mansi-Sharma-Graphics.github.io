#include<stdio.h>
int main ()
{
  int a, b;
  float result;
  char n;
  printf ("Enter first number = ");
  scanf ("%d", &a);
  printf ("Enter second number = ");
  scanf ("%d", &b);
  printf ("Choose operator to perform operations = ");
  scanf (" %c", &n);
  result = 0;
  switch (n)
    {
    case '+':
      result = a + b;
      break;
    case '-':
      result = a - b;
      break;
    case '*':
      result = a * b;
      break;
    case '/':
      result = a / b;
      break;
    default:
      printf ("Invalid operation\n");
    }
  printf ("Result: %d %c %d = %f\n", num1, ch, num2, result);
  return 0;
}
