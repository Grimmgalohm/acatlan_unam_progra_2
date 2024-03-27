#include <stdio.h>
#define F 20
#define C 20


typedef union Matrix{
	int e[F][C];
	float f[F][C];
	char c[F][C];
}m;

int main(){
	
	m mtx;
	
	int fil, col, i, j, c; 
	
	//Metodos para leer y escribir una matriz con datos random
	//1.- Pedir numero de filas y columnas
	printf("Escribe el numero de filas\n");
	scanf("%d", &fil);
	printf("\nEscribe el numero de columnas\n");
	scanf("%d", &col);
	
	mtx.e[fil][col];
	//Ingresar los datos a la matriz definida
	
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			printf("Escribe el elemento %d de la fila %d:\n", j+1, i+1);
			scanf("%d", &mtx.e[i][j]);
		}
	}
	
	//Imprimiendo la pinche matriz
	//Luego le damos formato chido xd
	printf(" _____________________________ \n");
	printf("|                             |\n");
	printf("|  La matriz de tamaño %dx%d    |\n", i, j);
	printf("|                             |\n");
	printf("|_____________________________|\n");
	printf("\n\n");
	for(i=0; i<fil; i++){
		printf(" |");
		for(j=0; j<col; j++){
			printf(" %d ", mtx.e[i][j]);
		}
		printf("|  \n");
	}
	
}


//En funciones:

void imp_mtx(){
	//Imprimiendo la pinche matriz
	//Luego le damos formato chido xd
	printf(" _____________________________ \n");
	printf("|                             |\n");
	printf("|  La matriz de tamaño %dx%d    |\n", i, j);
	printf("|                             |\n");
	printf("|_____________________________|\n");
	printf("\n\n");
	for(i=0; i<fil; i++){
		printf(" |");
		for(j=0; j<col; j++){
			printf(" %d ", mtx.e[i][j]);
		}
		printf("|  \n");
	}
}

