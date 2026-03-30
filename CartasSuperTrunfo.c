#include <stdio.h>

int main (){

/*
CARTA 1 
*/
char estado1;
char codigo1[5];
char cidade1[50];
unsigned long int populacao1;
float area1;
float PIB1;
int Ponto1;

/*
CARTA 2
*/
char estado2;
char codigo2[5];
char cidade2[50];
unsigned long int populacao2;
float area2;
float PIB2;
int Ponto2;

/* Variáveis de cálculo */
float densidade1, rendaPerCapita1;
float densidade2, rendaPerCapita2;

/* Super Poder */
float super1, super2;

/* ================= ENTRADA CARTA 1 ================= */

printf("Cadastro da Carta 1\n");

printf("Digite seu estado (A a H): \n");
scanf(" %c", &estado1);

printf("Digite seu Codigo da Carta (ex: A01, B03): \n");
scanf("%s", codigo1);

printf("Digite sua Cidade: \n");
getchar();
scanf(" %49[^\n]", cidade1);

printf("Digite sua população: \n");
scanf("%lu", &populacao1);

printf("Digite sua Área (em km²): \n");
scanf("%f", &area1);

printf("Digite seu PIB (em bilhões): \n");
scanf("%f", &PIB1);

printf("Digite seu Número de Pontos Turísticos: \n");
scanf("%d", &Ponto1);

/* ================= ENTRADA CARTA 2 ================= */

printf("\nCadastro da Carta 2\n");

printf("Digite seu estado (A a H): \n");
scanf(" %c", &estado2);

printf("Digite seu Codigo da Carta (ex: A01, B03): \n");
scanf("%s", codigo2);

printf("Digite sua Cidade: \n");
getchar();
scanf(" %49[^\n]", cidade2);

printf("Digite sua população: \n");
scanf("%lu", &populacao2);

printf("Digite sua Área (em km²): \n");
scanf("%f", &area2);

printf("Digite seu PIB (em bilhões): \n");
scanf("%f", &PIB2);

printf("Digite seu Número de Pontos Turísticos: \n");
scanf("%d", &Ponto2);

/* ================= CÁLCULOS ================= */

/* Carta 1 */
densidade1 = (float)populacao1 / area1;
rendaPerCapita1 = (PIB1 * 1000000000) / populacao1;

/* Carta 2 */
densidade2 = (float)populacao2 / area2;
rendaPerCapita2 = (PIB2 * 1000000000) / populacao2;

/* Super Poder
   soma de:
   população + área + PIB + pontos + PIB per capita + inverso da densidade
*/
super1 = (float)populacao1 +
         area1 +
         PIB1 +
         Ponto1 +
         rendaPerCapita1 +
         (1.0f / densidade1);

super2 = (float)populacao2 +
         area2 +
         PIB2 +
         Ponto2 +
         rendaPerCapita2 +
         (1.0f / densidade2);

/* ================= EXIBIÇÃO DAS CARTAS ================= */

printf("\n================ CARTA 1 ================\n");

printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões\n", PIB1);
printf("Pontos Turísticos: %d\n", Ponto1);
printf("Densidade: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f\n", rendaPerCapita1);
printf("Super Poder: %.2f\n", super1);

printf("\n================ CARTA 2 ================\n");

printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões\n", PIB2);
printf("Pontos Turísticos: %d\n", Ponto2);
printf("Densidade: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f\n", rendaPerCapita2);
printf("Super Poder: %.2f\n", super2);

/* ================= COMPARAÇÃO ================= */

printf("\n=========== Comparação de Cartas ===========\n\n");

/* Para todos: maior vence */
printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Ponto1 > Ponto2);

/* Para densidade: menor vence */
printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

printf("PIB per Capita: Carta 1 venceu (%d)\n", rendaPerCapita1 > rendaPerCapita2);
printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

return 0;


/*
REFERÊNCIA
printf(“%formato1 %formato2”, variável1, variável2);

%d: Imprime um inteiro no formato decimal. INT
 
%i: Equivalente a %d
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/
}
