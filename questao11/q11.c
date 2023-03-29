// Suponha que as seguintes declarações tenham sido realizadas:
// Identifique quais dos seguintes comandos é válido ou inválido:

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value;               // valido

    scanf("%f", &aloha);            // valido, porem se não preenchido com valores pelo usuario, será preenchido com residuos

    aloha = value;                  // invalido, um vetor nao pode receber valor sem especificar a posição do vetor

    printf("%f\n", aloha);          // valido, resultado: 0.000000

    coisas[4][4] = aloha[3];        // valido

    coisas[5] = aloha;              // invalido, cada posição de um vetor é uma variavel simples, não pode atribuir um vetor a ela

    pf = value;                     // invalido, pf é um ponteiro que so pode receber valores do tipo int

    pf = aloha;                     // valido
}