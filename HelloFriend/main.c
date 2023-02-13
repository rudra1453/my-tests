#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,cube;
    printf("any integer value:");
    scanf("%d",&number);

    cube=number*number*number;
    printf("cube of given number:%d", cube);

    return 0;
}
