#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int i=1;
    int sum=0;
    printf("Enter any no");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2!=0) 
        {
             sum=sum+i;
           
        }   
         i++;
        
    }
    printf("\n%d", sum);
    
     
} 