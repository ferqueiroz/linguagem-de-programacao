//EX: 20 (ano bisexto)
#include <stdio.h>
#include <locale.h>

int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) return 1;
	else return 0;
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int ano;
	printf("Digite um ano: ");
    scanf("%d", &ano);
    printf("\n");
     if (bissexto(ano)) {
        printf("É bissexto.\n");
    } else {
        printf("Não é bissexto.\n");
    }
    return 0;
}
