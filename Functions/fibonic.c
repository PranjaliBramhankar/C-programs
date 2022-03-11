#include<stdio.h>

int fab(int b)
{
    int first=0, second=1, c, sum=first + second , temp;    
    while(b>=sum)
    {   
        if(sum==b)
        {
            return 1;  
        } 
        sum=first + second; 
        temp=second;
        second=sum;
        first=temp;
    }
    return 0;
}

int main()
{
    int a,result;
    printf("Enter the num :");
    scanf("%d",&a);
    result=fab(a);
    printf("%d", result);

}

