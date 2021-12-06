#include <iostream>
using namespace std;
#include <stdlib.h>

/* Parte A */

float n1,n2,R;
char S;

float num();
char simbolo();
float calculos(float,float,char);
void salida(float);

int main(int argc, char** argv) {
	printf(" Digite dos numeros para hacer una operacion entre estos dos numeros ");
	printf("\n\t Primer numero: ");
	n1=num();
	printf("\t Segundo numero: ");
	n2=num();
	printf(" \n A continuacion seleccionaras un signo matematico para determinar la operacion que se realizara entre estos dos numeros ");
	printf("\n\t +\t Suma ");
	printf("\n\t -\t Resta ");
	printf("\n\t *\t Multiplicacion ");
	printf("\n\t /\t Division ");
	printf("\n\t  Signo matematico: ");
	S=simbolo();
	R=calculos(n1,n2,S);
	salida(R);
	system("pause");
	return 0;
}
float num()
{
	float x;
	cin>>x;
	return(x);
}
char simbolo()
{
	char w;
	cin>>w;
	return(w);
}
float calculos(float n1,float n2,char S)
{
	switch(S)
	{
		case'+':{
			R=(n1+n2);
			break;
		}
		case'-':{
			R=(n1-n2);
			break;
		}
		case'*':{
			R=(n1*n2);
			break;
		}
		case'/':{
			R=(n1/n2);
			break;
		}
		default:{
			printf("\n No existe eso que quieres hacer ");
		}
}
}
void salida(float R)
{
	printf(" \nEl resultado de la operacion seleccionada es %8.2f\n\n",R);
}
