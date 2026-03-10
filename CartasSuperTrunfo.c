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

/*Entrada Carta 1*/
    printf("Cadastro da Carta 1\n");

    printf("Digite seu estado (A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite seu Codigo da Carta (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite sua Cidade: \n");
    scanf(" %[^\n]", cidade1);

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
    scanf(" %[^\n]", cidade2);

    printf("Digite sua população: \n");
    scanf("%d", &populacao2);

    printf("Digite sua Área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite seu Número de Pontos Turísticos: \n");
    scanf("%d", &Ponto2);

    // Exibição da Carta 1
    printf("\n--- Carta 1 ---:\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População da Cidade: %d\n", populacao1);
    printf("Área da Cidade: %.2f km2\n", area1);
    printf("PIB da Cidade: %.2f bilhoes de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n",Ponto1);

    // Exibição Carta 2
    printf("\n --- Carta 2 ---:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da Cidade: %.2f km2\n", area2);
    printf("PIB da Cidade: %.2f bilhoes de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n",Ponto2);





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

}
