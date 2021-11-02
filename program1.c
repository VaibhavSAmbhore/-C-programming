// addition of two number  number accept from user for user
 #include<stdio.h>
 
 int Addition (int ino1, int ino2)
 {
	  return ino1+ ino2;
 }
 
 int main()
 {
	 int x,y,z;
	 
	 printf("enter first number\n");
	 scanf("%d",&x);
	 
	 printf("enter second number\n");
	 scanf("%d",&y);
	 
	 z = Addition (x,y);
	 printf("Addition of two number is :%d",z);
	 
	 return 0;
 }
 
	