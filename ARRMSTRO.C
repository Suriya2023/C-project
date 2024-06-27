#include<stdio.h>
#include<conio.h>
void main()
{
	int n,h,k,arm=0;
	clrscr();
	printf("\n \n Follow This Stament");
	printf("\n Enter  A New Number:-->",n);
	scanf("\n %d",&n);
	h=n;
	//aply for this statment while if and else
	while(n>0){
		k=n%10;
		arm=(k*k*k)+arm;
		n=n/10;
		}
	if(h==arm)
		printf("\n This Number is Armstrong:-->%d",h);
	else
		printf("\n This Number Is Not Armstront:-->%d",h);
getch();

}

