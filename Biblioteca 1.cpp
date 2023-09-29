#ifndef _PONTO_H
	#define _PONTO_H
	typedef struct ponto{
		float x;
		float y;
	}ponto;
	void printPonto(ponto p);
endif

#include <stdio.h>
#include "Ponto h"
void printPonto(ponto p){
	printf("Ponto p: (%.1f,%.1f)",p.x,p.y);
}
int main(){
	ponto p;
	p.x=2.5;
	p.y=5.8;
	printPonto(p);
}
