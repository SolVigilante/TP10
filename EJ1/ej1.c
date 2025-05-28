#include <stdio.h>
#include <stdlib.h>

int main(){
	int cant;


	printf("Cuantos enteros quiere resevar?\n");
	scanf("%d", &cant);

	int * buffer = (int *) calloc(cant*sizeof(int), sizeof(int));

	printf("Buffer creado:");
	for(int i= 0; i<cant; i++)
		printf("%d", buffer[0]);
	putchar('\n');

	free(buffer);

	return 0;

}
