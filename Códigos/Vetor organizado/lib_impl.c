#include "lib.h"


void intercala(int colecao[], int inicio, int fim, int meio, int TAM, double * a, double * b){
	int pos_livre, inicio_arquivo1, inicio_arquivo2, i;
	int arquivo_aux[TAM];
	inicio_arquivo1 = inicio;
	inicio_arquivo2 = meio + 1;
	pos_livre = inicio;
	while(inicio_arquivo1 <= meio && inicio_arquivo2 <= fim){
		
		if(colecao[inicio_arquivo1] <= colecao[inicio_arquivo2]){
			arquivo_aux[pos_livre] = colecao[inicio_arquivo1];
			inicio_arquivo1 += 1;
		} 
		else
		{
			arquivo_aux[pos_livre] = colecao[inicio_arquivo2];
			inicio_arquivo2 += 1;
		}
		pos_livre += 1;
		* a += 1;
	}

	for(i=inicio_arquivo1; i<= meio; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
		
	}
	for(i=inicio_arquivo2; i<= fim; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
		
	}
	for(i=inicio; i <= fim; i++){
		colecao[i] = arquivo_aux[i];
		*b += 1;
	}

	 
}

void merge(int colecao[], int inicio, int fim, double *comparacoes, double *trocas){
    int meio;
	
	if(inicio < fim){
		meio = (inicio + fim) / 2;
		merge(colecao, inicio, meio, comparacoes, trocas);
		merge(colecao, meio+1, fim, comparacoes, trocas);
		intercala(colecao, inicio, fim, meio, fim+1, comparacoes, trocas);
	}
	
	
}


void insert_sort(int colecao[], int tamanho){
	
    double conta_troca = 0, conta_comp = 0;
	int i, j, elemento_auxiliar;
	for(i=1; i<tamanho; i++){
		elemento_auxiliar = colecao[i];
		
		for(j = i-1; j >= 0 && colecao[j] > elemento_auxiliar; j--){
			colecao[j+1] = colecao[j];
            conta_troca++;
		}
        conta_comp++;
		colecao[j+1] = elemento_auxiliar;
	}

    printf("\nINSERTION SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", conta_comp, conta_troca);
}

void selection_sort(int colecao[], int tamanho){
	int i, j, pos_menor, elemento_auxiliar;
    double conta_troca = 0, conta_comp = 0;
	
	for(i=0; i<tamanho; i++){
		pos_menor = i;
		for(j=i+1; j<tamanho; j++){
			if(colecao[j] < colecao[pos_menor]){
				pos_menor = j;
                conta_troca++;
			}
            conta_comp++;
		}
		elemento_auxiliar = colecao[i];
		colecao[i] = colecao[pos_menor];
		colecao[pos_menor] = elemento_auxiliar;
	}
    printf("\nSELECTION SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", conta_comp, conta_troca);
}

void bubble_sort(int colecao[], int tamanho){
    double conta_troca = 0, conta_comp = 0;
	int i, j, elemento_auxiliar;
	bool trocou = true;
	
	for(i=0; i<tamanho && trocou; i++){
		trocou = false;
		for(j=0; j < tamanho-(1+i); j++){
			if(colecao[j] > colecao[j+1]){
				elemento_auxiliar = colecao[j];
				colecao[j] = colecao[j+1];
				colecao[j+1] = elemento_auxiliar;
				trocou = true;
                conta_troca++;
			}
            conta_comp++;
		}		
	}

    printf("\nBUBBLE SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", conta_comp, conta_troca);
}
void partition(int x[], int lb, int ub, int *j, double *z, double *y){

    int a, down, up, temp;
  
    a = x[lb];

    up = ub;
    down = lb;

    while(down < up){
        while(x[down] <= a && down < ub){
            
            down++;
			*z += 1;
        }
        while(x[up] > a){
            
            up--;
			*z += 1;
        }
        if(down < up){
            temp = x[down];
            x[down] = x[up];
            x[up] = temp;
			*y += 1;
        }
    }
    x[lb] = x[up];
    x[up] = a;
    *j = up;
	*y += 1;
}

void quicksort(int x[], int lb, int ub, double *conta_comp, double *conta_troca){

    int j = -1;

    if(lb >= ub){
        return;
    }

    partition(x, lb, ub, &j, conta_comp, conta_troca);       

    quicksort(x, lb, j-1, conta_comp, conta_troca);          

    quicksort(x, j+1, ub, conta_comp, conta_troca);          

}



void copia_vetor(int origem[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}