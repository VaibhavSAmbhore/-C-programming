#include<stdio.h>

 void Display(int ino)
 {
   int i=0; 
   if(ino ==0)
   {
	   printf("your enterd number is 0\n");
	   return ;
   }
   if(ino < 0)
   { 
      ino = - ino;
   }
   
   for(i=1;i<= ino;i++)
   {
	    printf("%d\n",i);
   }
 }



 int main()
 {
   int ivalue=0;
   
   printf("enter a numeber\n");
   scanf("%d",&ivalue);
   Display(ivalue);
   return 0;
   }