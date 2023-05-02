// Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
// outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
// se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3,
// 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4
// argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor

#include <stdio.h>

// função para soma de vetores com 4 argumentos, sendo ponteiro para vetor 1 e 2, ponteiro para o vetor soma para armazenar o resultado
// e variavel tam com o tamanho dos vetores
void soma_vetores(int *vet1, int *vet2, int *vet_soma, int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        vet_soma[i] = vet1[i] + vet2[i];
    }
}

int main() {
    int tam, i; 

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tam);

    int vet1[tam], vet2[tam], vet_soma[tam];

    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet2[i]);
    }

    soma_vetores(vet1, vet2, vet_soma, tam);

    printf("Vetor de soma: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vet_soma[i]);
    }
    printf("\n");

    return 0;
}