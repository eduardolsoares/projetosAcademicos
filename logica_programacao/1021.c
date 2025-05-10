//Eduardo Leite Soares, 22508340
#include <stdio.h>
#include <math.h>

int main() {
	double valor;
	int notas, i, moedas;
	float quantidade[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
	double moedasDisponiveis[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	printf("Digite um numero: ");
	scanf("%lf", &valor);

	for (i = 0; i < 6; i++) {
		notas = valor / quantidade[i];
		if (notas < 1) {
			printf("%d nota(s) de R$ %.2f\n", quantidade[i]);
			continue;
			}
		valor = valor - (notas * quantidade[i]);
		printf("%d nota(s) de R$ %.2f\n", notas, quantidade[i]);
	}

	printf("MOEDAS: \n");

	for (i = 0; i < 6; i++) {
		moedas = (int)(valor / moedasDisponiveis[i]);
		if (moedas < 1) {
			printf("0 moeda(s) de R$ %.2lf\n", moedas, moedasDisponiveis[i]);
			continue;
		} 
		valor = valor - (moedas * moedasDisponiveis[i]); //corrigir arredondamento
		valor =  valor + 0.00001;

		printf("%d moeda(s) de R$ %.2lf\n", moedas, moedasDisponiveis[i]);
	}
}






