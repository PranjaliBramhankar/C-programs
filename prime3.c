#include <stdio.h> 
void main() {
  int  i,j,x,y;
  printf("enter any two numbers");
  scanf("%d %d",&i ,&j);


  for (x= i+1; x<=j; x++)            
  {
    for(y=2; y<x;y++)
    {
          if (x % y == 0) 
          {
            break;
          }
    }
      if(y==x)
      {
        printf("%d\n",x);
      }
  }
  
}