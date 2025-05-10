//Eduardo Leite Soares - 22508340
#include <stdio.h>
int main() {
	char nomeVendedor[20];
	double salarioFixo, totalVendas;
	scanf("%s %lf %lf", &nomeVendedor, &salarioFixo, &totalVendas);
	double totalCalculado = salarioFixo + (0.15 * totalVendas);
	printf("TOTAL = R$ %.2lf\n", totalCalculado);	
	return 0;
}
