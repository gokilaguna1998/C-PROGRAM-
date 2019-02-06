#include <stdio.h>
int main()
{
  int m,arr[n],i,minimum=arr[0];
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<m;i++)
  {
      if(minimum>arr[i])
      {
          minimum=arr[i];
      }
    }
 printf("%d",minimum);
 return 0;
}
  
