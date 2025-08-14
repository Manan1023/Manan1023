#include<stdio.h> //header file
#include<conio.h>
void main()
{ /*Program To Add 2 Nos.*/
	int a,b,c; //declaring variables
	clrscr();
	printf(" Enter 2 Nos. ");
	scanf("%d %d",&a,&b);   //input values
	c = a + b;              //Add 2 Nos.
	printf("%d + %d = %d\n",a,b,c);
	getch();
}
