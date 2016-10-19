#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[]="abbccc",str1[]="abbccc";
int ctr,ctr1,count[]={0,0,0,0,0,0};
clrscr();
for(ctr=0;ctr<strlen(str);ctr++)
{
 for(ctr1=0;ctr1<strlen(str);ctr1++)
 {
  if( str[ctr]==str1[ctr1])
  {
    count[ctr]++;
    str1[ctr1]=NULL;
  }
  printf("%s-%d",str[ctr],count[ctr]);
 }
}
getch();
return 0;
}
