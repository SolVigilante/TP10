#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	double random_0_1;
	double random_0_n;
	double random_n_m;

	double n;
	double m;

	srand(time(NULL));

	printf("Cual es el numero n?\n");
	scanf("%lf", &n);

	printf("Cual es el numero m?\n");
	scanf("%lf", &m);

	random_0_1 = (double)rand()/ (double)RAND_MAX;

	random_0_n = ((double)rand()/ (double)RAND_MAX) * (n - 0.0);

	random_n_m = ((double)rand()/ (double)RAND_MAX) * (n - m) + m;

	printf("Número random 0-1: %f\n", random_0_1);
	printf("Número random 0-n: %f\n", random_0_n);
	printf("Número random n-m: %f\n", random_n_m);

	return 0;
}
