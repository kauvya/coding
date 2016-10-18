#include<stdio.h>
#include<conio.h>
int strlength(char *str)
{
   int len;
   for(len=0;str[len]!='\0';++len);
   return len;
}
 char * strcopy(char *s1,char *s2)
{
  int ctr;
  for(ctr=0;s1[ctr]!='\0';ctr++)
     s2=[ctr]=s1[ctr];
  return s2;
}
char *strcate(char *s1,char *s2)
{
  int ctr,ctr1,len;
  len=strtlength(s1);
  for(ctr=len,ctr1=0;ctr1!='\0';ctr++,ctr1++)
     s1[ctr]=s2[ctr];
  s1[ct r]='\0';
  return s1;
}
char *reverse(char *s)
{
 int len;
 char *s1;
 len=strlength(s);
 for(ctr=len;ctr>=1;ctr--)
    s1[ctr]=s[ctr];
 return s1;

}

int main()

{
   char *st="adbde";
   clrscr();
   strlength(st);
   getch();
   return 0;
}
}
