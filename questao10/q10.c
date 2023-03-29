// Implemente um programa de computador para testar estas suposições e compare as respostas
// oferecidas pelo programa com as respostas que você idealizou.

int main(){

    char x[4];              

    printf("%d\n", x);
    printf("%d\n", x+1);
    printf("%d\n", x+2);
    printf("%d\n", x+3);
    // aqui tipo 'char' tem 1 byte, e cada incremento pula 1 byte
    printf("-----------------------------------------------\n");

    short int y[4];

    printf("%d\n", y);
    printf("%d\n", y+1);
    printf("%d\n", y+2);
    printf("%d\n", y+3);
    // aqui tipo 'short int' tem 2 byte, e cada incremento pula 2 byte
    // 'short int' foi usado para ser igual ao enunciado da questao anterior, visto que 'int' tem 4 bytes
    printf("-----------------------------------------------\n");

    float z[4];

    printf("%d\n", z);
    printf("%d\n", z+1);
    printf("%d\n", z+2);
    printf("%d\n", z+3);
    // aqui tipo 'float' tem 4 byte, e cada incremento pula 4 byte
    printf("-----------------------------------------------\n");

    double w[4];

    printf("%d\n", w);
    printf("%d\n", w+1);
    printf("%d\n", w+2);
    printf("%d\n", w+3);
    // aqui tipo 'double' tem 8 byte, e cada incremento pula 8 byte
}