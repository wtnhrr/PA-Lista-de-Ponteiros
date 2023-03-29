// Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o
// valor do terceiro elemento do vetor?

// *(pulo + 2);
// *(pulo + 4);
// pulo + 4;
// pulo + 2;

// resposta: *(pulo + 2);
// o nome do vetor 'pulo' é um ponteiro para o primeiro elemento 'pulo[0]', e levando em conta que é tipo 'int'
// é incrementado duas posições de inteiros, entãp 'pulo[2], que é terceiro elemento, e por final, *pulo[2], aponta o valor do endereço