// Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
// computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
// lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
// Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
// das implementações que você criou para os dois problemas de ordenação anteriores e compare
// os resultados obtidos.

// foram adicionadas as seguintes linhas em cada codigo das questões para medir o tempo de execução

// #include <time.h>
// clock_t start = clock();
// clock_t end = clock();
// double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
// printf("Tempo de execucao: %.6f segundos\n", time_spent);

// ---------------------------------------------------------------------------------------------------- //

// Questao 14 Saida:
// Digite a quantidade de valores: 4
// Digite os 4 valores:
// 10
// 11
// 15
// 49
// Valores em ordem crescente:
// 10.0 11.0 15.0 49.0 Tempo de execucao: 0.000000 segundos

// ---------------------------------------------------------------------------------------------------- //

// Questao 15 Saida:
// Digite a quantidade de valores: 4
// Digite os 4 valores:
// 10
// 5
// 1.1
// 7
// Valores em ordem crescente:
// 1.1 5.0 7.0 10.0 Tempo de execucao: 0.000000 segundos