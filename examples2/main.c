#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNumbers[] = {3,7,21,69,420};
    myNumbers[2] = 0;
    printf("%d", myNumbers[2]);
    return 0;
}
