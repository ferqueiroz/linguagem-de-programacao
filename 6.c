// Ex: 06 (mostra a frase invertida)
#include <stdio.h>
#include <string.h>
int main(){
	char s[20],inverta[20];
	int x,i;
	printf("Frase: ");
	gets(s);
	i = 0;
	for(x = strlen(s)-1;x >= 0;x--){
		inverta[x] = s[i];
		i++;
	}
	printf(" %s",inverta);
	return 0;
}
