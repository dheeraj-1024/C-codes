#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float new(float);
int main()
{
 /* name of function is new which is defined at the end */
 int a,b;
 float my_sum,h;
 a=0;
 b=1;
 printf("Enter the h = ");
 scanf("%f",&h);
 float var=0,i=a+((b-a)/h);
 while (i<b) 
 {
  var=var+new(i);
  i=i+((b-a)/h);
 }
 my_sum=((((b-a)/h)*(new(b)+new(a)))/2)+(((b-a)/h)*var);
 printf("Value of integration is %f \n",my_sum);
 
 printf("Enter the h_2 = ");
 int h_2;
 scanf("%d",&h_2);
 float list[h_2*2];
 srand((unsigned)time(NULL));
 
 for (int i=0;i<(h_2*2);i++)  list[i]=rand()/(double)RAND_MAX;
 float x[h_2],y[h_2];
 float s=0;
 
 for (int i=0;i<h_2;i++)       {x[i]=list[i];}
 for (int i=0;i<h_2;i++)       {y[i]=list[i+h_2];}
 
 for (int j=0;j<h_2;j++)
 {
   if (y[j]<new(x[j]))
   {
     s=s+1;
   }
 }
 float volume=(s/h_2)*(new(b)-new(a))*(b-a);
 printf("Value by Monte Carlo (brute force) integration is %f \n",volume);
}
float new(float x)
{
 float y;
 y=x*x;
 return y;
}
