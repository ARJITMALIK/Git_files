#include<stdio.h>
int main()
{
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("  ");
        }
        for(k=i;k<=i;k++)
        {
            for(m=1;m<=k;m++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }        
        
return 0;
}