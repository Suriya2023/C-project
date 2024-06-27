#include<stdio.h>
#include<conio.h>
void main(){
	int i,len,count=0;
	char str[100];
	clrscr();

	printf("enter a any string");
   gets(str);
   //canf("%c",&str);

	len= strlen(str);

	print("len %d \n",len);

	//main program in here

	for(i=1;i<=len;i++){

		printf("%c \n",str[i]);
		}
	if(str[i]!=str[len-i-1]){
		count=1;
 break;}
if(count==0)
	printf("his pelingdrom string %s",str);

	else
		printf("other wise its not peling drom %s",str);
getch();
}



