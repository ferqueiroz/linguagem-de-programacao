//Ex: 05 (numero aleatorio e c � maior ou menor)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n,aleatorio;
	setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	aleatorio = rand()%100;
// come�o	
	printf("Advinhe o n�mero de 0 a 100 (Voc� tem 10 tentativas): ");
	scanf("%d",&n);
	
// 1
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 10 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
	if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 10 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 10 tentativas): ");
		scanf("%d",&n);
	}
// 2
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 9 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else	
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 9 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 9 tentativas): ");
		scanf("%d",&n);
	}
// 3
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 8 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 8 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 8 tentativas): ");
		scanf("%d",&n);
	}
// 4
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 7 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 7 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 7 tentativas): ");
		scanf("%d",&n);
	}
// 5
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 6 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 6 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 6 tentativas): ");
		scanf("%d",&n);
	}
	
// 6
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 5 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 5 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 5 tentativas): ");
	}

// 7
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 4 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 4 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 4 tentativas): ");
		scanf("%d",&n);
	}
	
// 8
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 3 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 3 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 3 tentativas): ");
		scanf("%d",&n);
	}
	
// 9
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 2 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 2 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 2 tentativas): ");
		scanf("%d",&n);
	}
	
// 10
    if(n<0 || n>100){
		printf("Tem que ser entre 0 e 100.\n");
		printf("\n");
		printf("Advinhe o n�mero de 0 a 100 (Voc� tem 1 tentativas): ");
		scanf("%d",&n);
	} else
	if(n==aleatorio){
		printf("Voc� acertou o n�mero!!");
		return 0;
	} else 
		if(n>aleatorio){
		printf("Este n�mero � maior do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 1 tentativas): ");
		scanf("%d",&n);
	} else {
		printf("Este n�mero � menor do que o gerado.\n");
		printf("\n");
		printf("N�mero (Voc� tem 1 tentativas): ");
		scanf("%d",&n);
	}
// caso acabe
	printf("Esgotou suas chances.");
	return 0;
}
