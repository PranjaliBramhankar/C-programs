#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
     int i=0;
    printf("Enter a no\n");
    scanf("%d",&n);

    while(n>0)
    {
        n=n/10;
        i++;

    }

    printf("%d",i);

}