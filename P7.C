#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();

	printf("Enter a revers number");
	scanf("%d",&a);

	while(a>0){
		b=a%10;
		printf("%d \n",b);
		a=a/10;
	}

getch();
