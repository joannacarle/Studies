#include <stdio.h>

int particiona(int *v, int inicio, int fim){
    int pivo = (v[inicio] + v[fim] + v[(inicio+fim)/2])/3;	
    while (inicio < fim){
    	while(inicio < fim && v[inicio] <= pivo){
    		inicio = inicio + 1;
		}
    	while (inicio < fim && v[fim] > pivo){
    		fim = fim -1;
		}
		int aux = v[inicio];
		v[inicio] = v[fim];
		v[fim] = aux; 
	}
	return inicio;
}

void quicksort(int *v, int inicio, int fim){
	if (inicio < fim){
	 int posicao = particiona(v, inicio, fim);	
     quicksort(v, inicio, posicao-1);//parte esquerda
	 quicksort (v,posicao, fim);	//parte direita
	}
}

void imprimir (int *v, int tamanho){
	int i; 
	for (i=0; i<= tamanho; i++){
		printf("%d, ", v[i]);
	}
	printf("\n");
}



int main(){
	int vet[]= {47, 35, 12, 49, 56, 25, 71, 83, 5, 3, 1 , 70, 99, 10, 61};
	imprimir(vet,14);
	quicksort(vet, 0, 14);
	imprimir (vet,14);
	
	return 0;
}

