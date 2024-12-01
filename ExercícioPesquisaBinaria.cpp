#include <stdio.h>

int pesquisaBinaria (int v[], int lista, int item){
	int chute;
	
	int baixo = 0;
	int alto = lista - 1; 
	
	while (baixo <= alto){
		int meio = (baixo + alto) / 2;
		chute = v[meio];
		
		if (chute == item){ 
		return meio; //se o chute for igual ao valor do item, o programa retorna o meio
		}
		
		if (chute > item){
			alto = meio - 1; //o chute foi mt alto, busca na metade esquerda
		}
		
		else{
			baixo = meio + 1; // o chute foi mt baixo
		}
	}
	
	return -1; //o chute não existe
	
}

int main (){
	int v[]= {1,2,3,4,5,6,7,8}; //lista ordenada
	int capacidade = 8;
	int valor;
	
	printf ("Digite o valor a ser encontrado: ");
	scanf("%d", &valor);
	
	int resultado = pesquisaBinaria (v, capacidade, valor);
	
	if (resultado != -1 ){
		printf("Valor %d encontrado no indice %d \n", valor, resultado);
	} else {
		 printf("Numero %d nao encontrado no vetor.\n",valor);
	}
}

