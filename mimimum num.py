#include<stdio.h>

 int main()
 {
   int g,k=0, i;
   scanf("%d",&g);
   if(n%2 == 0)
   printf("0");
   else
   {
   for(i=1;i<=n;i++)
   {
       if(i%2==0)
       k++;
   }
   printf("%d",k);
   }
  return 0;
}
