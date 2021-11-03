

// find factor

#include<stdio.h>
 
 
 int DisplayFactor (int);
 
 int main()
 {
   int ivalue=0, iret=0;
   printf("enter a number\n");
   scanf("%d",&ivalue);
   iret = DisplayFactor(ivalue);
   return 0;
   }
   
   int DisplayFactor (int ino)
   {
     int i=0;
	if(ino < o)
	{
		ino = - ino;
	}
	
	 for (i=1; i<=ino; i++)
	 {
	   if((ino %i )==0)
	   {
	     printf("%d\n",i);
		 }
	 }
   }