#include <stdio.h>

/*char	letras e símbolos:   'a',  'b', 'H', '^', '*','1','0'
* int	de -32767 até 32767 (apenas números inteiros)
* float	de -3.4 x 1038 até +3.4 x 10+38com até 6 dígitos de precisão
* double	de -1.7 x 10308 até +1.7 x 10+308com até 10 dígitos de precisão
*/

int main(int argc, char **argv) {
  
  char str[30] = "Valor";
  char crt = 'b';
  int x = 2;
  float y = 558.24;
  double z = 12.53;

  // Podem ter seu conteúdo alterado por um comando de atribuição.
  crt = 'c';
  x = 84;

  // Impressao na tela com Codigo Significado
  printf("\nO Valor String digitado foi %s\n",str);
  printf("O Valor Caractere digitado foi %c\n", crt);
  printf("O Valor inteiro digitado foi %d\n", x);
  printf("O Valor float digitado foi %.10f\n",y);
  printf("O Valor double digitado foi %lf\n\n",z);
  return 0;
}
