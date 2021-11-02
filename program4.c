//accept numebr form user and display numebr of * of screen
# include<stdio.h>
  void Display(int ino)
{
  int iCnt=0;
  
 for( iCnt=1; iCnt <= ino; iCnt++)
{
  printf("#\t");
}  
}
 int main()
 {
   int iValue=0;
   printf("enter a numebr\n");
   scanf("%d",&iValue);
   Display (iValue);
   return 0;
 }