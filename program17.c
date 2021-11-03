// Addition of Digit

#include<stdio.h>
   
   int Addition(int );
  
  int main()
  {
    int ivalue=0, iret=0;
	printf("enter a number \n");
	scanf("%d",&ivalue);
	iret = Addition(ivalue);
	printf(" addition of two numebr is :%d\n", iret);
	return 0;
	}
	
	int Addition(int ivalue)
{
	  int iSum=0;
	  int i=0;
	  for (i=1 ; i<=ivalue; i++)
    {
	    iSum = iSum + i;
	}
		return iSum;
}