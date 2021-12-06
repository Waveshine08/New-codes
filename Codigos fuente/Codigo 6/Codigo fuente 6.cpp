#include <iostream>
using namespace std;
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float h;

float entrada ();
void calculo (float);


int main(int argc, char** argv) {
	printf("Para llevar a cabo el calculo de el cobro de un estacionamiento\n");
	printf("Ingrese las horas: ");
	h=entrada();
	calculo(h);
	system("pause");
	return 0;
}

float entrada () {
	int h;
	cin>>h;
	return h;
}

void calculo (float h) {
	float c;
	if (h<=2){
		c=h*5;
	}
	if (h<=5){
		if(h>2){
			c=((h-2)*(4))+10;
		}	
	}
	if (h<=10){
		if(h>5){
			c=((h-5)*(3))+22;
		}
	}
	if (h>10){
		c=((h-10)*(2))+37;
	}
	printf("El total a pagar es %.2f\n",c);
}

void salida (float dinero) {
	
}
