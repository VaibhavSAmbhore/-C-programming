// factoeial
#include <stdio.h>
 int factorial (int);
 
 int main()
 {
   int ino =0;
   int iret=0;
   printf("enter a numeber\n");
   scanf("%d",&ino);
   iret = factorial(ino);
   printf("factorial is :%d\n",iret);
   return 0;
   }
   
   
   int factorial(int ino)
   {
     int iFact=1;
	 int iCnt=0;
	 if (ino !=0)
	 {
		 ino = -ino;
	 }
	 if (ino =0)
	 {
		 return -1;
	 }
	 for(iCnt=1; iCnt <= ino; iCnt++)
	 {
	   iFact = iFact * iCnt;
     }
	 return iFact;
	 }
	