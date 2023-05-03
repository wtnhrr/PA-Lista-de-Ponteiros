#include <stdio.h>

int main (){

    int i=3, j=5;
    int *p, *q;
    p =*i;
    q = *j;

    printf("%d\n", p== &i);  // 1, ou seja, True
    printf("%d\n", *p - *q); // 3 - 5 = -2; *p = 3 e *q = 5 
    printf("%d\n", **&p);    // redundancia, 3
    printf("%d\n", 3 - *p/(*q)+7);  // 10; 3-(5/3)+7; sendo inteiro divisão igual 0 
}