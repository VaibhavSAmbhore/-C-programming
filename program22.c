// checkeven number

#include<stdio.h>
#include<stdbool.h>
 bool CheckEven(int);
 
int main()
{
 int ino=0;
 bool bret= false;
 printf("enter a number\n");
 scanf("%d",&ino);
 bret = CheckEven(ino);
 
  if (bret == true)
  {
   printf("number is even number \n");
   }
   else
   {
     printf("number is not even");
	 }
	 return 0;
	 }
 bool CheckEven(int ino)
 {
   if ((ino%2)==0)
   {
     return true;
	 }
	 else
	 {
	  return false;
	  }
	  
	  }
 