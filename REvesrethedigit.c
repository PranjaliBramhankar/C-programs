#include<stdio.h>  
 int main()    
{    
int n,m,reverse=0;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n!=0)    
{    
m=n%10;
reverse=reverse*10+m; 
n=n/10;
}    
printf("%d",reverse);    
return 0; 
}