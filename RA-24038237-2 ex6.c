//Ex: 06 (Estoque da loja)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float opcao(int escolha, int quantidade){
	float desconto;
	switch (escolha){
		case 1:
			if(quantidade>=10){
				desconto = (50*quantidade)*0.20;
				return (50*quantidade)-desconto;
			} else return 50*quantidade;
			break;
		case 2:
			if(quantidade>=5){
				desconto = (40*quantidade)*0.10;
				return (40*quantidade)-desconto;
			} else return 40*quantidade;
			break;
		case 3:
			if(quantidade>=3){
				desconto = (70*quantidade)*0.10;
				return (70*quantidade)-desconto;
			} else return 70*quantidade;
			break;
		default:
			return 0;
			break;
	}
}


int main(){
	setlocale(LC_ALL,"portuguese");
	int esc,qnt;
	char esc2;
	printf("LOJA:\n");
	printf("\n");
	printf("1 - Camiseta R$50,00\n");
	printf("2 - Calça R$40,00\n");
	printf("3 - Tenis R$70,00\n");
	printf("4 - Nossos descontos\n");
	printf("\n");
	printf("Opção: ");
	scanf("%d",&esc);
	
	if(esc == 4){
		system("cls");
		printf("Descontos:\n");
		printf("\n");
		printf("Camisetas - 10 ou mais, ganha 20 por cento de desconto.\n");
		printf("Calças - 5 ou mais, ganha 10 por cento de desconto.\n");
		printf("Tenis - 3 ou mais ganha 10 por cento de desconto.\n");
		printf("\n");
		printf("Envie qualquer tecla para sair.\n");
		scanf(" %c",&esc2);
		system("cls");
		printf("LOJA:\n");
		printf("\n");
		printf("1 - Camiseta R$50,00\n");
		printf("2 - Calça R$40,00\n");
		printf("3 - Tenis R$70,00\n");
		printf("4 - Nossos descontos\n");
		printf("\n");
		printf("Opção: ");
		scanf("%d",&esc);
	}
	
	printf("\n");
	printf("Quantidade do produto: ");
	scanf("%d",&qnt);
	if(opcao(esc,qnt)>0){
		printf("\n");
		printf("Total a ser pago: R$%.2f\n",opcao(esc,qnt));
	} else{
		printf("\n");
		printf("Produto invalido.\n");
	}
	
	return 0;
}
