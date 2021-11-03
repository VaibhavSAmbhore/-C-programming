

#include<stdio.h>
 void Display();
 
 int main()
 {
  int ivalue=0;
  printf("enter a numebr\n");
  scanf("%d",&ivalue);
  Display(ivalue);
  return 0;
  }
  
   void Display(int  ino)
   {
     int i=0;
	 for (i=ino; i >=1 ;--i)
	 {
	   printf("%d\n",i);
	 }
   }
	 
	   