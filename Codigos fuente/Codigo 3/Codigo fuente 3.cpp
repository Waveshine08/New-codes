#include <iostream>
using namespace std;
#include <math.h>
#include<stdlib.h>

/* Parte A */
float a,b,c,E;

float entrada();
float evaluacion(float,float,float);
void calculo(float,float,float,float);
void salida(float,float,float,float,float,float);
void salida1(float,float,float,float,float,float,float);

int main(int argc, char** argv) {
	cout<<" Para poder realizar una ecuacion cuadratica de la forma: ";
	cout<<"\n\t ax^2 + bx + c = 0 \n";
	cout<<" Ingresa a continuacion los siguientes datos para poder realizar la ecuacion cuadratica: ";
	cout<<"\n\t valor de a en ax^2: ";
	a=entrada();
	cout<<"\t valor de b en bx: ";
	b=entrada();
	cout<<"\t valor de c: ";
	c=entrada();
	E=evaluacion(a,b,c);
	calculo(a,b,c,E);
	system("pause");
	return 0;
}
float entrada()
{
	float x;
	cin>>x;
	return(x);
}
float evaluacion(float a,float b,float c)
{
	E=((pow(b, 2))-4*a*c);
	return(E);
}
void calculo(float a,float b, float c,float E)
{
	float r,x1,x2,xa,xb;
	
	if(E>0)
	{
		r=sqrt(E);
		x1=((-b+r)/(2*a));
		x2=((-b-r)/(2*a));
		salida(E,a,b,c,x1,x2);
	}
	if(E==0)
	{
		x1=(-b/(2*a));
		x2=x1;
		salida(E,a,b,c,x1,x1);
	}
	if (E<0)
	{
		r=sqrt(-E);
		x1=(-b/(2*a));
		x2=(-b/(2*a));
		xa=(r/(2*a));
		xb=(-r/(2*a));
		salida1(a,b,c,x1,x2,xa,xb);
	}
}
void salida(float E,float a,float b,float c,float x1,float x2)
{
	if (E>0)
	{
		printf(" \n El resultado de la ecuacion ");
		cout<<"\t"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
		printf(" es: \n");
		printf("\n\t x1 = %.2f",x1);
		printf("\n\t x2 = %.2f\n\n",x2);
	}
	if (E==0)
	{
		printf(" \n El resultado de la ecuacion ");
		cout<<"\t"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
		printf(" presenta una sola solucion : \n");
		printf("\n\t x = %.2f\n\n",x1);
	}
}
void salida1(float a,float b,float c,float x1,float x2,float xa,float xb)
{
		printf(" \n El resultado de la ecuacion ");
		cout<<"\t"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
		printf(" son raices complejas conjugadas: \n");
		printf(" x1:\n");
		printf("\n\t Parte real = %.2f",x1);
		printf("\n\t Parte imaginaria = %.2f i\n ",xa);
		printf(" x2: \n");
		printf("\n\t Parte real = %.2f",x2);
		printf("\n\t Parte imaginaria = %.2f i\n\n ",xb);
}
/* By Rolando Carrazco */

