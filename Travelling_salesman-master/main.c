#include <stdio.h>
#include <stdlib.h>
#include "TravelingSalesman.h"

main(){
	int x;
	matriz mt;
	printf("informe o numero de cidades:");
	scanf("%d",&x);
	criaMatriz(x,&mt);
	exibeComb(mt);
}
