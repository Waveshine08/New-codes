#include <iostream>
using namespace std;
#include<math.h>

/* Parte A */
float a,b,c;

float entrada();
void comparacion(float,float,float);

int main(int argc, char** argv) {
	cout<<" Ingresa a continuacion en los siguientes espacios las medidas de los tres lados de un triangulo para determinar si es un triuangulo rectangulo ";
	cout<<"\n\t Lado a: ";
	a=entrada();
	cout<<"\n\t Lado b: ";
	b=entrada();
	cout<<"\n\t Lado c: ";
	c=entrada();
	comparacion(a,b,c);
	system("pause");
	return 0;
}
float entrada()
{
	float x;
	cin>>x;
	return(x);
}
void comparacion(float a,float b,float c)
{
	double LA,LB,LC,T;
	
	if(a>b && a>c)
	{
		LA=(pow(b,2));
		LB=(pow(c,2));
		LC=(pow(a,2));
		T=(LA+LB);
		if(T==LC){
			cout<<"\n\t Es un triangulo rectangulo \n\n";
		}
		else 
			cout<<"\n\t No es un triangulo rectangulo \n\n";
	}
	if(b>a && b>c)
	{
		LA=(pow(a,2));
		LB=(pow(c,2));
		LC=(pow(b,2));
		T=(LA+LB);
		if(T==LC){
			cout<<"\n\t Es un triangulo rectangulo \n\n";
		}
		else 
			cout<<"\n\t No es un triangulo rectangulo \n\n";
	}
	if(c>a && c>b)
	{
		LA=(pow(a,2));
		LB=(pow(b,2));
		LC=(pow(c,2));
		T=(LA+LB);
		if(T==LC){
			cout<<"\n\t Es un triangulo rectangulo \n\n";
		}
		else 
			cout<<"\n\t No es un triangulo rectangulo \n\n";
	}
}

