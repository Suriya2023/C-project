#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter a First value:");
	scanf("%d",&a);
	printf("Enter a Second Value:");
	scanf("%d",&b);
	//and or xor
	printf("\nand output:= %d",a&b);
	printf("\nor output:= %d",a|b);
	printf("\nxor output:= %d",a^b);
	getch();
}