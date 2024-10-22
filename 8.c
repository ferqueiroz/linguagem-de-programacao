// Ex: 08 (procurar substring em uma string)
#include <stdio.h>
#include <string.h>
int procura(char* s,char* ss){
	char palavra[50];
	int x=0,i=0,qnt=0;
while (x <= strlen(s)) {
        if (s[x] == ' ' || s[x] == '\0') {
            palavra[i] = '\0';
            if (strcmp(palavra, ss) == 0) {
            	qnt++;
            }
            i = 0;
        } else {
            palavra[i] = s[x];
            i++;
        }
        x++;
    }
    if (qnt > 0) return qnt;
    else return 0;
}
//-------------------------------------------------------------------
int main(){
	char s[50],ss[50];
	printf("Frase: ");
	gets(s);
	printf("\nQual palavra deseja achar?\n");
	scanf("%s",ss);
	if(procura(s,ss) == 1) printf("\n1 palavra encontrada.");
	else if (procura(s,ss) >= 0)printf("\n%d palavras encontradas.",procura(s,ss));
	return 0;
}
