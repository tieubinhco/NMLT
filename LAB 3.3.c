#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct crop
{
 char NA[10];
 char RE[10];
 char CN[50];
 int Y;
 };
void main(void)
{
 struct crop C1;
 struct crop C2;
 struct crop C3;
 struct crop C4;

 printf("Please enter all distributor name\n");
 scanf("%s",C1.NA);
 scanf("%s",C2.NA);
 scanf("%s",C3.NA);
 scanf("%s",C4.NA);
 char s1[10],s2[10],s3[10],s4[10],a1[50];
 printf("Please enter all type of region\n");
 scanf("%s",s1);
 scanf("%s",s2);
 scanf("%s",s3);
 scanf("%s",s4);
 printf("Please enter all region\n");
 scanf("%s",C1.RE);
 scanf("%s",C2.RE);
 scanf("%s",C3.RE);
 scanf("%s",C4.RE);
 printf("Please enter your country\n");
 scanf("%s",a1);
 printf("Please enter all country name\n");
 scanf("%s",C1.CN);
 scanf("%s",C2.CN);
 scanf("%s",C3.CN);
 scanf("%s",C4.CN);
 printf("Please enter the year\n");
 scanf("%d",&C1.Y);
 scanf("%d",&C2.Y);
 scanf("%d",&C3.Y);
 scanf("%d",&C4.Y);
 float it=0;
  if (strcmp(C1.RE,s1)==0)
    it=it+1;
  if (strcmp(C2.RE,s1)==0)
    it=it+1;
  if (strcmp(C3.RE,s1)==0)
    it=it+1;
  if (strcmp(C4.RE,s1)==0)
    it=it+1;

    printf("The percentage of distributors in %s is %.2f percent each\n",s1,100/it);
    float ix=0;
  if (strcmp(C1.RE,s2)==0)
    ix=ix+1;
  if (strcmp(C2.RE,s2)==0)
    ix=ix+1;
  if (strcmp(C3.RE,s2)==0)
    ix=ix+1;
  if (strcmp(C4.RE,s2)==0)
    ix=ix+1;

    printf("The percentage of distributors in %s is %.2f percent each\n",s2,100/ix);
    float iy=0;
  if (strcmp(C1.RE,s3)==0)
    iy=iy+1;
  if (strcmp(C2.RE,s3)==0)
    iy=iy+1;
  if (strcmp(C3.RE,s3)==0)
    iy=iy+1;
  if (strcmp(C4.RE,s3)==0)
    iy=iy+1;

    printf("The percentage of distributors in %s is %.2f percent each\n",s3,100/(float)iy);
    float iz=0;
  if (strcmp(C1.RE,s4)==0)
    iz=iz+1;
  if (strcmp(C2.RE,s4)==0)
    iz=iz+1;
  if (strcmp(C3.RE,s4)==0)
    iz=iz+1;
  if (strcmp(C4.RE,s4)==0)
    iz=iz+1;

    printf("The percentage of distributors in %s is %.2f percent each\n",s4,100/iz);

 double Year[4]={C1.Y,C2.Y,C3.Y,C4.Y};
 int i=1,n=4,g=0;
 double Low=Year[0];
 while(i<n){
 if(Low<=Year[i])
    i=i+1;
 else{
    Low=Year[i];
    ;
 }}

 if (C1.Y==Low)
 printf("The oldest distributor is %s\n",C1.NA);
 if (C2.Y==Low)
 printf("The oldest distributor is %s\n",C2.NA);
 if (C3.Y==Low)
 printf("The oldest distributor is %s\n",C3.NA);
 if (C4.Y==Low)
 printf("The oldest distributor is %s\n",C4.NA);

 int i2=1,n2=4;
 double High=Year[0];
 while(i2<n2){
 if(High>=Year[i2])
    i2=i2+1;
 else{
    High=Year[i2];
    i2=i2+1;}}

 if (C1.Y==High)
 printf("The youngest distributor is %s\n",C1.NA);
 if (C2.Y==High)
 printf("The youngest distributor is %s\n",C2.NA);
 if (C3.Y==High)
 printf("The youngest distributor is %s\n",C3.NA);
 if (C4.Y==High)
 printf("The youngest distributor is %s\n",C4.NA);

  int ic=0;
  if (strcmp(C1.CN,a1)==0)
    ic=ic+1;
  if (strcmp(C2.CN,a1)==0)
    ic=ic+1;
  if (strcmp(C3.CN,a1)==0)
    ic=ic+1;
  if (strcmp(C4.CN,a1)==0)
    ic=ic+1;
    printf("The number of distributor in Vietnam is %d\n",ic);
    return 0;


 }

