#include <stdio.h>
int main()
{
int i;
printf("Enter number upto which you want prime = ");
scanf("%d",&i);
int list[i];
FILE *prime;
prime=fopen("prime.dat","w+");
for (int j=2;j<=i;j=j+1)
{
  for (int k=2;k<j;k=k+1)
  {
     if (j%k==0)  {break;}
     else if (k==j-1) 
      {
       fprintf(prime,"\n %d \n",j);
      }
  }
}fclose(prime);
}
