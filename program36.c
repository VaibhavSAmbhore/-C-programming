

#include<stdio.h>
int Reverser(int);
int main()
{
 int ivalue=0; 
 int iret=0;
 printf("enter a number\n");
 scanf("%d",&ivalue);
 iret = Reverser(ivalue);
 printf("even number is :%d\n",iret);
 return 0;
 }
 int Reverser(int ino)
 {
   int iRev=0;
   int iDigit =0;
   if (ino<0)
 {
     ino = -ino;
 }
	while (ino !=0)
	{ 
	 iDigit = ino %10;
	
	iRev =( iRev * 10) + iDigit;
	 ino = ino /10;
	 }
	  return iRev ;
	  }
	  