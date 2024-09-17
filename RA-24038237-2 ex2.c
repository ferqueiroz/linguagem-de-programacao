//Ex: 02 (Caixa eletronico)
#include <stdio.h>
#include <locale.h>

int main(){
	float valor,r;
	int n,n100, n50, n20, n10, n5;
	setlocale(LC_ALL,"portuguese");
	printf("Valor a ser pago: ");
	scanf("%f",&valor);
	n=valor;
	r=valor-n;
	
	n100=n/100;
	n=n%100;
	
	n50=n/50;
	n=n%50;
	
	n20=n/20;
	n=n%20;
	
	n10=n/10;
	n=n%10;
	
	n5=n/5;
	n=n%5;
	
	printf("Troco:\n");
	printf("R$100: %d\n",n100);
	printf("R$50: %d\n",n50);
	printf("R$20: %d\n",n20);
	printf("R$10: %d\n",n10);
	printf("R$5: %d\n",n5);
	printf("Restante: %.2f",n+r);
	return 0;
}
