


#include <stdio.h>

#include<stdbool.h>
 typedef unsigned int UINT;
 
 bool CheckBit (UINT ino,UINT iPos)
 {
	 UINT iMask =0x00000001;
	UINT iResult =0;
	iMask= iMask<<(iPos -1);
	 iResult =ino& iMask;
	 if(iResult==iMask)
	 {
		 return true;
	 }
      else
	  {
        return false;
	  }
	  
	 
 }
 

  
int main()
{
 UINT iValue=0;
 int iBit=0;
 bool bret =false;
 printf("enter number\n");
 scanf("%d",&iValue);
 printf("enter position \n");
 scanf("%d",&iBit);
 bret= CheckBit(iValue,iBit);
 
 if(bret== true)
 {
 printf(" bit is ON\n");
 }
 else
 {
   printf("bit is OFF\n");
 }   



  return 0;
 } 