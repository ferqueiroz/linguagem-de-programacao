// Ex: 01 (remover espaços)
#include <stdio.h>
#include <string.h>
char frase[50];
void tiraespaco(char* s){
	int x=0, i=0;
	char palavra[50];
	while (s[x] != '\0'){
		if(s[x] != ' ' && s[x] != '\0'){
			frase[i] = s[x];
			i++;
		}
		x++;
	}
	frase[i] = '\0';
}
//-------------------------------------------------------------------
int main(){
	char s[50];
	printf("Frase: ");
	gets(s);
	tiraespaco(s);
	printf("\n%s", frase);
	return 0;
}
