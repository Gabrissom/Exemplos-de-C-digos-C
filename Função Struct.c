// 1) -Criar struct cadastro
// 	  -Criar um vetor de cadastros de tamanho 3
//	  -Ler o nome e a idade de 3 pessas
//	  -Imprime o nome e a idade das 3 pessoas



#include <stdio.h>
struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;

};

int main(){
	struct cadastro c[1];
	int i;

	for (i=0; i<1; i++) {
	
		
		printf("Nome do usuário: ");
		scanf("%s", c[i].nome);
		printf("Idade do usuário: ");
		scanf("%d", &c[i].idade);
		printf("Endereço da rua: ");
		scanf("%s", c[i].rua);
		printf("Número da Rua: \n");
		scanf("%d", &c[i].numero);
	}
	
	for (i=0; i<1; i++){
	
	printf("\n Dados do cadastro:\n");
	printf("Nome: %s\n", c[i].nome);
	printf("Idade: %d\n", c[i].idade);
	printf("Rua: %s\n", c[i].rua);
	printf("Numero: %d\n", c[i].numero);
	}

return(0);
}
