#include <stdio.h>
#include <conio.h>
int EvenNaturalNo(int a)
{

    printf("Enter Any Number \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is a even number", a);
    }

    else
    {
        printf("%d is odd number", a);
    }
}
int main()
{
    EvenNaturalNo(20);
    return 0;
}