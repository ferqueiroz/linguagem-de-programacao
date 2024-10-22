// Ex: 05 (contar palavras)
#include <stdio.h>
#include <string.h>
char palavra[25][50];
int z=0;
void palavras(char* s){
	char p[50];
	int x=0, y=0;
	while (x <= strlen(s)){
		if(s[x] == ' ' || s[x] == '\0'){
			p[y] = '\0';
			strcpy(palavra[z],p);
			z++;
			y = 0;
		} else {
			p[y] = s[x];
			y++;
		}
		x++;
	}
}
//--------------------------------------------------------------------------------------------------
int main(){
	char s[50];
	printf("Frase: ");
	gets(s);
	palavras(s);
	printf("\nPalavras: %d\n",z);
	return 0;
}
