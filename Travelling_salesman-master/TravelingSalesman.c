#include <stdio.h>
#include <stdlib.h>
#include "travelingsalesman.h"

void criaMatriz(int v,matriz *mtx){
	mtx->c.num=v;
	int i,j;
	for(i=0;i<mtx->c.num;i++){
		for(j=0;j<mtx->c.num;j++){
			mtx->m[i][j]=j+1;
		}
	}
}

void exibeComb(matriz m){
	int i,j;
	for(i=0;i<m.c.num;i++){
		for(j=0;j<m.c.num;j++){
			printf("[%d][%d]= %d\n",i,j,m.m[i][j]);
		}
	}
}
