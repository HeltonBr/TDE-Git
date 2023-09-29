/* Programa que aloca dinamicamente uma matriz inteira
utilizando ponteiro para ponteiro. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void encerra(){
   printf("Memoria insuficiente!");
   exit(1);
}
/* Fun o que aloca mem ria para uma matriz inteira mxn,???
retornando um ponteiro para ponteiro (in cio da matriz). */
int** imat_alloc(int m,int n, int max){
	int i,j;
/* Aloca mem ria para in cio de cada linha. */
	int **tmp=(int**)malloc(m*sizeof(int*));
	if (tmp==NULL) encerra();
	for(i=0;i<m;i++){
/* Aloca mem ria para os elementos de uma linha. */
		tmp[i]=(int*)malloc(n*sizeof(int));
		if (tmp[i]==NULL) encerra();
/* Inicializa os elementos com zero com nota o matricial. */
			for(j=0;j<n;j++) tmp[i][j]=rand()%(max+1);
}
/* Retorna endere o da matriz. */
		return tmp;
}
/* Fun o que libera mem ria alocada para a matriz de m???*/
/* linhas atrav s de ponteiro para ponteiro. */
void imat_free(int **pmat, int m){ 
	int i; 
	for(i=0;i<m;i++)
		free(pmat[i]);
	free(pmat);
}
void imat_print(int **pmat, int m, int n){ 
    int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			printf("%5d",pmat[i][j]);
		printf("\n");
}
}
/* *** Progama principal. *** */
int main(){
	int i,j,m=2,n=2,**a,**b,**c;
	m=n;
	/* Aloca mem ria para a matriz. */
	srand(time(NULL));
	a=imat_alloc(m,n,10);
	b=imat_alloc(m,n,10);
	c=imat_alloc(m,n,10);
/* Imprime a matriz (todos elementos zero). 
Notar a nota o matricial */
	printf("Matriz A:\n");
	imat_print(a,m,n);
	printf("\nMatriz B:\n");
	imat_print(b,m,n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nMatriz C:\n");
	imat_print(c,m,n);
	imat_free(a,m);
	imat_free(b,m);
	imat_free(c,m);
}
