#include<stdio.h>
#include<conio.h>
	void main()
	{
		int i;
		clrscr();
		printf("\n Write A new Odd Even Number:-->;",i);
		for (i=1;i<=10;i++){
			if(i%2==1){
			printf("\n This Number is odd:--->;%d",i);
				}
			if(i%2==0){
			printf("/n This Number IS even :--->;%d",i);
				}
				}
				getch();
}