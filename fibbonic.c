#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    printf("Enter a number: "); 
    scanf("%d",&n);
    i=1;
    a=0;
    b=1;
    while(i<=n)
    {
       
        c = a + b;
        a = b;
        b = c;
        i++;
    }
     printf("%d",a);
    return 0;
}