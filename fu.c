#include <stdio.h>
void ayush(int a)
{
   printf("%d ", a);
}
int main()
{
   char arr[10]={0};
   for (int x=0; x<10; x++)
   {
       ayush (arr[x]);
   }

   return 0;
}