#include<stdio.h>
#include<conio.h>
void main()
{
    int lenght,Height,width ,volume;

    printf("Enter lenght");

    scanf("%d", &lenght);

    printf("Enter Height");

    scanf("%d", &Height);
    
    printf("Enter width");

     scanf("%d", &width);

    volume=lenght*width*Height;

    printf("Volume of cuboid is %d",volume);

}