#include <stdio.h>
#include <conio.h>
void isEven(int n)
{
    int a = 1;
    printf("First 10 Even numbers are\n");

    while (a <= n)
    {
        if (a % 2 == 0)
        {
            printf("\n%d", a);
        }

        a++;
    }
}
void main()
{
    isEven(20);
}