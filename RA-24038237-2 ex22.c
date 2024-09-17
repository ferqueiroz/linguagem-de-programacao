//EX: 22 (temperaturas)
#include <stdio.h>
#include <locale.h>
void cpf(float celsius) {
    printf("%.2f graus Fahrenheit.\n", (celsius * 9.0 / 5.0) + 32.0);
}
void fpc(float fahrenheit) {
    printf("%.2f graus Celsius.\n", (fahrenheit - 32.0) * 5.0 / 9.0);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    int opcao;
    float temperatura;

    printf("Escolha uma opção:\n");
    printf("\n");
    printf("1. Converter Celsius para Fahrenheit\n");
    printf("2. Converter Fahrenheit para Celsius\n");
    printf("\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {

        printf("Digite a temperatura em graus Celsius: ");
        scanf("%f", &temperatura);
        cpf(temperatura);
    } else if (opcao == 2) {
        printf("Digite a temperatura em graus Fahrenheit: ");
        scanf("%f", &temperatura);
        fpc(temperatura);
    } else printf("Opção inválida! Por favor, escolha 1 ou 2.\n");
    
    return 0;
}
