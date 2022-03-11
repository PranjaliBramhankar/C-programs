#include <stdio.h>  
int main()
{
    int num,i,count = 0;
    printf("Enter the number:-");
    scanf("%d",&num);
    printf("The factors of %d are:", num);
    for(i = 2;i<=num/2; i++)
        {
            if(num % i == 0)
        {
            count++;
            if(num%2)
            printf("\n%d" ,i);
        }
        }
}        