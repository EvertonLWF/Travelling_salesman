#ifndef TravelingSalesman_H
#define TravelingSalesman_H
typedef struct {
	int num;
}cidade;
typedef struct{
	cidade c;
	int m[10][10];
}matriz;

void criaMatriz(int v,matriz *mtx);

void exibeComb(matriz m);


#endif
