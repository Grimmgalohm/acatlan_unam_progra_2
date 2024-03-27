#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#define F 20
#define C 20

void debugger(int opc);
void restart();

typedef union data{
	int e[F][C];
	float d[F][c];
	char c[F][C];
}m_data;

typedef enum options{
	ints=1,
	dec,
	chars
}opt;

int main(){
	int n_rows, n_cols;
	opt opcion;
	int reset;
	do{
		printf("Ingresa la opción correspondiente [1-4]\n");
		printf("1) Enteros\n");
		printf("2) Decimales\n");
		printf("3) Letras\n");
		printf("4) Salir\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case ints:
				debugger(ints);
				restart();
				break;
				
			case dec:
				debugger(dec);
				restart();
				break;
			
			case chars:
				debugger(chars);
				restart();
				break;
			
			default:
				return 0;
				break;
		}
	}
	while(opcion < 4 || opcion > 1);
	
	system("cls");
	printf("Bueno bai");
	return 0;
}



void get_matrix(){
	
}

void prnt_mtrx(){
	
}

void debugger(int opc){
	printf("%d", opc);
}

void restart(){
	system("cls");
	main();
}
