#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct info {
    int identifier;
    char name[50];
    char model[6];
    int year;
    float price;
    int type;
};

void main() {
    struct info info[4];
    int i, count1=0, count2=1, lowest=9999999;
    float count3=0, percentage;
    for (i=0; i<4; i++) {
        printf("\nProduct #%d", i+1);
        printf("\nIdentifier: ");
        scanf("%d", &info[i].identifier);
        printf("Name: ");
        scanf("%s", &info[i].name);
        //gets(info[i].name);
        printf("\nModel: ");
        scanf ("%s", &info[i].model);
        //gets(info[i].model);
        printf("\nYear: ");
        scanf("%d", &info[i].year);
        if (info[i].year==2010) {
            count1++;
        }
        printf("Price: ");
        scanf("%f", &info[i].price);
        if (info[i].price<lowest) {
            lowest=info[i].price;
        } else if (info[i].price==lowest) {
            count2++;
        }
        printf("<1> for <fragile> else <0> Type:");
        scanf("%d", &info[i].type);
        if (info[i].type==1) {
            count3++;
        }
    }
    percentage=(count3/4)*100;
    printf("\n%.2f percents of products are fragile", percentage);
    printf("\n%d of products were delivered in 2010", count1);
    printf("\n%d of products with the lowest unit price", count2);
}
