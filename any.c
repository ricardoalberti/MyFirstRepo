#include<stdio.h>
#define MAXCHAR 5

int any(char s1[], char s2[])
{
	int i, n= 0;
	while(s1[i] != '\0'){
		while(s2[n] != '\0'){
			if(s1[i] == s2[n]){
				return i;
			}
			n++;
		}
		n= 0;
		i++;
	}
	return -1;
}

main(){

//char s1[MAXCHAR] = '0','1','8','a','5';

char s1[MAXCHAR] = {'a','e','3','4'};
char s2[MAXCHAR] = {'b','v','3'};
int n1 = 0;

n1 = any(s1,s2);

printf("posicao: %d \n", n1);
return 0;
}
