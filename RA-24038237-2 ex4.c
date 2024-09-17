//Ex: 04 (Quadrado perfeito)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int quadrado(int num) {
    if (num < 0) {
    	return 0;
    }
    int raiz = sqrt(num);
    return (raiz * raiz == num);
}

int main() {
    int n;
    setlocale(LC_ALL,"portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    if (quadrado(n)) {
        printf("Este n�mero � um quadrado perfeito.");
    } else {
        printf("Este n�mero n�o � um quadrado perfeito.");
    }
    return 0;
}
