// Ex: 07 (trocar os caracteres)
#include <stdio.h>
#include <string.h>
int main(){
	char s[50],frase[50];
	int x;
	printf("String: ");
	gets(s);
	for(x = 0; x< strlen(s);x++){
		if(s[x] == 'a'){
			s[x] = '1';
		} else if( s[x] == 'e'){
			s[x] = '2';
		}else if( s[x] == 'i'){
			s[x] = '3';
		}else if( s[x] == 'o'){
			s[x] = '4';
		}else if( s[x] == 'u'){
			s[x] = '5';
		}
	}
	printf("%s",s);
	return 0;
}
