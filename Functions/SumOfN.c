#include <conio.h>
#include <stdio.h>
int sum(int n)
{
    int i;
    int sum = 0;
    printf("Enter any no");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of first %d natural numbers %d\n", n, sum);
}
int main()
{
    sum(10);
    return 0;
}