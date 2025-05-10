//Eduardo Leite Soares - 22508340
#include <stdio.h>
#include <math.h>
int main() {
	double raio;
	scanf("%lf", &raio);
	double volume = (4/3.0) * 3.14159 * pow(raio, 3);
	printf("VOLUME = %.3lf", volume);

	return 0;
}