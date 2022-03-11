#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,l;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a*b;l++)
    if(l%a==0 && l%b==0)
    break;
    printf("LCM is %d",l);
    
}
