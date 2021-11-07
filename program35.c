

#include<stdio.h>
int CountEven(int);
int main()
{
 int ivalue=0; 
 int iret=0;
 printf("enter a number\n");
 scanf("%d",&ivalue);
 iret = CountEven(ivalue);
 printf("even number is :%d\n",iret);
 return 0;
 }
 int CountEven(int ino)
 {
   int iSum=0;
   int iDigit =0;
   if (ino<0)
 {
     ino = -ino;
 }
	while (ino !=0)
	{ 
	 iDigit = ino %10;
	 if ((iDigit%2)==0)
	 {
	   iSum = iSum + iDigit;
	   
	  }
	  
	   ino = ino /10;
	  }
	  return iSum ;
	  }
	  