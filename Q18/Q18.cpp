#include <stdio.h>
#include <stdlib.h>

double countpi(double eps)               /*epsΪ�������*/
{
    int m = 1;
    double temp = 1.0, s = 0;
    while (temp >= eps) {
	    s += temp;
        temp = temp*m / (2*m+1);
        m++;
     }
     return(2*s);
}

void main(void)
{
    FILE *fp;
    double eps = 1e-5, pi;
     if((fp = fopen("p7_3.out","w")) == NULL) { 
		 printf("cannot open the file\n");
         exit(0);                       
	 }
     pi = countpi(eps);
     printf("pi=%lf\n", pi);
     fprintf(fp,"pi=%lf\n",pi);
     fclose(fp);
}
