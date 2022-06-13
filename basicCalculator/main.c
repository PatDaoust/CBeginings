#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    int operation;

    printf("please input a number: ");
    scanf("%lf", &num1);
    printf("please input another number: ");
    scanf("%lf", &num2);

    printf("please input 1 for addition, 2 for subtraction, 3 for multiplication, or 4 for division: ");
    scanf("%d", &operation);

    if (operation==1){
        printf("the sum is: %f", num1+num2);
    }
    else if (operation==2){
        printf("%f", num1-num2);
    }
    else if (operation==3){
        printf("%f", num1*num2);
    }
    else if (operation==4){
        printf("%f", num1/num2);
    }
    else{
        printf("that was not a valid entry. goodbye");
    }

    return 0;
}
