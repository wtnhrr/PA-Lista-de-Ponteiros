// O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
// escreva um pequeno programa exemplificando o uso deste recurso

// Um ponteiro para uma função é uma variável que armazena o endereço de uma função em memória.
// Isso permite que o programa acesse e execute a função de forma dinâmica em tempo de execução

#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int (*operacao)(int, int);
    int a = 10, b = 5;
    char adicao = '+';


    if (adicao == '+')
    {
        operacao = soma;
    }
    else
    {
        printf("Operação inválida.\n");
        return 1;
    }

    int result = operacao(a, b);
    printf("Resultado: %d\n", result);

    return 0;
}