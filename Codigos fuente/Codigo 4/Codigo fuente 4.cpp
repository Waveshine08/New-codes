#include <iostream>
using namespace std;
#include <stdlib.h>
#include <math.h>

/* Parte 1 */
float x01,v1,a1,x02,v2,a2,a,b,c;
double h;

float entrada();
void coeficiente(float,float,float,float,float,float);
double evaluacion(float,float,float);
void calculo(float,float,float,double,float,float,float,float,float,float);

int main(int argc, char** argv) {
	cout<<" Para poder calcular en que tiempo y espacio se encuentran dos automoviles considere las siguientes cosas ";
	cout<<" \n Los vehiculos se mueven a diferentes velocidades en t=0 \n";
	cout<<" Los vehiculos tienen aceleraciones diferentes y constantes \n ";
	cout<<" Los vehiculos estan en diferentes posiciones \n";
	cout<<" A continuacion ingrese los siguientes datos del primer vehiculo por favor \n ";
	cout<<"\t Posicion: ";
	x01=entrada();
	cout<<"\t Velocidad: ";
	v1=entrada();
	cout<<"\t Aceleracion: ";
	a1=entrada();
	cout<<" A continuacion ingrese los siguientes datos del segundo vehiculo por favor \n ";
	cout<<"\t Posicion: ";
	x02=entrada();
	cout<<"\t Velocidad: ";
	v2=entrada();
	cout<<"\t Aceleracion: ";
	a2=entrada();
	coeficiente(x01,v1,a1,x02,v2,a2);
	system("pause");
	return 0;
}

float entrada()
{
	float f;
	cin>>f;
	return(f);
}

void coeficiente(float x01,float v1,float a1,float x02,float v2,float a2)
{
	a=(0.5*(a1-a2));
	b=(v1-v2);
	c=(x01-x02);
	h=evaluacion(a,b,c);
	calculo(a,b,c,h,x01,v1,a1,x02,v2,a2);
}

double evaluacion(float a,float b,float c)
{
	h=((pow(b,2)-4*a*c));
	return(h);
}

void calculo(float a,float b,float c,double h,float x01,float v1,float a1,float x02,float v2,float a2)
{
	double R,k1,k2;
	float t1,p1,t2,p2;
	R=(sqrt(h));
	t1=((-b-R)/(2*a));
	t2=((-b+R)/(2*a));
	k1=(pow(t1,2));
	k2=(pow(t2,2));
	if(h>=0)
	{
		if(t1>0){
			p1=(x01+v1*t1+0.5*a1*k1);
			printf("\nVehiculo 1");
			printf("\n\t Se encuentraran en: ");
			printf("\n\t Tiempo = %.2f",t1);
			printf("\n\t Posicion = %.2f \n\n",p1);
		}
		if(t2>0){
			p2=(x02+v2*t2+0.5*a2*k2);
			printf("\nVehiculo 2");	
			printf("\n\t Se encuentraran en: ");
			printf("\n\t Tiempo = %.2f",t2);
			printf("\n\t Posicion = %.2f \n\n",p2);
		}
	}
	else 
		printf("\n\t No existe una solucion con los datos propuestos \n\n");
}


