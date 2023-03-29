//Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
//foram obtidas as respostas esperadas).

#include <stdio.h>

int main()
{

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;                 // armazena o valor 10 na variável 'valor'
    p1 = &valor;                // armazena o endereço da variável 'valor' no ponteiro 'p1' 
    *p1 = 20;                   // armazena o valor 20 no espaço de memoria guardado por 'p1', alterando o numero armazenado da variavel 'valor'
    printf("%d \n", valor);     // imprime o valor armazenado na variavel 'valor'

    /* (b) */
    temp = 26.5;                // armazena o valor 26.5 na variavel 'temp'
    p2 = &temp;                 // armazena o endereço da variavel 'temp' no ponteiro 'p2'
    *p2 = 29.0;                 // armazena o valor 29.0 no espaço de memoria guardado por 'p2', alterando o numero armazenado da variavel 'temp'
    printf("%.1f \n", temp);    // imprime o valor armazenado na varivel 'temp' de ponto flutuante com uma casa decimal

    /* (c) */
    p3 = &nome[0];              // armazena o endereço do vetor 'nome[0]' no ponteiro 'p3'
    aux = *p3;                  // armazena o conteudo do ponteiro 'p3' na variavel 'aux'
    printf("%c \n", aux);       // %c imprime o valor da variavel em tipo 'char', que é 'p'

    /* (d) */
    p3 = &nome[4];              // armazena o endereço do vetor 'nome[4]' no ponteiro 'p3'
    aux = *p3;                  // armazena o conteudo do ponteiro 'p3' na variavel 'aux'
    printf("%c \n", aux);       // %c imprime o valor da variavel em tipo 'char', que é 'e'

    /* (e) */
    p3 = nome;                  // armazena o endereço do vetor 'nome' no ponteiro 'p3', porém como não foi especificado a posição, será então nome[0], que é 'p'.
    printf("%c \n", *p3);       // imprime valor armazenado que é 'p'

    /* (f) */
    p3 = p3 + 4;                // Alterando o valor de 'p3' somando 4 ao seu endereço de memória, sendo tipo char (1 byte)
    printf("%c \n", *p3);       // imprime o valor nome[4], que é 'e'

    /* (g) */
    p3--;                       // o endereço do ponteiro 'p3' ira deslocar 1 byte para traz sendo do tipo char
    printf("%c \n", *p3);       // imprime o valor nome[3], que é 't'

    /* (h) */
    vetor[0] = 31;              // armazena o valor '31' na posição 'vetor[0]'
    vetor[1] = 45;              // armazena o valor '45' na posição 'vetor[1]'
    vetor[2] = 27;              // armazena o valor '27' na posição 'vetor[2]'
    p4 = vetor;                 // o ponteiro 'p4' armazena o endereço do vetor 'vetor[0]'
    idade = *p4;                // armazena na variavel 'idade' o conteudo do endereço apontado por 'p4'
   printf("%d \n", idade);      // imprime o valor de 'idade', que é '31'

    /* (i) */
    p5 = p4 + 1;                // armazena em 'p5' o incremento de 'p4' em 1 byte, sendo agora 'vator[1]'
    idade = *p5;                // armazena na variavel 'idade' o conteudo apontado por 'p5', que é '45'
    printf("%d \n", idade);     // imprime o valor da varivel 'idade' que é '45'

    /* (j) */
    p4 = p5 + 1;                // armazena em 'p4' o endereçode 'p5' incrementado em um, que é vetor[2]
    idade = *p4;                // armazena na variavel 'idade' o conteudo apontado por 'p4', que é '27'
    printf("%d \n", idade);     // imprime o valor de 'idade', que é '27'

    /* (l) */
    p4 = p4 - 2;                // o endereço em 'p4' sera decrementado em 2 bytes, que fica 'vetor[0]'
    idade = *p4;                // armazena na variavel 'idade' o conteudo apontado por 'p4', que é '31'
    printf("%d \n", idade);     // imprime o valor de 'idade', que é '31'

    /* (m) */
    p5 = &vetor[2] - 1;         // armazena o endereço do 'vetor[2]' decrementado em um, que fica '&vetor[1]'
    printf("%d \n", *p5);       // imprime o conteudo do ponteiro 'p5', que é '45'
    
    /* (n) */
    p5++;                       // incrementa o endereço do ponteiro 'p5' em um, que fica 'vetor[3]'
    printf("%d \n", *p5);       // imprime o conteudo do ponteiro 'p5', que é '27'
    
    return 0;
}