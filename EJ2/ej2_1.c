#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	double random;
	srand(time(NULL));

	random = (double)rand()/ (RAND_MAX * (0.1-0.0 +1.0));

	printf("Número random: %f\n", random);

	return 0;
}
