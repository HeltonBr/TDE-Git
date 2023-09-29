#include <stdio.h>
#include <math.h>
#define PI 3.14159265
double fat(int n){
	double f;
	if (n==0)
		f=1;
	else
		f=n*fat(n-1);
	return f;	
}
int main(){
	double soma, x, tg;
	int k, n;
	printf("Digite o numero de termos (>0): "); scanf("%d",&n);
	printf("Digite o angulo em graus: "); scanf("%lf",&x);
	x=PI/180*x;
	soma=0;
	for(k=0;k<n;k++){
		tg=pow(-1.0,k)*pow(x,2*k)/fat(2*k);
		soma+=tg;
		}
	printf("cos(%.1lf) com %d termos da serie: %.6f.\n",x*180/PI,n,soma);
	printf("cos(%.1lf) de math.h:             %.6f.\n",x*180/PI,cos(x));
}

