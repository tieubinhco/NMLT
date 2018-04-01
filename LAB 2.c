#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    double a,b,c;
    printf("Enter triangle lengths a, b, c: \n");
    scanf("%lf %lf %lf", &a,&b,&c);
    if (a+b<=c || a+c<=b || b+c<=a || a<=0 || b<=0 || c<=0)
        printf("\nInvalid triangle lengths!!!\n\n");
        else { double d,s;
            d=(a+b+c)/2;
            s=sqrt((d-a)*(d-b)*(d-c)*d);
            printf("The area of this triangle is %f \n\n" ,s);
            }
}
