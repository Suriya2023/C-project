#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
 {
 char str1[20];
 char str2[20];
 int value;
	clrscr();
	printf("Enter the First String:");
	scanf("%s", str1);
	printf("Enter the Second String: ");
	scanf("%s", str2);
	//comparing both the string using strcmp () fuction
	value = strcmp(str1,str2);
		if(value==0)
printf("strings are same ");
	else
		printf("strings are not same");
	getch();
}