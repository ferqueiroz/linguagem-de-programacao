//EX: 13 (sistema de pontos pra funcionarios)
#include <stdio.h>
#include <locale.h>

int funcionarios(int f,int x){
	int pontos;
	if(f==0) return 0;
	printf("Quantos pontos o funcionário %d tem(0 a 10): ",x);
	scanf("%d",&pontos);
	if(pontos<3) printf("Ganhou um bis!!!\n"), printf("\n");
	else if(pontos>=3 && pontos<=5) printf("Ganhou um chocolate!!!\n"), printf("\n");
	else if(pontos>5 && pontos<=8) printf("Ganhou uma caixa de bombom!!!\n"), printf("\n");
	else if(pontos>8 && pontos<=10) printf("Ganhou um aumento de 5 por cento!!!\n"), printf("\n");
	else {
		printf("Deve ser entre entre 0 e 10.\n");
		return funcionarios(f, x);
	}
	return funcionarios(f-1,x+1);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int f, x;
	printf("Quantos funcionarios são: ");
	scanf("%d",&f);
	printf("\n");
	funcionarios(f,x=1);
	return 0;
}
