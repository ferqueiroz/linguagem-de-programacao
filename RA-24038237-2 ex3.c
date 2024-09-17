//Ex: 03 (Aumento do funcionario de acordo com a avaliação)
#include <stdio.h>
#include <locale.h>
	
float aumento(char esc,float sal){
	if(esc == 'A' || esc == 'a'){
		return sal*1.15;
	} else if(esc == 'B' || esc == 'b'){
	return sal*1.10;
	} else if(esc == 'C' || esc == 'c'){
		return sal*1.05;
	}
}
	
int main(){
	setlocale(LC_ALL,"portuguese");
	char esc;
	float sal;
	printf("Salario do funcionario: ");
	scanf(" %f",&sal);
	printf("Avaliação do Funcionario\n");
	printf("\n");
	printf("A - 10/10\n");
	printf("B - 08/10\n");
	printf("C - 05/10\n");
	printf("\n");
	printf("Opção: ");
	scanf(" %c",&esc);
	printf("\n");
	printf("Novo salário: %2.f",aumento(esc,sal));
	return 0;
}
