/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

/*IT21203312 */
#include <stdio.h>
int minimum(int number1, int number2);
int maximum(int number1, int number2);
int multiply(int number1, int number2);



int main() {
   int number1, number2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &number1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &number2);
   printf("%d ", minimum(number1, number2));
   printf("%d ", maximum(number1, number2));
   printf("%d ", multiply(number1, number2));
   return 0;
}
int minimum(int number1, int number2)
{
  if(number1 > number2)
  {
    return number2;
  }
  else
  {
    return number1;
  }
}

int maximum(int number1, int number2)
{
  if(number1 > number2)
  {
    return number1;
  }
  else
  {
    return number2;
  }
}

int multiply(int number1, int number2)
{
 return number1 * number2;
}