#include<stdio.h>

int main()
{
    FILE *fpw=NULL;
    char ch;
    char fn[50];
    gets(fn);
    printf("Enter the details at the end put #.\n");
    fpw=fopen(fn,"a");
    ch=fgetc(stdin);
    while(ch!='$')
    {
        fputc(ch,fpw);
        ch=fgetc(stdin);
    }
    fclose(fpw);
    printf("\nThe data has been successfully written.\n");
}
