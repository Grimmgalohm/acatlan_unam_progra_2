#include <stdio.h>

typedef union datos{
	int i;
	float f;
	char c;
}d;

//Solo esto :d
void typeOfData(d &dts, int type);
int main(){
	d dts;
	int o;
	do{
		printf("Ingresa el numero de opcion\n");
		printf("1) Integer\n");
		printf("2) Char\n");
		printf("3) Float\n");
		printf("4) Salir\n");
		scanf("%d", &o);
		switch(o){
			case 1:
				typeOfData(dts, o);				
				break;
			case 2:
				typeOfData(dts, o);
				break;
			case 3:
				typeOfData(dts, o);
				break;
			default:
				return 0;
				break;
		}
	}while(o!=4);
}

void typeOfData(d &dts, int type){
	switch(type){
		case 1:
			dts.i = 100;
			printf("%d", dts.i);
			break;
			
		case 2:
			dts.c = 'G';
			printf("%c", dts.c);
			break;
			
		case 3:
			dts.f = 3.1416;
			printf("%f", dts.f);
			break;
			
		default:
			printf("Not a type of data");
			break;
	}	
}
