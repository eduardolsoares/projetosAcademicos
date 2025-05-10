//Eduardo Leite Soares - 22508340
#include <stdio.h>
int main() {
	int distanciaTotal;
	double combustivelGasto;
	scanf("%d %lf", &distanciaTotal, &combustivelGasto);

	printf("%.3lf km/l", (distanciaTotal / combustivelGasto));
}
