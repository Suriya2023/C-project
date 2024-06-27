//writeb a program an positive or nagative number
#include<stdio.h>
#include<conio.h>
	void main()
	{  int  a; clrscr();
		printf("Writen an integers a number");
		scanf("%d",&a);
	//writedown a positive or nagative otherwise zero
		if(a>0)	{
			printf("%d is positive number",a);
		}
		else  if (a<0){
			printf("%d is nagative number",a);
		}
		else {
			printf("%d is zero ",a);
		}
		getch();
}



