#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char temp[50],temp1[50],str[50]="!one,two,three?$";
	int ctr,ctr1=0;
	clrscr();
	for(ctr=0;str[ctr]!='\0';ctr++)
	{
		if(isalpha(str[ctr]))
		{
			temp[ctr1]=str[ctr];
			ctr1++;
		}
	}
	temp[ctr1]='\0';
	strrev(temp);
	ctr1=0;
	for(ctr=0;str[ctr]!='\0';ctr++)
	{
		if(isalpha(str[ctr]))
		{
			str[ctr]=temp[ctr1];
			ctr1++;
		}
	}
	printf("%s",str);


	getch();
	return 0;
}