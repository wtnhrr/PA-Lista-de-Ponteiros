// Pesquise na Internet sobre o uso da biblioteca libGC, que implementa um coletor de lixo em C. O
// processo de instalação dessa biblioteca em sistemas Windows pode ser um pouco trabalhoso.
// Entretanto, em sistemas Unix, a instalação é bem simples, de sorte que se recomenda a
// resolução desta questão em uma máquina, por exemplo, com Linux instalado. Caso seja usuário
// Windows e não queira instalar sistemas alternativos em seu computador, use uma ferramenta
// de virtualização (ex: VirtualBox) para instalar e executar o Linux sem alterar a instalação
// original de seu computador. Prepare um pequeno programa-exemplo demonstrando como usar
// a biblioteca.

#include <gc.h>
#include <stdio.h>

int main() {
  // Aloca um inteiro na memória gerenciada pela libGC
  int* x = (int*) GC_MALLOC(sizeof(int));
  *x = 42;

  // Imprime o valor
  printf("%d\n", *x);

  // Libera a memória alocada
  GC_FREE(x);

  return 0;
}