#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    int i;
    int sum=0;
    printf("Enter any no");
    scanf("%d",&n);
 

    do
    {
       sum=i*i*i+sum;
       i++; 
      printf("cube  of first %d natural numbers = %d\n", n, sum);
        
    }while(i<=n);
    
}