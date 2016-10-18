#include<stdio.h>
#include<conio.h>
int strlength(char *s)
{
	int len;
	for(len=0; s[len]!='\0'; len++);
	return len;
}
char* strcopy(char *s2,char * s1)
{
	int ctr;
	for(ctr=0;s1[ctr]!='\0';ctr++)
		s2[ctr]=s1[ctr];
	s2[ctr]=NULL;
	return s2;
}
char* strcate(char *s1,char*s2)
{
	int ctr,ctr1,len;
	len=strlength(s1);
	for(ctr=len,ctr1=0; s2[ctr1]!='\0';ctr++,ctr1++)
		s1[ctr]=s2[ctr1];
	s1[ctr]=NULL;
	return s1;
}
char* reverse(char *s)
{
	int len,ctr,ctr1;
	char temp;
	len=strlength(s);
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
	char *cpy,*cte,*rev;
	int len;
	char str[20]="Hello";
	char str1[]="HelLo";
	char str3[20];
	clrscr();
	len = strlength(str);
	cpy = strcopy(str3,str);
	cte = strcate(str,str1);
	rev = reverse("hello");
	printf("\n Length %d \n Copied string %s \n Concatenated string %s \n Reversed string %s",len,cpy,cte,rev);
	getch();
	return 0;
	}
