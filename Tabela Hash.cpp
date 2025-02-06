#include <stdio.h>
#define TAM 31 //constante, não pode ser alterado

void inicializarTabela(int t[]){
	int i;
	
	for(i=0;i<TAM;i++){
		t[i]=0;
	}
}

int funcaoHash(int chave){
	return chave % TAM;	
}

void inserir(int t[], int valor){
	int id = funcaoHash (valor);
	while(t[id] != 0){
		id = funcaoHash(id + 1);
	}
	t[id]= valor;
}

int busca(int t[], int chave){
	int id = funcaoHash(chave);
	while(t[id] != 0){
		if(t[id]== chave){
			return t[id];
		} else {
			id = funcaoHash (id + 1);
		}
	}
	return 0;
}

void imprimir(int t[]){
	int i;
	for (i=0; i< TAM; i++){
		printf ("%d = %d\n", i, t[i]);
	}
}

int main (){
	
	int opcao, valor, retorno, tabela[TAM]; //tam. da tabela = 2*15=30~31
	inicializarTabela(tabela);
	
	
	do{
		printf ("\n\t0 = sair\n\t1 = inserir\n\t2 = buscar\n\t3 = imprimir\n");
		scanf("%d", &opcao);
		
		switch(opcao){
		case 1:
			printf("\tQual valor deseja inserir? ");
			scanf ("%d", &valor);
			inserir(tabela, valor);
		   break;
		case 2:
			printf("\tQual valor deseja buscar? ");
			scanf ("%d", &valor);
			retorno = busca (tabela, valor);
			if(retorno != 0){
				printf ("\tValor encontrado!: %d\n", retorno);
			} else {
				printf("\tValor não econtrado!\n");
			}
		   break;
		case 3:	
		    imprimir(tabela);
		    break;
		default:   
		   printf("opcaao invalida\n");      	
		}
	}while (opcao != 0);
	
	return 0;
}
