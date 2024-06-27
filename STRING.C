#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char str1[10]="hellow";   char str2[10]="world";
	char str3[10]; clrscr();
printf("output -the string length,: %d\n", strlen(str1));
printf("String reverse: %s\n",strrev(str2));
printf("output string as fer concatenation: %s\n" ,strcat(str1,str2)) ;
printf("outout string print the :\ str%s",str3,strcpy(str3,str1));
getch();
}