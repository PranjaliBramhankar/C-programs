#include <stdio.h>
#include <conio.h>
int EvenNaturalNo(int a)
{

    if (a % 2 == 0)
    {

        return 1;
    }

    else
    {

        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", EvenNaturalNo(n));
}