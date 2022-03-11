#include <stdio.h>
#include <conio.h>
float circumference_Of_circle(float radius)
{
    float circumference;
    circumference = 2 * 3.14 * radius * radius;
    return circumference;
}
int main()
{
    float result, n;
    result = circumference_Of_circle(2);
    printf("circumference of circle is %f", result);
}
