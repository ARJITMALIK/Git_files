#include<stdio.h>
#include<process.h>
#include<stdlib.h>

void fileexit();

void main()
{
    char c,ch;
    FILE *f1,*f2;
    f1=fopen("abc.txt","w");
    f2=fopen("lovi.txt" , "a");

    if(f1==NULL && f2==NULL)
    {
        printf("File doesn't exists.\nexiting the program");
    }
    printf("Enter text : \n");
    for(int i=0;c!=EOF;i++)
    {
        c=getchar();
        putc(c,f1);
    }
    for(int j=0;ch!=EOF;j++)
    {
        ch=getc(f1);
        putc(ch,f2);
    }
   
    fclose(f1);
    fclose(f2);

}
