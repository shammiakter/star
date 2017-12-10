//Hollow triangle left
#include<stdio.h>
int main()
{
    int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {

            if(j==1 || j==i || i==r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

