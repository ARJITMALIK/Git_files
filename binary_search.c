#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},mid,first,last,search;
    first=0;
    last =9;
    mid=(first+last)/2;
    printf("Enter the value to search : ");
    scanf("%d" , &search);
    
    while(first<=last)
    {
        if(a[mid]<search)
        {
            first = mid +1;
        }
        else if(a[mid]==search)
        {
            printf("Element found at index %d.",(mid));
            break;
        }
        else
        {
            last=mid -1;
        }
        mid=(first+last)/2;
        if(first>last)
        {
            printf("Not found.");
        }
    }

    return 0;
}