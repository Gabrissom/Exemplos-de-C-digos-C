#include <stdio.h>
int main(){
	int a;
	int b;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	while (a <= b){
		a = a + 1;
		if(a==5)
			continue; //testar com break e continue
		printf("%d \n", a);
		
		
	}	
return(0);	
}
