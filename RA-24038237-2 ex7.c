//Ex: 07 (sistema de login)
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int opcao(){
	int esc;
	printf("Escolha a op��o: \n");
	printf("\n");
	printf("1 - Cadastrar-se\n");
	printf("2 - Login\n");
	printf("\n");
	printf("Op��o: ");
	scanf("%d",&esc);
	return esc;	
}
int main(){
	setlocale(LC_ALL,"portuguese");
	char cusuario[16],csenha[20],usuario[16],senha[20];
	int esc;
	cusuario[0]='\0';
	csenha[0]='\0';
	esc=opcao();
	if(esc == 1){
		system("cls");
		printf("Casdastro:\n");
		printf("\n");
		printf("Nome de usu�rio: ");
		scanf("%s",&cusuario);
		printf("\n");
		printf("Senha: ");
		scanf("%s",&csenha);
		printf("\n");
		system("cls");
		printf("Cadastrado com sucesso.");
		Sleep(1000);
		system("cls");
		esc=opcao();
	} 
	if (esc==2){
		system("cls");
		printf("Login:\n");
		printf("\n");
		printf("Nome do usu�rio: ");
		scanf("%s",&usuario);
		printf("\n");
		printf("Senha: ");
		scanf("%s",&senha);
		if(strcmp(cusuario,"")==0 && strcmp(csenha,"")==0){
			printf("\n");
			printf("Cadastro n�o feito!");
		} else if(strcmp(usuario,cusuario)==0 && strcmp(senha,csenha)==0){
			system("cls");
			printf("Acesso concedido.");
		} else{
			system("cls");
			printf("Acesso negado.");
		}
	}
	return 0;
}
