#include <stdio.h>


int main() {
    char estado, cod[4], nome[20], opcao[0], estado1, cod1[4], nome1[20]; //cod é código das cartas
    int populacao, pts, populacao1, pts1; // pts é pontosa turísticos
    float area, pib, area1, pib1;

    printf("Escolha o seu estado (ex. A - H): ");
    scanf(" %c", &estado);

    printf("Digite o código da sua cidade (ex: A01, B03): ");
    scanf("%s", cod);

    printf("Escolha o nome do seu município: ");
    scanf("%s", nome);

    printf("Quantos habitantes terá o seu município? ");
    scanf("%d", &populacao);

    printf("Informe as dimensões em KM^2: ");
    scanf("%f", &area);

    printf("Informe o produto interno do bruto do seu município: ");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos em seu município: ");
    scanf("%d", &pts);

    printf("Cadastro feito com sucesso! Pressione enter para continuar: ");
    scanf(" %c", opcao);

    printf("Escolha o seu estado (ex. A - H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da sua cidade (ex: A01, B03): ");
    scanf("%s", cod1);

    printf("Escolha o nome do seu município: ");
    scanf("%s", nome1);

    printf("Quantos habitantes terá o seu município? ");
    scanf("%d", &populacao1);

    printf("Informe as dimensões em KM^2: ");
    scanf("%f", &area1);

    printf("Informe o produto interno do bruto do seu município: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos em seu município: \n\n");
    scanf("%d", &pts1); 

    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Numero de pontos turísticos: %d\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Numero de pontos turísticos: %d\n\n ", estado, cod, nome, populacao, area, pib, pts, estado1, cod1, nome1, populacao1, area1, pib1, pts1);
}