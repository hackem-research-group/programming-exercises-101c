#include<stdio.h>

int menu();
void suma();
void resta();
void division();
void multiplicacion();

int menu ()
{
	int opcion;
	printf("ELIGE UNA OPERACION");
	printf("\n1.Suma");
	printf("\n2.Resta");
	printf("\n3.Multiplicacion");
	printf("\n4.Division");
	printf("\nESCRIBA AQUI EL NUMERO DE LA OPCION:  ");
	scanf("%d",&opcion);
	return opcion;
}
int main ()
{
int op;
op=menu();	

switch(op)
{
case 1: 
     suma();
break;
case 2:
	resta();
break;
case 3:
     multiplicacion();	
break;
case 4:
	 division();
break;	
} 	
return 0;	
}
void multiplicacion(int a, int b)
{
 printf("\nMULTIPLICACION\n");
 printf("\nIntroduce el primer numero: ");
 scanf("%d",&a); 
 printf("\nIntroduce el segundo numero: ");
 scanf("%d",&b);
 printf("\n El producto: %d * %d = %d ",a,b,a*b); 	
}
void division(int numerador, int denominador)
{
 printf("\nDIVISION\n");
 printf("\nIntroduce el primer numero: ");
 scanf("%d",&numerador); 
 printf("\nIntroduce el segundo numero: ");
 scanf("%d",&denominador);	
   if (denominador==0)
    {
     printf("\nNO ESTA DEFINIDA LA DIVISION PARA CERO");	
	} else 
	    {
	    printf("\n La division: %d / %d = %d ",numerador,denominador,numerador/denominador); 	
		}	
}
void suma(int num1,int num2)
{
printf("\nSUMA\n");
 printf("\nIntroduce el primer numero: ");
 scanf("%d",&num1); 
 printf("\nIntroduce el segundo numero: ");
 scanf("%d",&num2);
 printf("\n La suma : %d + %d = %d ",num1,num2,num1+num2); 	
}
void resta(int num1, int num2)
{
 printf("\nRESTA\n");
 printf("\nIntroduce el primer numero: ");
 scanf("%d",&num1); 
 printf("\nIntroduce el segundo numero: ");
 scanf("%d",&num2);
 printf("\n La resta : %d - %d = %d ",num1,num2,num1-num2);	
}
