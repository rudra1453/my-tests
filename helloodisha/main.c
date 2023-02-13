#include <stdio.h>

int main()
{
    float length, breadth, perimeter;
    printf("length of rectangle:");
    scanf("%f", &length);

    printf("breadth of rectangle:");
    scanf("%f", &breadth);

    perimeter= 2*( length + breadth);
    printf("perimeter of the rectangle: %f", perimeter);

    return 0;

}
