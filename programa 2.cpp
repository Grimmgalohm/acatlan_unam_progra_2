#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#define F 20
#define C 20

typedef union data{
	int e[F][C];
	float d[F][C];
	char c[F][C];
}d;

typedef enum options{
	ints=1,
	dec,
	chars,
	ext
}opt;

void mkmtrx(d &x ,int fil, int col,int opt);
void prnt_mtrx(d &mtx, int fil, int col, int opt);
void restart();

int main(){
	int n_rows, n_cols, opcion;
	opt opts;
	d mtx;
	
	system("cls");
	printf("Bienvenido al programa 2:\n");
	printf("Ingresa el numero de columnas de la matriz:\n");
	scanf("%d", &n_cols);
	printf("Ingresa el numero de filas de la matriz:\n");
	scanf("%d", &n_rows);
	
	if(n_cols == n_rows){
		restart();
	}
	
	do{
		system("cls");
		printf("Ingresa la opcion correspondiente [1-4]\n");
		printf("1) Enteros\n");
		printf("2) Decimales\n");
		printf("3) Letras\n");
		printf("4) Salir\n");
		scanf("%d", &opcion);
		system("cls");
		
		switch(opcion){
			case ints:
					mkmtrx(mtx ,n_rows, n_cols, ints);
					prnt_mtrx(mtx ,n_rows, n_cols, ints);
				break;
				
			case dec:
					mkmtrx(mtx ,n_rows, n_cols, dec);
					prnt_mtrx(mtx ,n_rows, n_cols, dec);	
				break;
			
			case chars:
					mkmtrx(mtx ,n_rows, n_cols, chars);
					prnt_mtrx(mtx ,n_rows, n_cols, chars);
				break;
			
			default:
				return 0;
				break;
		}
		
	}
	while(opcion!=ext);
	
	system("cls");
	printf("Bueno bai");
	return 0;
}


void mkmtrx(d &mtx ,int fil, int col, int opt){
	int i,j;
	system("cls");
	
	switch(opt){
		//INT CASE
		case 1:
			mtx.e[fil][col];
			//Ingresar los datos a la matriz definida
			
			for(i=0; i<fil; i++){
				for(j=0; j<col; j++){
					printf("Escribe el elemento %d de la fila %d:\n", j+1, i+1);
					scanf("%d", &mtx.e[i][j]);
				}
			}
			break;
		
		//FLOAT CASE
		case 2:
			mtx.d[fil][col];
			//Ingresar los datos a la matriz definida
			
			for(i=0; i<fil; i++){
				for(j=0; j<col; j++){
					printf("Escribe el elemento %d de la fila %d:\n", j+1, i+1);
					scanf("%f", &mtx.d[i][j]);
				}
			}
			break;
			
		//CHAR CASE
		case 3:
			mtx.c[fil][col];
			//Ingresar los datos a la matriz definida
			
			for(i=0; i<fil; i++){
				for(j=0; j<col; j++){
					printf("Escribe el elemento %d de la fila %d:\n", j+1, i+1);
					scanf("%c", &mtx.c[i][j]);
				}
			}
			break;
			
		default:
			printf("No tenemos esa opción. Lo sentimos :C");
			system("pause");
	}
	
}

void prnt_mtrx(d &mtx, int fil, int col, int opt){
	system("cls");
	char yn;
	int i,j;
	switch(opt){
		//INT CASE
		case 1:
			printf(" _____________________________ \n");
			printf("|                             |\n");
			printf("|  La matriz de tamaño %dx%d    |\n", fil, col);
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
		break;
		
		//FLOAT CASE
		case 2:
			printf(" _____________________________ \n");
			printf("|                             |\n");
			printf("|  La matriz de tamaño %dx%d    |\n", fil, col);
			printf("|                             |\n");
			printf("|_____________________________|\n");
			printf("\n\n");
			for(i=0; i<fil; i++){
				printf(" |");
				for(j=0; j<col; j++){
					printf(" %f ", mtx.d[i][j]);
				}
				printf("|  \n");
			}
		break;
			
		//CHAR CASE
		case 3:
			printf(" _____________________________ \n");
			printf("|                             |\n");
			printf("|  La matriz de tamaño %dx%d    |\n", fil, col);
			printf("|                             |\n");
			printf("|_____________________________|\n");
			printf("\n\n");
			for(i=0; i<fil; i++){
				printf(" |");
				for(j=0; j<col; j++){
					printf(" %c ", mtx.c[i][j]);
				}
				printf("|  \n");
			}
		break;
			
		default:
			printf("No tenemos esa opción. Lo sentimos :C");
	}
	printf("\n\nPulsa cualquier tecla para continuar\n\n");
	system("pause");
}

void restart(){
	main();
}
