
#include<stdio.h>

void Display();

int main()
{
  Display();
  return 0;
  }
  void Display()
  {
    int ino = 7521;
	int iDigit=0;
	while(ino !=0)
	{
	  iDigit = ino % 10;
	  printf("%d\n",iDigit);
	  ino = ino /10;
	 }
  }
	  