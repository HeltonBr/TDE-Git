#include <stdio.h>
#define N 5
int main(){
	int i,j,n,aux;
	int A[N][N],B[N][N],C[N][N];
	FILE *fpin,
		 *fpout;
	if ((fpin = fopen("in.txt","r"))==NULL){
		printf("\nFalha na abertura do arquivo de entrada de dados !\a");
		goto Fim;
	}
	if ((fpout = fopen("out.txt","w"))==NULL){
		printf("\nFalha na abertura do arquivo de saida de dados !\a");
		goto Fim;
	}
	fscanf(fpin,"%d",&n);
	printf("Ordem do sistema: %d\n",n);
	if ((n<1)||(n>N)){
		printf("\nA ordem da matriz deve estar entre 1 e %d\n",N);
		goto Fim;
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			fscanf(fpin,"%i",&aux);
			A[i][j] = aux;
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			fscanf(fpin,"%i",&aux);
			B[i][j] = aux;
			C[i][j] = A[i][j]+aux;
		}
	}
	printf("Matriz A:");
	fprintf(fpout,"Matriz A:");
	for (i=0;i<n;i++){
		printf("\n");
		fprintf(fpout,"\n");
		for (j=0;j<n;j++){
			printf("%-3d",A[i][j]);
			fprintf(fpout,"%-3d",A[i][j]);
		}
	}
	printf("\nMatriz B:");
	fprintf(fpout,"\nMatriz B:");
	for (i=0;i<n;i++){
		printf("\n");
		fprintf(fpout,"\n");
		for (j=0;j<n;j++){
			printf("%-3d",B[i][j]);
			fprintf(fpout,"%-3d",B[i][j]);
		}
	}
	printf("\nMatriz C=A+B:");
	fprintf(fpout,"|nMatriz C=A+B:");
	for (i=0;i<n;i++){
		printf("\n");
		fprintf(fpout,"\n");
		for (j=0;j<n;j++){
			printf("%-3d",C[i][j]);
			fprintf(fpout,"%-3d",C[i][j]);
		}
	}
	printf("\n>>> Resultados impressos em out.txt!");
	Fim:
		if (!(fpin==NULL)) fclose(fpin);
		if (!(fpout==NULL)) fclose(fpout);
}
