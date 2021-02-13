#include<stdio.h>

int main()
{
    int i,j;
    int ar[2][2];
    int ab[2][2];
    int r[2][2];
    printf("Enter 1st 2 X 2 matrix characters: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" , &ar[i][j]);
        }
    }
   
    printf("Enter 2nd 2 X 2 matrix characters: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" , &ab[i][j]);
        }
    }

   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             r[i][j] = ar[i][j] - ab[i][j];
        }
    }
    
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d " , r[i][j]);
        }
        printf("\n");
    }

   return 0;
}