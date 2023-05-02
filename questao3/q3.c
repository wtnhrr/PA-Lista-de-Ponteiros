// Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
// atribuição são ilegais?

// p = i;           --> verdadeiro
// q = &j;          --> verdadeiro
// p = &*&i;        --> verdadeiro
// i = (*&)j;       --> ilegal, (*&) é uma sequencia invalida de operadores, da erro de sintaxe
// i = *&j;         --> verdadeiro
// i = *&*&j;       --> verdadeiro
// q = *p;          --> ilegal, *p é o valor inteiro, não pode ser atribuido a um ponteiro
// i = (*p)++ + *q; --> verdadeiro