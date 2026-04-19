#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado[4] = "A", estado2[4] = "B";
  char codigo[5] = "A01", codigo2[5] = "B01";
  char cidade[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
  int populacao = 1, populacao2 = 2;
  float area = 123.12, area2 = 123.11;
  float pib = 123.12, pib2 = 123.11;
  int pontos = 50, pontos2 = 40;

  // Área para entrada de dados

  printf("Digite os dados da primeira carta!\n""\n");

  printf("Estado: ");
  scanf(" %s", estado);

  printf("Código: ");
  scanf(" %s", codigo);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade);
        
  printf("População: ");
  scanf(" %d", &populacao);

  printf("Área da cidade: ");
  scanf(" %e", &area);

  printf("PIB: ");
  scanf(" %e", &pib);

  printf("Pontos turisticos: ");
  scanf(" %d", &pontos);

  printf("\n");

  printf("Digite os dados da segunda carta!\n""\n");

  printf("Estado: ");
  scanf(" %s", estado2);

  printf("Código: ");
  scanf(" %s", codigo2);

  printf("Cidade: ");
  scanf(" %[^\n]", cidade2);
        
  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área da cidade: ");
  scanf(" %e", &area2);

  printf("PIB: ");
  scanf(" %e", &pib2);

  printf("Pontos turisticos: ");
  scanf(" %d", &pontos2);

  printf("\n");

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Popuação: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Pontos turisticos: %d\n", pontos);

  printf("\n");

  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Popuação: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos turisticos: %d\n", pontos2);

  return 0;

} 
