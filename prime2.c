#include <stdio.h> 
void main() {
  int  i,j;
  printf("prime numbers under 100 are \n");

  for (i = 2; i <= 100; i++)            
  {
    for(j=2; j<=i;j++)
    {
          if (i % j == 0) 
          {
            break;
          }
    }
      if(i==j)
      {
        printf("%d\n",i);
      }
  }
  
}