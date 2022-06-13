#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!\n");
    printf("I am learning C.\n");

//This is a single-line comment
/*
 This is a multi-line comment
*/

int myNum = 15;
//printf(myNum);  // ?program stops?
printf("%d", myNum);  // Outputs 15
printf("\n");

float myFloatNum = 5.99;   // Floating point number
printf("%f\n", myFloatNum);
char myLetter = 'D';       // Character
printf("%c\n", myLetter);

printf("My favorite number is: %d", myNum);
printf("\n");

int x = 5;
int y = 6;
int sum = x + y;
printf("the sum is: %d", sum);
printf("\n");

printf("size of sum is: %lu", sizeof(sum));
printf("\n");

int x1 = 10;
int y1 = 5;
printf("x1 times y1 is: %d", x1 * y1);
printf("\n");

int time = 20;
if (time < 18) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
(time < 18) ? printf("Good day.") : printf("Good evening.");
printf("\n");

    return 0;
}
