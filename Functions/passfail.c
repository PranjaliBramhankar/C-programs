#include<conio.h>
#include<stdio.h>
int calculate_result(int subject)
    {
        if(subject<40)
        {
            printf("fail\n");
        }
        else
        {
            printf("pass\n");
        }
        
    }
    int division()
    {
        
    }
void main()
{
    int marks=100,phy,chem,maths,sci,bio;
    printf("Enter marks for subjects phy chem maths sci bio");
    scanf("%d%d%d%d%d", &phy, &chem, &maths, &sci, &bio);  

    calculate_result(phy);
    calculate_result(chem);
    calculate_result(maths);
    calculate_result(sci);
    calculate_result(bio);
}
