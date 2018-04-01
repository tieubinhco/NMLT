#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void main()
{
    int MAX;
    printf("\nImport MAX: ");
    scanf("%d",&MAX);

    struct course
    {   char ID[6];
        char name[100];
        int cre;
        int type;
        char type1[20];
        float point;
        char grade;
        int count;
    } course[MAX];

    for (int i=1; i<=MAX; i++)
    {
        printf("\n\nImport");
        printf("\nID %d: ",i); scanf("%s",course[i].ID);
        printf("\nName %d: ",i); scanf("%s",course[i].name);
        printf("\nCredit %d: ",i);scanf("%d",&course[i].cre);
        printf("\nType %d: ",i); scanf("%s",course[i].type1);
        printf("\nPoint %d: ",i); scanf("%f",&course[i].point);
        course[i].count=i;
    }



//Grade + Type
    for(int j=1;j<=MAX;j++)
    {
        if ((course[j].point<=10) && (course[j].point>=8.5))
            course[j].grade='A';
        else if  ((course[j].point<8.5) && (course[j].point>=6.5))
            course[j].grade='B';
        else if  ((course[j].point<6.5) && (course[j].point>=5))
            course[j].grade='C';
        else if  ((course[j].point<5) && (course[j].point>=0))
            course[j].grade='D';


    }
  float avg=0;
  int cre=0;
  for (int k=1;k<=MAX;k++)
  {
      avg = avg + course[k].point*course[k].cre;
      cre = cre + course[k].cre;
  }
  avg=avg/cre;


    printf("\n\nID                            Name                         Credit                        Type                          Grade                         Point                        \n");
    for (int i=1;i<=MAX;i++)
        {
            printf("%-30s%-30s%-30d%-30s%-30c%-30f\n",course[i].ID,
                                                course[i].name,
                                                course[i].cre,
                                                course[i].type1,
                                                course[i].grade,
                                                course[i].point);
        }

printf("\n\n\nAverage score: %.2f\n\n\n",avg);
}


