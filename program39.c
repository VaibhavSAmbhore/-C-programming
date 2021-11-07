#include<stdio.h>
#include<stdbool.h>
int reverse(int);
 bool Checkpallindrome(int);

int main()
{
  int ivalue=0;
  bool bret= false;
  printf(" enter a number\n");
  scanf("%d",&ivalue);
  bret = Checkpallindrome(ivalue);
  if (bret == true )
  {
    printf("number is pallindrone\n");
  }
  else
  {
    printf("number is not pallindrone\n");
	}
	return 0;
	}
	
	bool Checkpallindrome(int iInput)
	{
	  int iNumber=0;
	  iNumber = reverse(iInput);
	  if (iNumber == iInput)
	  {return true;}
	  else{return false;}
	  }
	  
	  int reverse( int ino)
	  {
	   int iDigit=0;
	 int   irev = 0;
	   while( ino != 0)
	   {
	     int iDigit = ino %10;
         irev = (irev *10)+ iDigit ;
		 ino = ino /10;
		 }
		 return irev;
		 }
		 