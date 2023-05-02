// Reimplemente o programa da questão anterior utilizando a função qsort() do C.
// Comente o seu código, explicando o que faz cada uma das linhas

#include <stdio.h>
#include <stdlib.h>

// Função necessaria que é chamada pela qsort() para comparar os valores
int compara(const void *a, const void *b) {
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

    qsort(valores, n, sizeof(float), compara); // ordenar os valores em ordem crescente usando a função qsort()

    printf("Valores em ordem crescente:\n"); // percorre e imprime os valores do array com uma casa decimal
    for (int i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }
    
    free(valores); // liberar a memória alocada

    return 0;
}