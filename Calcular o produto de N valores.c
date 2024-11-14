#include <stdio.h>
int main(){
	int num;
	int n;
	int i = 0;
	int prod = 1;
	int v;
	
	printf("Digite o número de variáveis: "); // variável n
	scanf("%d", &n); // '%d' para variáveis int
	while(i<n) {
		scanf("%d", &v);
		prod*= v;
		i = i + 1;
	}
	
	printf("O produto eh: %d\n", prod); // '/n' é para quebra de linha no 'printf()'
	
	return(0);
}
