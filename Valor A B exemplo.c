#include <stdio.h>
int main(){
	int a;
	int b;

	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	while (a<=b){	
		printf("%d \n", a);
		a = a + 1;
	}
return (0);	
}
