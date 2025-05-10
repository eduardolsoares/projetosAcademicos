#include <stdio.h>

int main() {
    double valor;
    int notasDisponiveis[6] = {100, 50, 20, 10, 5, 2};
    double moedasDisponiveis[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int notas[6] = {0};
    int moedas[6] = {0};

    scanf("%lf", &valor);

    //notasDisponiveis
    for (int i = 0; i < 6; i++) {
        notas[i] = (int)(valor / notasDisponiveis[i]);
        valor = valor - (notas[i] * notasDisponiveis[i]); // remover valor já calculado
    }

    //moedasDisponiveis
    for (int i = 0; i < 6; i++) {
        moedas[i] = (int)(valor / moedasDisponiveis[i]);
        valor = valor - (moedas[i] * moedasDisponiveis[i]);
        valor = valor + 0.00001; //correção de arrendondamento, sem isso, não identifica no final as moedas necessárias
    }

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2f\n", notas[i], (float)notasDisponiveis[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2f\n", moedas[i], moedasDisponiveis[i]);
    }

    return 0;
}