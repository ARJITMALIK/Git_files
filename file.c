#include<stdio.h>
#include<process.h>
#include<stdlib.h>
//#define EOF -1
void main()
{
    FILE *f1;
    char ch;
    f1=fopen("lovi.txt" , "w");
    if(f1==NULL)
    {
        printf("Memory not allocated, exiting the program.");
        exit(0);
    }
    for(int i=0;ch!=EOF;i++)
    {
        ch=getchar();
        putc(ch,f1);
    }
    fclose(f1);

}