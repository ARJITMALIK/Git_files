#include<stdio.h>

int main()
{
    int ar[5]={5,2,7,90,45};
    int swap,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=swap;
            }
        }
    }
    printf("Sorted array in ascending order.\n");
    for(i=0;i<5;i++)
    {
        printf("%d " , ar[i]);
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(ar[j]<ar[j+1])
            {
                swap=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=swap;
            }
        }
    }
    printf("\nSorted array in descending order.\n");
    for(i=0;i<5;i++)
    {
        printf("%d " , ar[i]);
    }
    print("Test change");
    return 0;
}
