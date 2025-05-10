//Eduardo Leite Soares, 22508340
#include <stdio.h>

int main() {
    int segundos, horas, minutos;
    scanf("%d", &segundos);


    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60; 
    segundos = segundos % 60;

    // formatação
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}



