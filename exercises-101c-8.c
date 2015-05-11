/*Realice  un  programa  que  permite  ingresar  por  teclado  un  monto  en 
dolares y los convierta mediante funciones a  Euros y Rublos*/
//Bibliotecas//
#include <stdio.h>
#include <stdlib.h>

float transf1(float n);
float transf2(float n);

//Funccion principal//
int main()
{
	//Variables//
	float n;
	int opc;
	
	//Entrada y Menu//
	printf("Ingresa el numero en DOLARES:\n");
	scanf("%f",&n);
	system("cls"); //Limpio de la pantalla//	
	printf("1.Convertir en EUROS\n2.Convertir en RUBLOS\n");
	scanf("%d",&opc);
	system("cls"); //Limpio de la pantalla//	
	//Salida//
	if (opc==1)
	{
		printf("%.2f USD = %.2f EUR",n,transf1(n));
	}
	else
	{
		printf("%.2f USD = %.2f RUB",n,transf2(n));
	}
}

//Funccion para la transformacion a EUROS//
float transf1(float n)
{
	float i;
	i=n*0.89;
	return i;
}
//Funccion para la transformacion a RUBLOS//
float transf2(float n)
{
	float i;
	i=n*50.75;
	return i;
}
