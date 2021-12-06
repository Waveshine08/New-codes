#include <iostream>
using namespace std;
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float a;
float c;

float entrada ();
void comparacion (float,float);

int main(int argc, char** argv) {
	printf(" Para llevar a cabo la verificacion de su edad \n");
	printf(" Ingrese su edad: ");
	a=entrada();
	printf(" Ingrese su calificacion: ");
	c=entrada();
	comparacion(a,c);
	return 0;
}

float entrada () {
	float x;
	cin>>x;
	return x;
}

void comparacion (float a, float c) {
	float beca;
	if(a>18){
		if(c>=9){
			if (c<=10){
				printf(" Su beca es de 2000\n");
			}
		}
		if(c>=7.5){
			if (c<9){
				printf(" Su beca es de 1000\n");
			}
		}
		if(c>=6){
			if(c<7.5){
				printf(" Su beca es de 500\n");
			}
		}
		if(c<6){
			printf(" Mejore sus calificaciones para el proximo curso escolar\n");
		}
	}
	if(a<=18){
		if(c>=9){
			if (c<=10){
				printf(" Su beca es de 3000\n");
			}
		}
		if(c>=8){
			if (c<9){
				printf(" Su beca es de 2000\n");
			}
		}
		if(c>=6){
			if(c<8){
				printf(" Su beca es de 100\n");
			}
		}
		if(c<6){
			printf(" Mejore sus calificaciones para el proximo curso escolar\n");
		}
	}
}
