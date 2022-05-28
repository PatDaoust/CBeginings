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

    return 0;
}
