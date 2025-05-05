#include <stdio.h>


int main() {
    char estado, cod[4], nome[20], opcao[0], estado1, cod1[4], nome1[20]; //cod é código das cartas
    int populacao, pts, populacao1, pts1; // pts é pontosa turísticos
    float area, pib, area1, pib1, pibperA, pibperB, densidadeA, densidadeB, superpoderA, superpoderB, inverdensidadeA, inverdensidadeB;
    int resulPopul, resulArea, resulPib, resulpts, resuldensipopul, resulpibper, resulsuperpoder, resulPopulB, resulAreaB, resulPibB, resulptsB, resuldensipopulB, resulpibperB, resulsuperpoderB;

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

    pibperA = pib / populacao;
    pibperB = pib1 / populacao1;

    inverdensidadeA = area / populacao;
    inverdensidadeB = area1 / populacao1;

    densidadeA = populacao / area;
    densidadeB = populacao1 / area1;

    superpoderA = (float) populacao + area + pts + pibperA + inverdensidadeA;            //população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"
    superpoderB = (float) populacao1 + area1 + pts1 + pibperB + inverdensidadeB;  

    resulArea = area >= area1;
    resulPib = pib >= pib1;
    resulPopul = populacao >= populacao1;
    resulpts = pts >= pts1;
    resuldensipopul = densidadeA >= densidadeB;
    resulsuperpoder = superpoderA >= superpoderB;
    resulpibper = pibperA >= pibperB;

    resulAreaB = area1 >= area;
    resulPibB = pib1 >= pib;
    resulPopulB = populacao1 >= populacao;
    resulptsB = pts1 >= pts;
    resuldensipopulB = densidadeB >= densidadeA;
    resulsuperpoderB = superpoderB >= superpoderA;
    resulpibperB = pibperB >= pibperA;

    //printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Numero de pontos turísticos: %d Pib Per capi\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Numero de pontos turísticos: %d\n\n ", estado, cod, nome, populacao, area, pib, pts, estado1, cod1, nome1, populacao1, area1, pib1, pts1);
    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d venceu (%d)\n Área: %.2f venceu (%d)\n PIB: %.2f venceu (%d)\n Número de pontos turísticos: %d venceu (%d)\n Densidade Populacional: %.2f venceu (%d)\n PIB per Capita: %.2f venceu (%d)\n Super Poder: %2.f venceu (%d)\n\n Carta 2:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d venceu (%d)\n Área: %.2f venceu (%d)\n PIB: %.2f venceu (%d)\n Número de pontos turísticos: %d venceu (%d)\n Densidade Populacional: %.2f venceu (%d)\n PIB per Capita: %.2f venceu (%d)\n Super Poder: %2.f venceu (%d)\n", 
        
                    estado, cod, nome, populacao, resulPopul, area, resulArea, pib, resulPib, pts, resulpts, densidadeA, resuldensipopul, pibperA, resulpibper, superpoderA, resulsuperpoder, estado1, cod1, nome1, populacao1, resulPopulB, area1, resulAreaB, pib1, resulPibB, pts1, resulptsB, densidadeB, resuldensipopulB, pibperB, resulpibperB, superpoderB, resulsuperpoderB);
}