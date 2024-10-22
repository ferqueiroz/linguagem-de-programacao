// Ex: 04 (remover caracteres)
#include <stdio.h>
#include <string.h>
char s[50];
void procura(char* s){
	int x,y,c=0;
	for(x = 0; x < strlen(s); x++){ // aqui ele vai passando caracter por caracter
		for(y = 0; y < strlen(s); y++){ // ele vai ficar passando por toda a string
			if(s[x] == s[y] && x != y){
				s[y] = ' ';
				c++;
			}
		}
		if(c > 0) s[x] = ' ';
		c = 0;
	}
}
//------------------------------------------------------------------------------------------
int main(){
	printf("String: ");
	gets(s);
	procura(s);
	printf("\n\n String nova: %s\n",s);
	return 0;
}
