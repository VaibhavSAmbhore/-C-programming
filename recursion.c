
// using recursion calculated the power of number
  # include<stdio.h>
  int PowerR( int x, int y)
  {
	  static int iMult=1;
	  if( y !=0)
	  {
		 iMult = iMult * x;
		 y--;
		 PowerR(x,y);// recursive call
	  }
	  return iMult;
  }

 int main()
 {
	 int no1=0, no2=0, iret=0;
	 
	 printf("enter a base\n");
	 scanf("%d",& no1);
	 
	 printf("enter a power\n");
	 scanf("%d",&no2);
	 
	 iret = PowerR (no1,no2);
	 printf(" result is :%d\n",iret);
	 
	 return 0;
 }