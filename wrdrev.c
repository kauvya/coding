#include<stdio.h>
#include<conio.h>
#include<string.h>
char* reverse(char *s)
{
	int len,ctr,ctr1;
	char temp;
	len=strlen(s);
	for(ctr=len-1,ctr1=0;ctr>=len/2;ctr--,ctr1++)
	{
		  temp=s[ctr];
		  s[ctr]=s[ctr1];
		  s[ctr1]=temp;
	}

	return s;
}
int main()
{
	int ctr,ctr1;
	char str[50] = "This is a test sentence";
	char str1[50];
	char *token;
	clrscr();
	str1[0] = NULL;
	token = strtok(str," ");

	while (token != NULL)
	{
		reverse(token);
		strcat(strcat(str1,token)," ");
		token = strtok(NULL," ");
	}
	printf("%s",str1);
	printf("\n%s", strrev(str1));
	getch();
	return 0;
}
