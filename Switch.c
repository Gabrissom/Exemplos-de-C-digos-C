#include <stdio.h>
int main() {
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();
    switch( ch ) {
        case '.':
            printf("Ponto.\n"); break;
        case ',':
            printf("Virgula.\n"); break;
        case ':':
        	printf("Dois pontos.\n"); break;
        case ';':
        	printf("Ponto e virgula.\n"); break;
        default :
        	printf("N�o eh pontuacao.\n"); 
        	
    }
    return 0;
}




}
