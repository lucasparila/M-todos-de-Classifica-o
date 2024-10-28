#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

void partition(int x[], int lb, int ub, int *j, double *a, double *b);

void intercala(int colecao[], int inicio, int fim, int meio, int TAM, double *a, double *b);

void merge(int colecao[], int inicio, int fim, double *, double *);

void quicksort(int x[], int lb, int ub, double *, double *);

void insert_sort(int colecao[], int tamanho);

void selection_sort(int colecao[], int tamanho);

void bubble_sort(int colecao[], int tamanho);

void copia_vetor(int origem[], int destino[], int n);