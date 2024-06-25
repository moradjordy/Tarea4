#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int cedula, op, opcion;
	char nombre[50];
	char apellido[50];
	int cantidadentradas;
		
	int solnortesur = 10500;
	int sombraesteoeste = 20500;
	int proferencial = 25500;
	int cargoservicio = 1000;
	
	int subtotal;
	int totalapagar;
	int numerofactura = 0;
	
	int cantidad[3]={0};
	int acumuladodinero[3]={0};
	
	printf("*********Bienvenidos***********\n");
	printf("*****Costa Rica vrs Mexico*****\n");
	
	
	do{

	printf("Digite numero de cedula:  \n");
	scanf("%d", &cedula);
	printf("Digite nombre:  \n");
	scanf("%s", &nombre);
	printf("Digite Apellido:  \n");
	scanf("%s", &apellido);
	printf("Digite cantidad de entradas:  \n");
	scanf("%i", &cantidadentradas);
	printf("Seleccione el tipo de localidad: \n 1- Sol Norte/Sur\n 2-Sombra Este/Oeste\n 3-Preferencial. \n");
	scanf("%i", &op);
	
	if (op==1) { //solnortesur
	numerofactura++;
	
	subtotal = solnortesur * cantidadentradas;
	totalapagar = subtotal + cargoservicio;
	
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Sol Norte/Sur\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	cantidad[0] += cantidadentradas;
	acumuladodinero[0] += totalapagar;

    printf("Desea continuar: S/N\n");
    opcion = getch();
    
   } else if(op==2){ //sombraesteoeste
	numerofactura++;
	
	subtotal = sombraesteoeste * cantidadentradas;
	totalapagar = subtotal + cargoservicio;
	
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Sombra Este/Oeste\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	
	cantidad[1] += cantidadentradas;
	acumuladodinero[1] += totalapagar;
	
    printf("Desea continuar: S/N\n");
    opcion = getch();

		
	
    } else if (op==3){//proferencial
    numerofactura++;
    
	subtotal = proferencial * cantidadentradas;
	totalapagar = subtotal + cargoservicio;
	
	printf("Numero de Factura: %d\n", numerofactura);
	printf("Cedula: %i\n", cedula);
	printf("Nombre comprador: %s %s\n", nombre, apellido);
	printf("Localidad: Preferencial\n");
	printf("Cantidad de Entradas: %d\n", cantidadentradas);
	printf("Subtotal = %d\n", subtotal);
	printf("Cargos por Servicios: %d\n", cargoservicio);
	printf("Total a pagar: %d\n", totalapagar);
	
	cantidad[2] += cantidadentradas;
	acumuladodinero[2] += totalapagar;

    printf("Desea continuar: S/N\n");
    opcion = getch();	
    	    	   	
	}
	
	}while (opcion=='s'|opcion=='S'); 
	printf("Cantidad Entradas Localidad Sol Norte/Sur: %d\n", cantidad[0]);
	printf("Acumulado Dinero Localidad Sol Norte/Sur: %d\n", acumuladodinero[0]);
	printf("Cantidad Entradas Localidad Sombra Este/Oeste: %d\n", cantidad[1]);
	printf("Acumulado Dinero Localidad Sombra Este/Oeste: %d\n", acumuladodinero[1]);
	printf("Cantidad Entradas Localidad Preferencial: %d\n", cantidad[2]);
	printf("Acumulado Dinero Localidad Preferencial: %d\n", acumuladodinero[2]);
		
	return 0;
}
