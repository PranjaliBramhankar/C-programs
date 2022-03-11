#include <conio.h>
#include <stdio.h>
int sqsum(int n)
{

    int i;
    int sum = 0;
    printf("Enter any no");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = i * i + sum;
        i++;
    }
    printf("Sum of squares offirst %d natural numbers = %d\n", n, sum);
}

int main()
{
    sqsum(10);
    return 0;
}