#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("\nenter three numbers");
    scanf("%d%d%d", &a,&b,&c);
    avg= (a+b+c)/3;
    printf("Average of Three no is %f",avg);

}