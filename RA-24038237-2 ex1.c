//Ex: 01 (Dos descontos conforme o valor)
#include <stdio.h>
#include <locale.h>
float desconto(float din){
	if(din<100) {
	return din;
	} else if (din>=100 && din<500){
		return din-((din*10)/100);
	} else if(din>=500){
		return din-((din*20)/100);
	}
}
int main(){
	setlocale(LC_ALL,"portuguese");
	float valor;
	printf("Valor da compra: ");
	scanf("%f",&valor);
	printf("Valor a ser pago: %.2f",desconto(valor));
	return 0;
}
