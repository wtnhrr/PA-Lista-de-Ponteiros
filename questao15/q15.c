// Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
// de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
// a função de comparação.

#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação crescente de inteiros
int compara_f(const void *a, const void *b) {
    float *x = (float *) a;
    float *y = (float *) b;
    if (*x < *y) {  // retorna numero negativo se o primeiro elemento for menor que o segundo
        return -1;
    } else if (*x > *y) {
        return 1;   // retorna numero positivo se o primeiro elemento for menor que o segundo
    } else {        // se são iguais, retorna 0
        return 0;
    }
}

// Função de ordenação que recebe um ponteiro para o array que sera ordenado, um inteiro indicando o numero de elementos, o
// tamanho de cada elemento, e ponteiro para comparação
void ordena(void *array, int n, size_t tamanho_elemento, int (*compara)(const void *, const void *)) {
    qsort(array, n, tamanho_elemento, compara);
}

int main() {

    int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    float *valores = (float *) malloc(n * sizeof(float)); // alocação dinâmica de memória para o array de valores
    if (valores == NULL) {
        printf("Erro ao alocar memoria.");
        exit(1);
    }

    printf("Digite os %d valores:\n", n); // preencher os valores 'n' do tipo float e armazena-los em um array 'valores'
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    ordena(valores, n, sizeof(int), compara_f); // chama a função nova, 'ordena'

    printf("Valores em ordem crescente:\n"); // percorre e imprime os valores do array com uma casa decimal
    for (int i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }
    
    free(valores); // liberar a memória alocada

    return 0;
}
