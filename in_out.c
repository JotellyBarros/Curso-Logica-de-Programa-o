#include <stdio.h>

/* Constantes são identificadores que não podem ter seus valores alterados durante a execução do programa.
*  Para criar uma constante existe o comando #define que, em geral é colocado no início do programa-fonte.
*/
#define NOMESIZE 30

int main() {
  char nome[NOMESIZE];
  char endereco[30];
  char sexo;
  int cep;

  printf("Qual seu nome \n");
  //scanf("%s", nome);  // recebe um char e armazena na variável nome.
	// fgets, que limita o buffer de leitura
  fgets(nome, NOMESIZE, stdin); // recebe um char e armazena na variável nome.

  printf("Informe seu sexo: ");
  scanf(" %c", &sexo);  // recebe um char e armazena na variável sexo.

  printf("Qual seu endereco \n");
  scanf("%s", endereco);  // recebe um char e armazena na variável endereco.

  printf("Qual seu cep\n");
  scanf("%d", &cep);  // recebe um inteiro e armazena na variável cep.

  printf("\nSeu nome e %s",nome);
  printf("Seu sexo e: %c\n", sexo);
  printf("Seu endereco e %s\n",endereco);
  printf("Seu cep e %d\n",cep);

  return(0);
}
