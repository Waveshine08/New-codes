#include <iostream>
using namespace std;
#include <stdlib.h>

char escala();
float grados();
void conversion(char,float);
void salidaF(float,float,float);
void salidaC(float,float,float);
void salidaK(float,float,float);

int main(int argc, char *argv[]) {
	char e;
	float g;
	printf("Para poder realizar una conversion de escalas de temperatura, ingresa los grados primeramente y despues cual escala desea convertir a las demas escalas de medicion de temperatura");
	printf("\n F\t Fahrenheit ");
	printf("\n C\t Centigrados ");
	printf("\n K\t Kelvin");
	printf(" \n Ingresa la letra mayuscula que puede representar a la escala de temperatura: ");
	e=escala();
	printf("Ingrese los grados: ");
	g=grados();
	conversion(e,g);
	system("pause");
	return 0;
}

char escala()
{
	char q;
	cin>>q;
	return (q);
}

float grados()
{
	float w;
	cin>>w;
	return(w);
}

void conversion(char e,float g)
{
float gF,gC,gK;
	switch(e)
	{
	case 'F':{
		gC=((g-32)/(1.8));
		gK=(gC+273.15);
		salidaF(g,gC,gK);
		break;
	}
	case'C':{
		gF=(g*(1.8)+32);
		gK=(g+273.15);
		salidaC(g,gF,gK);
		break;
	}
	case 'K':{
		gC=(g-273.15);
		gF=(1.8*(g-273.15)+32);
		salidaK(g,gC,gF);
		break;
	}
	default:
		printf("\n\n No existe la escala de temperatura mencionada \n");
	}
}

void salidaF(float A,float B,float C)
{
	printf("\n\n%.2f",A); printf(" grados Fahrenheit equivalen a: ");
	printf("\n\t%.2f",B); printf(" grados Centigrados ");
	printf("\n\t%.2f",C); printf(" grados Kelvin \n");
}

void salidaC(float A,float B,float C)
{
	printf("\n\n%.2f",A); printf(" grados Centigrados equivalen a: ");
	printf("\n\t%.2f",B); printf(" grados Fahrenheit ");
	printf("\n\t%.2f",C); printf(" grados Kelvin \n");
}

void salidaK(float A,float B,float C)
{
	printf("\n\n%.2f",A); printf(" grados Kelvin equivalen a: ");
	printf("\n\t%.2f",B); printf(" grados Centigrados ");
	printf("\n\t%.2f",C); printf(" grados Fahrenheit \n");
}
