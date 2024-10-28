#include "lib.h"
#define TAMANHO 1000000

int main(){

int vetor[TAMANHO];
clock_t start, end;
double time;

for (int i = 1; i < TAMANHO+1; i++){
    vetor[i-1] = i;
}

double comparacoes=0, trocas=0;
start = clock();
merge(vetor, 0, TAMANHO-1, &comparacoes, &trocas);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("\nMERGE SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", comparacoes, trocas);
printf("Tempo de execução: %.10f segundos.\n", time);

start = clock();
insert_sort(vetor, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %.10f segundos.\n", time);

start = clock();
selection_sort(vetor, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %.10f segundos.\n", time);

start = clock();
bubble_sort(vetor, TAMANHO);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("Tempo de execução: %.10f segundos.\n", time);

double conta_comp =0, conta_troca = 0;
start = clock();
quicksort(vetor, 0, TAMANHO-1, &conta_comp, &conta_troca);
end = clock();
time = ((double)(end - start) / CLOCKS_PER_SEC);
printf("\nQUICK SORT:\nNúmero de Comparações: %lf\nNúmero de Trocas: %lf\n", conta_comp, conta_troca);
printf("Tempo de execução: %.10f segundos.\n", time);

    return 0;
}