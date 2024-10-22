// Ex: 02 (comparar strings)
#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("String 1: ");
	gets(s1);
	printf("String 2: ");
	gets(s2);
	if(strcmp(s1,s2) == 0) printf("\nString's iguais.\n");
	else printf("\nString's diferentes.\n");
	return 0;
}
