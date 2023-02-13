#include<stdio.h>
int main()
{
    float farenheit,celsius;
    printf("enter temperature in celsius: ");
    scanf("%f",&celsius);


    farenheit=(celsius*9)/5+32;
    printf("%f",farenheit);
    return 0;
}
