#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int operation;

    printf("please input a number: ");
    scanf("%d", &num1);
    printf("please input another number: ");
    scanf("%d", &num2);

    printf("please input 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, or 5 for modulo: ");
    scanf("%d", operation);

    if (operation==1){
        printf("%d", num1+num2);
    }
    else if (operation==2){
        printf("%d", num1-num2);
    }
    else if (operation==3){
        printf("%d", num1*num2);
    }
    else if (operation==4){
        printf("%f", num1/num2);
    }
    else if (operation==5){
        printf("%f", num1%num2);
    }
    else{
        printf("that was not a valid entry. goodbye");
    }


    return 0;
}
