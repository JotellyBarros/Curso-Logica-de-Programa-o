/*
 * hello.c
 *
 * Copyright 2020 Jotelly Barros <jotellybarros@jotelly-speed>
 *
 */

#include <stdio.h>

int main(int argc, char **argv) {
  char nome[30];
  char sexo;
  int idade;

  printf("Informe seu nome!\n");
  scanf("%s", nome);  // recebe um inteiro e armazena na variável nome.

  printf("Informe sua idade!\n");
  scanf("%d", &idade);  // recebe um inteiro e armazena na variável idade.

  printf("Informe seu sexo: ");
  scanf(" %c", &sexo);  // recebe um inteiro e armazena na variável sexo.

  // ----------------------------------- //
  printf("\nSeu nome he: %s\n", nome);
  printf("Seu sexo he: %c\n", sexo);
  printf("Sua idade he: %d\n", idade);

  // puts(nome);
  return 0;
}
