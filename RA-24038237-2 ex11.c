//EX: 11 (triangulo equilatero, is�sceles ou escaleno)
#include <stdio.h>
#include <locale.h>

float triangulo(float b, float l1, float l2){
	if(b==l1 && b==l2) return printf("Seu triangulo � equil�tero.");
	else if(l1==l2) return printf("Seu triangulo � is�sceles.");
	else return printf("Seu triangulo � escaleno.");
}

int main(){
	setlocale(LC_ALL,"portuguese");
	float b,l1,l2;
	
	printf("Base do triangulo: ");
	scanf("%f",&b);
	printf("\n");
	
	printf("Lado direito: ");
	scanf("%f",&l2);
	printf("\n");
	
	printf("Lado esquerdo: ");
	scanf("%f",&l1);
	printf("\n");
	
	triangulo(b,l1,l2);
	return 0;
}
