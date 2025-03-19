#include <stdio.h>

int main(){

 // Formulário de cadastro de país
 int codigo, area, turistico;
 int pib;
 int populacao;
 char nome[100];

 // Boas-vindas
 printf("Bem-Vindo ao Super Trunfo!\n");

 // Perguntas

 printf("Digite o nome do país: \n");
 scanf("%s", nome);
 
 printf("Digite o código do país: \n");
 scanf("%d", &codigo);

 printf("Digite a área do país: \n");
 scanf("%d", &area);

 printf("Digite o PIB do país: \n");
 scanf("%d", &pib);

 printf("Digite a população do país: \n");
 scanf("%d", &populacao);

 printf("Quantos pontos turísticos o país tem: \n");
 scanf("%d", &turistico);

 // Divisão de valores
 float divisao1 = (float)populacao / area;
 float divisao2 = (float)pib / populacao;

 printf("País: %s\n", nome);
 printf("Área: %d\n", area);
 printf("Código do país: %d\n", codigo);
 printf("PIB: %d\n", pib);
 printf("População: %d\n", populacao);
 printf("Pontos turísticos: %d\n", turistico);
 printf("População / Área: %.2f\n", divisao1);
 printf("PIB per Capita: %.2f\n", divisao2);

 return 0;

}
