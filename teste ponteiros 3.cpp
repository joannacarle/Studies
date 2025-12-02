#include <stdio.h>

void teste(int *num){
	*num = *num *2;
}

int main (){
	int n;
	
	printf("digite um numero: ");
	scanf("%d", &n);
	
	teste(&n);
	
	printf("O dobro desse numero e: %d", n);
}
