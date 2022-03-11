#include<stdio.h>
#include<conio.h>
float area_Of_circle(float radius)
{   
    float area;
    area = 3.14*radius*radius;
    return area;

}
int main()
{   
    float result;
    result = area_Of_circle(2);   
    printf("Area of circle is %f",result);   
 
}
