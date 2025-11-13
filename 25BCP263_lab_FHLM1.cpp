#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpr=NULL;
    char ch;
    int v=0,l=0,a=0,c=0,s=0;
    if((fpr=fopen("my1stfl.dat","r"))==NULL)
    {
        printf("File cant be opened.");
        exit(0);
    }
    ch=fgetc(fpr);

    while(ch!=EOF)
    {
        c++;
        if(ch=='\n')
            {l++;a++;c--;}

        if(ch==' ')
        {
            s++;
            a++;
        }
        ch=fgetc(fpr);
        if(ch>='a'&&ch<='z')
        {
            v++;
        }
        if(ch>='A'&&ch<='Z')
        {
            v++;
        }
    }
    printf("Lines=%d\nWords=%d\nCharacters=%d\nSpaces=%d\nVowels=%d",l+1,a+1,c,s,v);
    fclose(fpr);
    printf("\nThe data has been successfully written.\n");
}
