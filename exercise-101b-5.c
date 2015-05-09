//Librerias
#include <stdlib.h>
#include <stdio.h>
//variables
char nombre[15];
char produc[15];
float sub,tot,cant,desc;
//funciones
float iva(float x, float y)
{
    return ((x*y/100)*12);
}
//Funcion principal
main()
{
    printf("El nombre del Comprador:\n");
    scanf( "%s", nombre );
    printf("\nIngrese el nombre del producto:\n");
    scanf( "%s", produc );
    printf("Ingrese el valor unitario:\n");
    scanf("%f",&sub);
    printf("Ingrese la cantidad");
    scanf("%f",&cant);
    system("cls");
//comienza impresion de factura
    printf("\t\t----------------------Factura-----------------------\t\t");
    printf("\nImportadora Reytoca\n");
    printf("\nDatos del cliente:");
    printf("%s",nombre);
    printf("\n\tArticulos:\n");
    printf("\t%s\t%.0f\n\n",produc,cant);
//validacion de precio
    if((cant*sub)<100)
    {
        printf("\n\t\tSubtotal: %.2f\n",sub*cant);
        printf("\n\t\tIva [12%]: %.2f\n",iva(sub,cant));
        printf("\n\t\tTotal: %.2f",sub+iva(sub,cant));
    }
    else
    {
        if ((cant*sub)<150)
        {
            desc=((sub*cant)/100)*5;
        }
        if ( (cant*sub)>150 && (cant*sub)<250)
        {
            desc=((sub*cant)/100)*7;
        }
        else
        {
            desc=((sub*cant)/100)*10;
        }
        printf("\n\t\tSubtotal: %.2f\n",sub*cant);
        printf("\n\t\tIva [12%]: %.2f\n",iva(sub,cant));
        printf("\n\t\tDescuento [6%]: %.2f\n",desc);
        printf("\n\t\tTotal: %.2f",(sub*cant+iva(sub,cant))-desc);
    }
    return 0;
}
