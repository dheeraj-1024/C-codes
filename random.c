#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{FILE *fp;
 fp=fopen("data.dat","w+");
 srand((unsigned)time(NULL));
 for (int i=0;i<10000;i++) fprintf(fp,"%f \n",rand()/(double)RAND_MAX);
 fclose(fp);
}
