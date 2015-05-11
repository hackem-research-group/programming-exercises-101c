/*Ingresar   un   numero   cualquiera   por   teclado   y   mostrar   la   tabla
de multiplicar del 1 al 12, mediante funciones*/
//Bibliotecas//
#include <stdio.h>
#include <stdlib.h>
//Funcion principal//
int main()
{	
	//Variables//
	int n;
	int i;
	int res;
	
	//Entrada de los datos//
	printf("Porfavor ingresa su numero:\n");
	scanf("%d",&n);
	system("cls"); //Limpio de la pantalla//
	printf("TABLA DE MULTIPLICACION DE %d\n\n",n);
	
	//Loop para la multiplicacion//
	for (i=1;i<=12;i++)
	{
		res=i*n;
		printf("%d x %d= %d\n",n,i,res);
	}
}
