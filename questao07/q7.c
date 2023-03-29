// Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas?
// Justifique

// p = mat + 1;     valida, atribui a 'p' o endereço do segundo elemento de 'mat' que é 'mat[1]'
// p = mat++;       invalida, não permiitdo em linguagem c, '=' tem precendencia ao operador '++'
// p = ++mat;       invalida, mesmo que o anterior, mesmo sendo pré-incremento
// x = (*mat)++;    valido, incremeta o valor apontao pelo ponteiro