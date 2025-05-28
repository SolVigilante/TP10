#include <stdio.h>
#include <stdlib.h>

int main(){
	int cant;


	printf("Cuantos enteros quiere resevar?\n");
	scanf("%d", &cant); //lee la entrada por consula y devuelve el numero entero a cant

	int * buffer = (int *) calloc(cant*sizeof(int), sizeof(int));//Resevo el espacio y lo inicializo todo en cero (uso de calloc)
	if(buffer != NULL){
	printf("Buffer creado:");

	for(int i= 0; i<cant; i++)
		printf("%d", buffer[0]);//imprime el buffer

	putchar('\n');
	}else{
		printf("Error\n");
	}
	free(buffer);

	return 0;

}
