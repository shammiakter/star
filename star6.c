//Rhombus Triangle
#include<stdio.h>
int main()
{
    int n, c, k, s = 1;
  printf("Enter number of rows: ");
    scanf("%d",&n);
  s= n - 1;

  for (k = 1; k<=n; k++)
  {
    for (c = 1; c<=s; c++)
      printf(" ");

    s--;

    for (c = 1; c<= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  s = 1;

  for (k = 1; k<= n - 1; k++)
  {
    for (c = 1; c<= s; c++)
      printf(" ");

    s++;

    for (c = 1 ; c<= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }
  return 0;
}

