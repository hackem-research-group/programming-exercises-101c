/*Ingresar  un  numero  por  teclado  de  una  temperatura  en  grados  Celsius, 
muestre un menu para 
convertirlos a 1. Fahrenheit o 2. Kelvin y muestre 
el equivalente por pantalla, utilizar funciones*/
/*Libreria*/
#include <stdio.h>
#include <stdlib.h>
/*Main funccion*/
int main(){
	/*Variables*/
	float c;
	int e;
	/*Menu y almacenamiento*/
	printf("Ingresa la temperatura en Celsius:\n");
	scanf("%f",&c);
	printf("1.Transformar en Farenheit\n2.Transformar en Kelvin\n");
	scanf("%d",&e);
	system("cls"); /*Limpia la pantalla libreria stdlib.h*/
	/*Parte */
	if(e==1){
		c=1.8*c+32;
		printf("%.2f",c);
	}
	else{
		c=c+273.15;
		printf("%.2f",c);
	}
}
