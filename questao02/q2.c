#include <stdio.h>

int main(){

    int i=5, *p;
    p = &i;

    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    // %d, p -> impreso em hexadecial, recebe o endereço de i;
    // %d, *P+2 -> imprime em decimal, o conteudo do endereço i, incrementando 2, igual a 7;
    // %d, **&p -> imprime em decimal, o conteudo do endereço de &p, que é o endereço de i, depois pega o conteudo, que de i é 5;
    // %d, 3**p -> imprime em decimal, 3 multiplicado pelo conteudo do endereço guardado em p que é i, então 3*5=15;
    // %d, **&p+4 -> imprime em decimal, o conteudo do endereço de p, que é &i, em seguidapega o conteudo de i e incrementa 4, igual a 9; 

}