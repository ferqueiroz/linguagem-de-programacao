//EX: 12 (aluguel de carro)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int menu(){
	int esc;
	system("cls");
	printf("Menu:\n");
	printf("1 - Pagar\n");
	printf("2 - Consultar preços\n");
	printf("\n");
	printf("Opção: ");
	scanf("%d",&esc);
	printf("\n");
	return esc;
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int esc;
	float km;
	
	esc=menu();
	if(esc==2){
		system("cls");
		printf("Preços:\n");
		printf("Preço fixo - R$50,00\n");
		printf("Taxa de km rodado - R$5,00(p/km)\n");
		printf("Envie algum número para voltar... ");
		scanf("%d",&esc);
		esc=menu();
	} 
	if(esc==1){
		system("cls");
		printf("Km rodado: \n");
		scanf("%f",&km);
		printf("Valor a pagar: R$%.2f",(5*km)+50);
	} else if (esc != 1 && esc != 2) printf("Essa opção não existe.");
	
	return 0;
}
