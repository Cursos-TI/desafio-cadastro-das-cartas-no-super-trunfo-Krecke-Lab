#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main () {
    char Estado1[20], Estado2[20];
    char codigo1[20], codigo2[20];
    char nome1[20], nome2[20];
    int popula1, popula2;
    float area1, area2;
    float pib1, pib2;
    int NPT1, NPT2;

    printf("Primeira carta: \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado1);
    
    printf("Digite o código: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome \n");
    scanf("%s", &nome1);

    printf("Digite a população: \n");
    scanf("%d", &popula1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT1);

    while (getchar() != '\n');

    printf("Segunda carta: \n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado2);
    
    printf("Digite o código: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome \n");
    scanf("%s", &nome2);

    printf("Digite a população: \n");
    scanf("%d", &popula2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NPT2);

    printf("\n ---Cartas registradas:--- \n");

printf("Carta1: \nEstado: %s\n Código: %s\n Nome: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos: %d \n \n", Estado1, codigo1, nome1, popula1, area1, pib1, NPT1);

printf("Carta2: \nEstado: %s\n Código: %s\n Nome: %s\n População: %d\n Área: %f\n PIB: %f\n Número de pontos: %d\n \n", Estado2, codigo2, nome2, popula2, area2, pib2, NPT2);

    return 0;

}
