// factoeial
#include <stdio.h>
typedef unsigned long int UINT;

 UINT factorial (int);
 
 int main()
 {
    int ino =0;
   UINT iret=0;
   printf("enter a numeber\n");
   scanf("%d",&ino);
   iret = factorial(ino);
   printf("factorial is :%d\n",iret);
   return 0;
   }
   
   
   UINT factorial(int ino)
   {
     UINT iFact=1;
	 int iCnt=0;
	
	 
	 for(iCnt=1; iCnt <= ino; iCnt++)
	 {
	   iFact = iFact * iCnt;
     }
	 return iFact;
 }
	