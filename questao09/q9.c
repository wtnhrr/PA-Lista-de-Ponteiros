// Seja x um vetor de 4 elementos, declarado da forma TIPO x[4];. Suponha que depois da
// declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
// Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
// int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
// valores de x+1, x+2 e x+3 se:


// x for declarado como char?
// respostas: x = 4092; x+1 = 4093; x+2 = 4094; x+3 = 4095;

// x for declarado como int?
// respostas: x = 4092; x+1 = 4094; x+2 = 4096; x+3 = 4098;

// x for declarado como float?
// respostas: x = 4092; x+1 = 4096; x+2 = 4100; x+3 = 4104;

// x for declarado como double?
// respostas: x = 4092; x+1 = 4100; x+2 = 4108; x+3 = 4116;