// 2) Usar o 'Typedef' no exerc�cio 1

#include <stdio.h>
struct cadastro{
	char nome[50];
	int idade;
	char rua[50];
	int numero;

};

typedef struct cadastro CadAlunos;



int main(){
	CadAlunos c[1];
	int i;

	for (i=0; i<1; i++) {
	
		
		printf("Nome do usu�rio: ");
		scanf("%s", c[i].nome);
		printf("Idade do usu�rio: ");
		scanf("%d", &c[i].idade);
		printf("Endere�o da rua: ");
		scanf("%s", c[i].rua);
		printf("N�mero da Rua: \n");
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
