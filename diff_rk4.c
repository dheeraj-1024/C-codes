#include<stdio.h>
float f(float x,float y);
int main()
{
  float x_0 ,y_0, h,x_f;
  printf("Enter values of = ");
  scanf("%f%f%f%f",&x_0,&y_0,&h,&x_f);
  int iter; 
  iter=((x_f-x_0)/h);
  int i;
  float x[iter+1],y[iter+1];
  x[0]=x_0,y[0]=y_0;
  for (i=0;i<=iter;i=i+1) x[i+1]=x[i]+h;
  float f0,f1,f2,f3;
  float h2=h/2 , h6=h/6;
  for (i=0;i<=iter;i=i+1)
  {
     f0=f(x[i],y[i]);
     f1=f(x[i]+h2,y[i]+h2*(f0));
     f2=f(x[i]+h2,y[i]+h2*(f1));
     f3=f(x[i]+h,y[i]+h*(f2));
     y[i+1]=y[i]+h6*(f0+(2*f1)+(2*f2)+f3);
  }
  FILE *prime;
  prime=fopen("data.dat","w+");
  for (i=0;i<=iter+1;i=i+1) fprintf(prime,"%f   %f \n",x[i],y[i]);
  fclose(prime);
}

float f(float x,float y)
{
 float t;
 t=1+y*y;
 return t;
}
