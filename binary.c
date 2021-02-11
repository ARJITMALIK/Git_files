#include<stdio.h>

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,first=0,a,mid,last;
    printf("Input the number you want to search: ");
    scanf("%d" , &a);
    last = a-1;
    mid=(first+last)/2;

    while(first<=mid)
    {
        
        if(arr[mid]<a)
        {
            first=mid+1;
        }
        else if(arr[mid]==a)
        {
           printf("Found!! at index %d" , mid);
           break;
        }
        else
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }
    
    return 0;
}