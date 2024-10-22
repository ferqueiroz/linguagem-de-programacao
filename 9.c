// Ex: 09 (transformar em maiusculo ou minusculo)
#include <stdio.h>
#include <string.h>
void maiusc(char* s){
	int x;
	for (x = 0; x < strlen(s); x++) {
        if (s[x] >= 'a' && s[x] <= 'z') {
            s[x] = s[x] - 32;
        }
    }
    printf("\nFrase: %s",s);
}
//-------------------------------------------------------------------
void minusc(char* s){
	int x;
	for (x = 0; x < strlen(s); x++) {
        if (s[x] >= 'A' && s[x] <= 'Z') {
            s[x] = s[x] + 32;
        }
    }
    printf("\n\nFrase: %s",s);
}
//-------------------------------------------------------------------
int main(){
	char s[50];
	int op;
	printf("Frase: ");
	gets(s);
	do{
	printf("\n\n1 - Transformar  em maiuscula\n");
	printf("2 - Transformar  em minuscula\n\n");
	printf("Opcao: ");
	scanf("%d",&op);
	if (op != 1 && op != 2) printf("Opcao invalida!");
	} while (op != 1 && op != 2);
	if(op == 1) maiusc(s);
	else if(op == 2) minusc(s);
	return 0;
}

