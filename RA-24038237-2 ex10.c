//Ex: 10 (notas da escola)
#include <stdio.h>
#include <locale.h>
float pergunta(int a){
	float media,nota;
	if(a!=0){
		printf("Nota: ");
		scanf("%f",&nota);
		printf("\n");
		pergunta(a-1);
		return media+nota;;
	}
}
int main(){
	setlocale(LC_ALL,"portuguese");
	int alunos;
	float media=0;
	printf("Quantos Alunos tem na sala: ");
	scanf("%d",&alunos);
	printf("\n");
	media=media+pergunta(alunos);
	
	if (media <= 4){
		printf("\n");
		printf("Média: %.2f\n",media/alunos);
		printf("Resultado: Reprovados\n");
	} else if(media>=5 && media<=6){
		printf("\n");
		printf("Média: %.2f\n",media/alunos);
		printf("Resultado: Recuperação\n");
	} else {
		printf("\n");
		printf("Média: %.2f\n",media/alunos);
		printf("Resultado: Aprovados\n");
	}
	
	return 0;
}
