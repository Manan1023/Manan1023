#include<stdio.h>

struct stdinfo
{
    int rlno;
    char name[50];
    char cname[30];
    char submjr[20];
    char submnr[20];
};

int main()
{
    int n;
    void display(struct stdinfo);
    void displayn(struct stdinfo);
    stdinfo s[10];
    for(int i=0;i<3;i++)
    {
        printf("Enter roll number:");
        scanf("%d",&s[i].rlno);
        fflush(stdin);
        printf("Enter name:");
        gets(s[i].name);
        printf("Enter course name:");
        gets(s[i].cname);
        printf("Enter major subject name:");
        gets(s[i].submjr);
        printf("Enter minor subject name:");
        gets(s[i].submnr);
    }
    printf("\nYour filed details are:\n");
    for (int i=0;i<3;i++)
    {
        printf("Student %d\n",i+1);
        displayn(s[i]);
    }
    for(int i=0;;i++)
    {

        printf("\nEnter Roll Number:");
        scanf("%d",&n);
        fflush(stdin);
        if(n==0){
            break;}
        else
        {
            for(int j=0;j<10;j++)
            {
                if(n==s[j].rlno)
                {
                    display(s[j]);
                }
            }
        }
    }
    return 0;
}

void display(stdinfo s)
{
    printf("Roll number:%d\n",s.rlno);
    printf("Name:%s\n",s.name);
    printf("Course name:%s\n",s.cname);
    printf("Major subject:%s\n",s.submjr);
    printf("Minor subject:%s\n",s.submnr);
}
void displayn(stdinfo s)
{
    printf("Name:%s\n",s.name);
}
