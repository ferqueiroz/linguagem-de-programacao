//Ex: 09 (numero primo)
#include <stdio.h>
#include <locale.h>

int primo (int num){
	if(num<=0){
		return 0;
	} 
	return verifica(num, num -1);
}

int verifica(int num,int div){
	if(div==1){
		return 1;
	}
	if(num%div==0){
		return 0;
	}
	return verifica(num,div-1);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	if(primo(num)){
		printf("Este número é primo.\n");
	} else {
		printf("Este número não é primo.\n");
	}
	return 0;
}
