#include<stdio.h>
#include<stdbool.h>
 bool checkPerfect(int);
 
int main()
{
  int ivalue=0;
  int bret=0;
  printf("enter a number\n");
  scanf("%d",&ivalue);
  bret = checkPerfect(ivalue);
  if (bret ==true)
  {
   printf("number is perfect \n");
   }
   else
   {
     printf("numeber is not perfect\n");
	 }
	 return 0;
	 }
  bool checkPerfect (int inumber)
  {
    int iSum=0,iCnt=0;
	for (iCnt=1; iCnt <= inumber;iCnt++)
	{
	 if(( inumber %iCnt ) ==0)
	 {
	   iSum = iSum + iCnt;
	  }
	}
	  if (iSum == inumber)
	  {return true ;}
	  else
	  {return false;}
	
  }