/*Ingresar  un  numero  por  teclado  y  decir  si  es  un  numero  par  o  impar, 
utilizando una funcion.*/
/*Libreria*/
#include <stdio.h>
//Función Principal
int main()
{
	int n;
	printf("Ingresa su numero:\n");
	scanf("%d",&n);
        int par(int n);
	if (n%2==0)
	{
	    printf("El numero el numero %d es par",n);
        }
	else
	{
	    printf("El numero %d es impar",n);
	}
}
