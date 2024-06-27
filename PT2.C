#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,n,space;

	clrscr();
	printf("\n enter n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){

	for(space=1;space<=(n-i);space++){
	printf("");

	}
	for(j=1;j<=i;j++){
	printf("*");
	}
	printf("\n");
}
		    getch();
}


