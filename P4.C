//write a sum of num
#include<stdio.h>
#include<conio.h>
void main(){
	int k,h,n,arrm=0;
	clrscr();
	printf("enter a new numbr-->",n);
	scanf("%d",&n);
	h=n;

	while(n>0){
		k=n%10;
		arrm=(k*k*k)+arrm;
		n=n/10;
		}
	if(h==arrm)
		printf("this num is armstrong-->%d",n);
	else
		printf("this num is not arrm-->%d",n);
getch();
}





