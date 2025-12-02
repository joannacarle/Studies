#include <stdio.h>

void dobrar (int *p){
	*p = *p*2;
}

int main (){
	int x;
	
	printf("Insira um valor: ");
	scanf("%d", &x);
	
	dobrar(&x);
	
	printf("o dobro do valor inserido eh %d", x);
}		 

