//Eduardo Leite Soares - 22508340
#include <stdio.h>
#include <stdlib.h>
int main() {
double A, B, C;
scanf("%lf %lf %lf", &A, &B, &C);
int inRange = (0 < A  && 10 >= A) && (0 < B && 10 >= B) && (0 < C  && 10 >= C);
if (!inRange) {
printf("Algum dos números não está no intervalo correto.");
exit(0);
}
double notaTotal = ((A * 2) + (B * 3) + (C * 5))/(2 + 3 + 5);
printf("MEDIA = %2.1f\n", notaTotal);
return 0;
