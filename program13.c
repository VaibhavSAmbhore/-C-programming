#include<stdio.h>

 void Display(int ino)
 {
   int i=0; 
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