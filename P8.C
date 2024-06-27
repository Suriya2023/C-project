
#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,s;
	clrscr();

	printf("Enter pattern draw:-->\n");
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");

	for(i=1;i<=5;i++){
		   for(j=1;j>=i;j--);
			printf("\n");
		   for(s=1;s<=i;s++);
			printf("%d \n ",i);
		   }
	getch();
	}