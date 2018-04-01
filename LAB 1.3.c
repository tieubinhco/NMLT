#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h,c);
}
int main()
{
    char ten1[30], ten2[30], ten3[30];
    char h1[30], h2[30], h3[30];
    int id1, id2, id3;
    printf("Enter your name: ");
    scanf(" %[^\n]", ten1);

    printf("\n\nEnter your ID: ");
    scanf("%d", &id1);



    printf("\n\nEnter your hometown: ");
    scanf(" %[^\n]", h1);


    printf("\n\nEnter your friend's name: ");
    scanf(" %[^\n]", ten2);


    printf("\n\nEnter your friend's ID: ");
    scanf("%d", &id2);


    printf("\n\nEnter your friend's hometown: ");
    scanf(" %[^\n]", h2);


    printf("\n\nEnter your friend's name: ");
    scanf(" %[^\n]", ten3);


    printf("\n\nEnter your friend's ID: ");
    scanf("%d", &id3);


    printf("\n\nEnter your friend's hometown: ");
    scanf(" %[^\n]", h3);
    system("cls");

    int max;
        max = strlen(ten1);
        if(max < strlen(ten2))
        max = strlen(ten2);
        if(max < strlen(ten3))
        max = strlen(ten3);


    int home;
        home = strlen(h1);
        if(home < strlen(h2))
        home = strlen(h2);
        if(home < strlen(h3))
        home = strlen(h3);




    for (int i=1; i<=(max+20+home); i++)
        {
            printf("-");
        }
    printf("\n  Full name");


    gotoxy(max+5,1);
    printf("|");
    printf(" ID");

    gotoxy(max+10+5,1);
    printf("|");
    printf(" Hometown");

    gotoxy(0,2);

    for (int i=1; i<=(max+20+home); i++)
        {
            printf("-");
        }

    printf("\n  %s", ten1);
    printf("\n  %s", ten2);
    printf("\n  %s", ten3);

    gotoxy(max+10+5,3);
    printf("| %s", h1);
    gotoxy(max+10+5,4);
    printf("| %s", h2);
    gotoxy(max+10+5,5);
    printf("| %s", h3);

    gotoxy(max+5,3);
    printf("| %d", id1);
    gotoxy(max+5,4);
    printf("| %d", id2);
    gotoxy(max+5,5);
    printf("| %d", id3);

    gotoxy(0,7);

    for (int i=1; i<=(max+20+home); i++)
        {
            printf("-");
        }



}
