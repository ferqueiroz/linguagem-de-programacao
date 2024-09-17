//Ex: 08 (consumo de gasolina)
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int km;
	float cons,gaso;
	printf("Distância percorrida(km): ");
	scanf("%d",&km);
	printf("Consumo médio do veiculo(km/L): ");
	scanf("%f",&cons);
	printf("Preço da gasolina(Litro): ");
	scanf("%f",&gaso);
	printf("\n");
	printf("Custo total da viagem: R$%.2f\n",(km/cons)*gaso);
	return 0;
}
