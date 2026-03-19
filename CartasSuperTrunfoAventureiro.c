#include <stdio.h>

int main (){
/*
CARTA 1 
*/
char estado1;
char codigo1[5];
char cidade1[50];
int populacao1;
float area1;
float PIB1;
int Ponto1;

/*CARTA 2 */
char estado2;
char codigo2[5];
char cidade2[50];
int populacao2;
float area2;
float PIB2;
int Ponto2;

/*Variaveis de cálculo da Densidade Populacional e PIB Per capita*/
float densidade1, rendaPerCapita1;
float densidade2, rendaPerCapita2;

/*Entrada Carta 1*/
printf("Cadastro da Carta 1\n");

printf("Digite seu estado (A a H): \n");
scanf(" %c", &estado1);

printf("Digite seu Codigo da Carta (ex: A01, B03): \n");
scanf("%s", codigo1);

printf("Digite sua Cidade: \n");
getchar(); // limpa buffer
scanf(" %49[^\n]", cidade1);

printf("Digite sua população: \n");
scanf("%d", &populacao1);

printf("Digite sua Área (em km²): \n");
scanf("%f", &area1);

printf("Digite seu PIB: \n");
scanf("%f", &PIB1);

printf("Digite seu Ponto Turístico: \n");
scanf("%d", &Ponto1);

/*Entrada Carta 2*/
    printf("\nCadastro da Carta 2\n");

printf("Digite seu estado (A a H): \n");
scanf(" %c", &estado2);

printf("Digite seu Codigo da Carta (ex: A01, B03): \n");
scanf("%s", codigo2);

printf("Digite sua Cidade: \n");
getchar(); // limpa buffer
scanf(" %49[^\n]", cidade2);

printf("Digite sua população: \n");
scanf("%d", &populacao2);

printf("Digite sua Área (em km²): \n");
scanf("%f", &area2);

printf("Digite seu PIB: \n");
scanf("%f", &PIB2);

printf("Digite seu Número de Pontos Turísticos: \n");
scanf("%d", &Ponto2);
    
/* Cálculos Carta 1 */
densidade1 = (float) populacao1 / area1;
rendaPerCapita1 = (PIB1 * 1000000000) / populacao1;

/* Cálculos Carta 2 */
densidade2 = (float) populacao2 / area2;
rendaPerCapita2 = (PIB2 * 1000000000) / populacao2;

// Exibição da Carta 1
    printf("\nCarta 1:\n\n");

printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de Pontos Turísticos: %d\n", Ponto1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", rendaPerCapita1);

    // Exibição Carta 2
    printf("\nCarta 2:\n\n");

printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", Ponto2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", rendaPerCapita2);




    return 0;



/*
REFERÊNCIA
printf(“%formato1 %formato2”, variável1, variável2);

%d: Imprime um inteiro no formato decimal. INT
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/
}
