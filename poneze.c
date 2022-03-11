#include <stdio.h>  
int main()  
{  
    int x;
    printf("Enter the no \n");
    scanf("%d", &x);
    if(x>0)
    {
        printf("%d is a positive number",x);
    }
    else if(x< 0)
    {
        printf("%d Number is NEGATIVE",x);
    }
    else
    {
        printf("Number is ZERO");
    }

    return 0;
}
    
