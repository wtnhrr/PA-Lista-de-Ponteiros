// Implemente em linguagem C uma função em um programa de computador que leia n valores do
// tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
// realizar a tarefa.

#include <stdio.h>
#include <stdlib.h>

void ordem_crescente(int n) {                                   // função que recebe como parametro a quantidade 'n' de valores a serem lidos
    float *valores = (float *) malloc(n * sizeof(float));       // alocação dinamica de memoria para um array de 'n' valores do tipo float
    if (valores == NULL) {                                      // verifica se a alocação de memoria foi bem sucedida, 'malloc' retorna 'NULL' se a alocação falhar
        printf("Erro ao alocar memoria.");
        exit(1);
    }
    
    printf("Digite os %d valores:\n", n);                       // preencher os valores 'n' do tipo float e armazena-los em um array 'valores'
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {                           // laço 'for' percorre o array da primeira até penultima posição, e seleciona um valor para ser comparado
        for (int j = i + 1; j < n; j++) {                       // segundo laço 'for' percorre o array a partir da segunda posição até a ultima
            if (valores[i] > valores[j]) {                      // verifica se o primeiro valor é maior que o segundo, se verdade há troca com ajuda da variavel temp
                float temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }
    
    printf("Valores em ordem crescente:\n");                    // percorre e imprime os valores do array com uma casa decimal
    for (int i = 0; i < n; i++) {
        printf("%.1f ", valores[i]);
    }
    
    free(valores);                                              // libera a memoria alocada
}

int main() {
    int n;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    ordem_crescente(n);

    return 0;
}