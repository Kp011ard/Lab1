#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    float x;
        printf("Hello, Please enter 3 numbers: ");
        scanf("%f %f %f", &a, &b, &c);
        x=a+b+c;
        printf("\nThe addition of this is: %f", &x);
    return 0;
}
