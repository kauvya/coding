import java.io.*;
import java.util.*;
class stringOp
{
public static void main(String args[])
{
int i,vowel=0,cons=0,sp=0;
char letter;
Scanner sc = new Scanner(System.in);
String s=sc.nextLine();
String words[]=s.split(" ");
int len=words.length;
int nos=len-1;
s=s.replaceAll("\\s+","");
int leng=s.length();
for(i=0;i<leng;i++)
{
letter=s.charAt(i);
  if (Character.isLetter(letter)||Character.isDigit(letter))
{
if(letter=='a' || letter=='A' || letter=='e' || letter=='E' ||
        letter=='i' || letter=='I' || letter=='o' || letter=='O' ||
        letter=='u' || letter=='U')
        {
          vowel++ ;
        }
        else
        {
          cons++;
        }
}
else
{
sp++;
}}
System.out.println("NUMBER OF WORDS \t"+len+"\nNUMBER OF SPACES\t"+nos+"\nNUMBER OF VOWELS\t"+vowel+"\nNUMBER OF CONSONANTS    "+cons

+"\nNUMBER OF SPECIAL CHARACTERS\t"+sp);
}}
Contact GitHub API Training Shop Blog About
© 2016 GitHub, Inc. Terms Privacy Security Status Help
