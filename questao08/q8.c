// O que fazem os seguintes programas em C?

// int main()
// {
//     int vet[] = {4, 9, 13};             // declara um vetor preenchendo com valores {4, 9, 13}
//     int i;                              // declara variavel int i
//     for (i = 0; i < 3; i++)             // laço de repetição
//     {
//         printf("%d ", *(vet + i));      // imprime o valor da notação '*(vet + i)' apra acessar cada elemento do 'vet'
//     }
// }
//                                         // resultado : 4 9 13

int main()
{
    int vet[] = {4, 9, 13};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%X ", vet + i);            // utiliza %X, imprime em hexadecimal em uppercase o endereço de memoria de cada elemento de 'vet[]'
    }                                      // sendo tipo int, entao de 4 em 4 bytes
}
//                                         // resultado: 61FF10 61FF14 61FF18