#include <stdio.h>
int main(){
	int i;
	i = 1;
	do{
		printf("%d", i);
		i = i + i; // ou 'i++'
	} while (i<=5);
	
return(0);
}
