#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void main()
{
    char c;
    FILE *f1;
    f1=fopen("abc.txt" , "a");
    if(f1==NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }
    printf("Enter text : \n");
    for(int i=0;c!=EOF;i++)
    {
        c=getchar();
        putc(c,f1);
    }
    fclose(f1);
}