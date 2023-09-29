#include <stdio.h>
#include <stdlib.h>/* malloc(); free(). */
#include <ctype.h>
/* toupper(): converte para maiúsculas. */
/* Inicializa uma matriz n x m conhecido seu ponteiro. */
/* Assume-se que a memória correspondente já esta alocada. */ 
void init_mat(int valor,int *p,int n,int m){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			*(p+i*m+j)=valor;
}
* Imprime uma matriz n x m conhecido seu ponteiro. /* 
/* Assume-se que a matriz já está inicializada */
void print_mat(int *p,int n,int m){
	int i,j;
	printf("----------------------------------------------");
	for(i=0;i<n;i++) {
		printf("\n");
		for(j=0;j<m;j++)
			printf("%-5d",*(p+i*m+j));
	}		
 	printf("\n----------------------------------------------");
}
/* Programa principal */
int main() {
	int valor,*p,n,m;
	printf("CRIA UMA MATRIZ N x M E A INICIALIZA COM VALOR\n");
	printf("----------------------------------------------\n");
	inicio: /* Etiqueta/endereço para goto: p/ repetição do processo. */
	/* Solicita n, m e valor para inicialização. */
	printf("Forneca n e m (separados por virgula): ");
	scanf("%d,%d",&n,&m);
	printf("Forneca valor de inicializacao da matriz: ");
	scanf("%d",&valor); getchar(); /* getchar() limpa "newline". */ 
	/* Aloca memoria para a matriz de inteiros n*m apontada por p. */
	p=(int*)malloc(n*m*sizeof(int));
	/* Inicializa os elementos da matriz com valor. */
	init_mat(valor,p,n,m);
	/* Imprime a matriz inicializada. */
	print_mat(p,n,m);
	/* Libera a memoria ocupada pela matriz. */
	free(p);
	/* Pergunta se deseja repetir o procedimento. */
	printf("\nCriar/inicializar outra matriz ? (s/n) => ");
	if(toupper(getchar())=='S') { /* Solicita resposta e testa. */ 
		printf("--- OUTRA MATRIZ -----------------------------");
		gotoinicio;
	}
 	printf("*** FIM DO PROGRAMA ***");
}

