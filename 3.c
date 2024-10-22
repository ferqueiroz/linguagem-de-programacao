// Ex: 03 (prefix comum)
#include <stdio.h>
#include <string.h>
char palavra1[25][50];
char palavra2[25][50];
int z1 = 0 ,z2 = 0;

void palavras(char* s1, char* s2){
	char p[50];
	int x=0, y=0;
	
	while (x <= strlen(s1)){
		if(s1[x] == ' ' || s1[x] == '\0'){
			p[y] = '\0';
			strcpy(palavra1[z1],p);
			z1++;
			y = 0;
		} else {
			p[y] = s1[x];
			y++;
		}
		x++;
	}
	while (x <= strlen(s2)){
		if(s2[x] == ' ' || s2[x] == '\0'){
			p[y] = '\0';
			strcpy(palavra2[z2],p);
			z2++;
			y = 0;
		} else {
			p[y] = s2[x];
			y++;
		}
		x++;
	}
}
//---------------------------------------------------------------------------------------
void prefixo(){
	int x=0, y=0, i=0, c=0, n[25];
	char pre[25];
	
	for(y = 0; y < z1; y++){ // for das palavra da frase 2
		for(x = 0; x < z2; x++){ // for das palavra da frase 1
			if(palavra1[x][0] == palavra2[y][0]){
				if(palavra1[x][0] != pre[c]){
				pre[c] = palavra2[y][0];
				c++;
				i++;
				} else{
					i++;
				}
			}
		}  // p1
		n[c] = i;
		i=0;
	} // p2
	
	for(x = 0; x < c; x++){
		printf("Prefixo: %c = %d",pre[x], n[x]);
	}
}
//---------------------------------------------------------------------------------------
int main(){
	char s1[50],s2[50];
	int x;
	printf("Sting 1: ");
	gets(s1);
	printf("Sting 2: ");
	gets(s2);
	palavras(s1,s2);
	prefixo();
	return 0;
}
