
#include<stdio.h>
int Addition (int);
int main()
{
 int ivalue=0, iret=0 ;
 printf("enter a number \n");
 scanf("%d",&ivalue);
 iret =  Addition(ivalue);
 printf("addition of iDigit is :%d\n",iret);
 return 0;
 }
 
 int Addition(int ino)
 {
   int iDigit = 0;
   int iSum =0;
   if (ino <0)
   {
	   
	   ino = - ino;
   }
   
   while(ino!=0)
   {
     iDigit= ino % 10 ;
	 iSum = iSum + iDigit;
	 ino = ino/ 10;
	 }
	 return iSum;
	} 