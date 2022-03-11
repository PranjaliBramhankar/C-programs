#include <stdio.h> 

void main() 
{
  int n, i,j, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  for (i = n; i >0; i++)      
  {
    c=0;
    for(j=1;j<=i;j++)
    {
      if (i % j == 0) 
         c++;
    }
    if (c == 2) {
    printf("%d",i);
    break;
  }
    
}
}