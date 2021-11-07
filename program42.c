#include<stdio.h>
#include<stdbool.h>

  int DisplayTable(int);
  int main()
  
  {
    int ivalue=0, iret=0;
	printf("enter a number\n");
	scanf("%d",&ivalue);
	iret = DisplayTable(ivalue);
	return 0;
	}
	
	int DisplayTable(int ino)
	{
	 int iCnt =0;
	 if (ino < 0)
	  {
	  ino = - ino;
	  }
	  for (iCnt=1; iCnt <=10; iCnt++)
	  {
	   printf("%d\n",ino *iCnt);
	  }
	}
	 