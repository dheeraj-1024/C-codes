#include <stdio.h>
int main()
{
 int a[4]={1,2,3,4};
 int b[4]={1,2,5,8};
 int m[4];
 for(int i=0;i<=3;i=i+1)
 {
   for(int j=0;j<=3;j=j+1)
   {
     if (a[i]==b[j])
     {
     break;
     }
     if (j==3)
     {
      m[i]=a[i];
     }
   }
  }
for(int i=0;i<=3;i=i+1)
{printf(" %d \n",m[i]);}
}

