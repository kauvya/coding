#include<stdio.h>
#include<conio.h>
void main()
{
 int arr_1[5],i,j,temp,center,num,position;
clrscr();
printf("\n Enter the elements:");
for(i=0;i<5;i++)
 scanf("\n %d",&arr_1[i]);
for(i=0;i<5;i++)
{
   for(j=0;j<5;j++)
{
   if(arr_1[i] < arr_1[j])
{
   temp=arr_1[j];
  arr_1[i]=arr_1[j];
  arr_1[i]=temp;
 }
}
}
for(i=0;i<5;i++)
    printf("\n %d",arr_1[i]);
center=arr_1[5/2];
position=(0+(5-1))/2;
printf("\n Enter the elements to be searched");
scanf("\n %d",&num);
if(num < center)
{
  for(i=0;i<=position;i++)
{
  if(num == arr_1[i])
{
   printf("\n %d The number is found",num);
printf("\n position %d",i);
}
}
}
else
{
for(int i=position;i<5;i++)
{
if(num == arr_1[i])
{
printf("\n %d The number is found",num);
printf("\n Position %d",i);
}
}
}
getch();
}


