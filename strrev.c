#include<stdio.h>
//#include<string.h>
int main()
{
    char str[10];
    char temp='0';
    int i,j,c,len=0,mid=0;
    printf("Enter the string: ");
    scanf("%s" , str);
    for(j=0;str[j]!='\0';j++)
    {
        len++;
    }
    mid=len/2;
    for(i=0;i<mid;i++)
    {
        temp=str[i];
        str[i]=str[len-i];
        str[len-i]=temp;
    }
    str[len]='\0';
    printf("Reversed string is: ");
    // for(c=0;str[c]!='\0';c++)
    // {
    //     printf("%c" , str[c]);
    // }
    //puts(str);
    printf("%s" , str);
    return 0;
    
}
