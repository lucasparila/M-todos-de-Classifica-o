#include "lib.h"
#define TAMANHO 100

int main(){

int vetor_original[TAMANHO];
int vetor_auxiliar[TAMANHO];
clock_t start, end;
double time;

 for (int i = 0; i < TAMANHO; i++) {
        vetor_original[i] = rand() % TAMANHO;  
    }

double comparacoes = 0, trocas = 0;
copia_vetor(vetor_original, vetor_auxiliar, TAMANHO);
start = clock();
merge(vetor_auxiliar, 0, TAMANHO-1, &comparacoes, &trocas);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("\nMERGE SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", comparacoes, trocas);
printf("Tempo de execução: %f segundos.\n", time);

copia_vetor(vetor_original, vetor_auxiliar, TAMANHO);
start = clock();
insert_sort(vetor_auxiliar, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %f segundos.\n", time);

copia_vetor(vetor_original, vetor_auxiliar, TAMANHO);
start = clock();
selection_sort(vetor_auxiliar, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %f segundos.\n", time);

copia_vetor(vetor_original, vetor_auxiliar, TAMANHO);
start = clock();
bubble_sort(vetor_auxiliar, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %f segundos.\n", time);

double conta_comp =0, conta_troca = 0;
copia_vetor(vetor_original, vetor_auxiliar, TAMANHO);
start = clock();
quicksort(vetor_auxiliar, 0, TAMANHO-1, &conta_comp, &conta_troca);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("\nQUICK SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", conta_comp, conta_troca);
printf("Tempo de execução: %f segundos.\n", time);

    return 0;
}