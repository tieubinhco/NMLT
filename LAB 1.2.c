#include <stdio.h>
#include <stdlib.h>

void main()
{   char ten[100];
    float T,L,H,TB;

    printf("Type student's name:\n");
    scanf("%s", ten);

    printf("Type math score:\n");
    scanf("%f", &T);

    printf("Type physics score:\n");
    scanf("%f", &L);

    printf("Type cheistry score:\n");
    scanf("%f", &H);

    TB=((T+L+H)/3);

    printf("Average score is %.2f",TB);
    getch();


}
