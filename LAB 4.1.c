#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    printf("Hello  ! \n");

    float a, b, s;
    char c, kt;

    do
    {

    printf("Enter your first real number: "); scanf("%f",&a);
    printf("Enter your second real number: "); scanf("%f",&b);
    printf("Enter your condition: "); scanf("%s",&c);
      switch (c)
      {
        case'+':
             s = a+b; printf("%f",s); break;
        case'-':
             s = a-b; printf("%f",s); break;
        case'*':
             s = a*b; printf("%f",s); break;
        case'/':
            if (b==0)
                printf("Second number must not be equal to zero");
            else
            {
             s = a/b; printf("%f",s);
            }
            break;
        default: printf("END");
      }
            printf("\n\n Enter K to end program ");
            kt=getch();
            if (kt=='k' || kt=='K')
    	    break;

     } while(1);
    return 0;
}
