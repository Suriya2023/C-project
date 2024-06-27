//bit wise oprator
#include<stdio.h>
#include<conio.h>
	void main()
{
	int a,b;
	clrscr();
	printf("enter a value of :");
	scanf("%d",&a);
	printf("Enter a value of: ");
	scanf("%d",&b);

	//and or xor
	printf("\n And output:=%d",a&b);
	printf("\nor output:=%d",a|b);
	printf("\nxor output:=%d",a^b);
	getch();
	}