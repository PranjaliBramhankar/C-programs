#include<stdio.h>
void main()
{
    int n,i=1,table;
    printf("Enter a num :");
    scanf("%d", &n);

    while(i<=10)
    {

        table=n*i;
        i++;
         printf("%d \n",table);

    }
}