#include<stdio.h>
#include<conio.h>
void main(){
	int n,a=0,b=1,c,s;
	clrscr();

	printf("Enter A number");
	scanf("%d",&n);

	printf("Thet is fibonacci series");

	for(s=1;s<=n;s++){
		c=a+b;
		printf("%d\n",a);
		a=b;
		b=c;
	}
getch();
}



