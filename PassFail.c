#include<conio.h>
#include<stdio.h>
void main()
{
    int marks=100,phy,chem,maths,sci,bio;
    printf("Enter marks for subjects phy chem maths sci bio");
    scanf("%d%d%d%d%d", &phy, &chem, &maths, &sci, &bio);

    if(phy<40)
    {
        printf("Phy fail\n");
    }
    else
    {
        printf("Phy pass\n");
    }

    if(chem<40)
    {
        printf("chem fail\n");
    }
    else
    {
        printf("chem pass\n");
    }

    if(maths<40)
    {
        printf("maths fail\n");
    }
    else
    {
        printf("maths pass\n");
    }

    if(sci<40)
    {
        printf("sci fail\n");
    }
    else
    {
        printf("sci pass\n");
    }

    if(bio<40)
    {
        printf("bio fail\n");
    }
    else
    {
        printf("bio pass\n");
    }

}