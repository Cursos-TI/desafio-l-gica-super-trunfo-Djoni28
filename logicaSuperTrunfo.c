#include <stdio.h>
/* DESAFIO - Super Trunfo (Lógica) - Países - // Tema 3 - Nível mestre */

int main() {
    // Área para definição das variáveis
    short int pontosturisticos1, pontosturisticos2;
    long unsigned int populacao1, populacao2;
    float pib1, pib2, area1, area2;
    char codigo1[4], codigo2[4], cidade1[50], cidade2[50], estado1, estado2;

    // Área para entrada de dados:
    printf("Vamos começar com o registro da primeira carta!\n");
        printf("Insira o estado (A-H) da primeira carta: ");
        scanf(" %c", &estado1);

        printf("Ótimo! Insira agora o código de identificação dessa carta: ");
        scanf("%s", codigo1);
        
        printf("De qual cidade estamos falando?: ");
        getchar();
        scanf("%[^\n]", cidade1);

        printf("A população de %s é de: ", cidade1);
        scanf("%lu", &populacao1);

        printf("Qual a área dessa cidade em km²?: ");
        scanf("%f", &area1);

        printf("O PIB dessa cidade (em bilhões) é de: ");
        scanf("%f", &pib1);

        printf("Quantos pontos turísticos temos em %s?: ", cidade1);
        scanf("%hd", &pontosturisticos1);

    // Entrada da segunda carta
    printf("\nPerfeito! Agora vamos armazenar os dados da segunda carta!\n");

        printf("Insira o estado (A-H) da segunda carta: ");
        scanf(" %c", &estado2);

        printf("Ótimo! Insira agora o código de identificação dessa carta: ");
        scanf("%s", codigo2);
        
        printf("De qual cidade estamos falando?: ");
        getchar();
        scanf("%[^\n]", cidade2);

        printf("A população de %s é de: ", cidade2);
        scanf("%lu", &populacao2);

        printf("Qual a área dessa cidade em km²?: ");
        scanf("%f", &area2);

        printf("O PIB dessa cidade (em bilhões) é de: ");
        scanf("%f", &pib2);

        printf("Quantos pontos turísticos temos em %s?: ", cidade2);
        scanf("%hd", &pontosturisticos2);
    
    // Declaração e cálculo das variáveis de densidade populacional, PIB per capita e super poder

    float densidade1 = (float) populacao1 / area1, densidade2 = (float) populacao2 / area2;
    float pibcapita1 = (pib1*1000000000) / populacao1, pibcapita2 = (pib2*1000000000) / populacao2;
    float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibcapita1 + (area1 / (float) populacao1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibcapita2 + (area2 / (float) populacao2);
    short int pontuacao1, pontuacao2;

    // Exibição de atributos não comparáveis e comparação com switch
    short int opcao = 0;
    do {
        printf("\n--- PRIMEIRA CARTA ---\n");
        printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, cidade1);
        printf("\n--- SEGUNDA CARTA ---\n");
        printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);

        printf("\n--- HORA DE COMPARAR AS CARTAS ---\n");
        printf("1. População\n2. Área\n3.PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6.PIB Per Capita\n7. Super Poder (Soma Total)\n8. Comparação Geral\n0. Encerrar o Programa \nQual opção deseja escolher?: ");
        scanf("%hd", &opcao);

        switch (opcao) {
            case 0:
                printf("\n\nEncerrando o programa...");
                return 0;
            case 1:
                printf("\nPopulacação: Carta 1 (%lu habitantes) VS Carta 2 (%lu habitantes)\n", populacao1, populacao2);
                if (populacao1 == populacao2) {
                    printf("As cidades possuem a mesma população, ninguém venceu!\n");
                } else if (populacao1 > populacao2) {
                    printf("A população de %s é maior, Carta 1 venceu!\n", cidade1);
                } else {
                    printf("A população de %s é maior, Carta 2 venceu!\n", cidade2);
                } break;
            case 2:
                printf("\nÁrea: Carta 1 (%.2f km²) VS Carta 2 (%.2f km²)\n", area1, area2);
                if (area1 == area2) {
                    printf("As cidades têm o mesmo tamanho, ninguém venceu!\n");
                } else if (area1 > area2) {
                    printf("%s é maior! Carta 1 venceu!\n", cidade1);
                } else {
                    printf ("%s é maior! Carta 2 venceu!\n", cidade2);
                }   break;
            case 3:
                printf("\nPIB: Carta 1 (%.2f bilhões) VS Carta 2 (%.2f bilhões)\n", pib1, pib2);
                if (pib1 == pib2) {
                    printf("%s e %s têm o mesmo PIB, ninguém venceu!\n", cidade1, cidade2);
                } else if (pib1 > pib2) {
                    printf("O PIB da carta 1 é maior, %s venceu!\n", cidade1);
                } else {
                    printf("O PIB da carta 2 é maior, %s venceu!\n", cidade2);
                }   break;
            case 4:
                printf("\nPontos Turísticos: %s (%hd) VS %s (%hd)\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
                if (pontosturisticos1 == pontosturisticos2) {
                    printf("Ninguém venceu, %s e %s têm a mesma quantidade de pontos turísticos!\n", cidade1, cidade2);
                } else if (pontosturisticos1 > pontosturisticos2) {
                    printf("A Carta 1 têm mais pontos turísticos. %s venceu!\n", cidade1);
                } else {
                    printf("A Carta 2 têm mais pontos turísticos, %s venceu!\n", cidade2);
                }   break;
            case 5:
                printf("\nDensidade Demográfica: Carta 1 (%.3f habitantes por km²) VS Carta 2 (%.3f habitantes por km²)\n", densidade1, densidade2);
                if (densidade1 == densidade2) {
                    printf("As cidades têm a mesma densidade demográfica, ninguém venceu!\n");
                } else if (densidade1 < densidade2) {
                    printf("A densidade demográfica da Carta 1 é menor, %s venceu!\n", cidade1);
                } else {
                    printf("A densidade demográfica da Carta 2 é menor, %s venceu!\n", cidade2);
                }   break;
            case 6:
                printf("\nPIB per capita: %s (R$%.3f por habitante) VS %s (R$%.3f por habitante)\n", cidade1, pibcapita1, cidade2, pibcapita2);
                if (pibcapita1 == pibcapita2) {
                    printf("A riqueza per capita de ambas as cidades é igual, ninguém venceu!\n");
                } else if (pibcapita1 > pibcapita2) {
                    printf("%s é mais rica, Carta 1 venceu!\n", cidade1);
                } else {
                    printf("%s é mais rico, Carta 2 venceu!\n", cidade2);
                }   break;
            case 7:
                printf("\n!!! SUPER PODER !!!!\nCarta 1 (%.4f de poder) VS Carta 2 (%.4f de poder)\n", superpoder1, superpoder2);
                if (superpoder1 == superpoder2) {
                    printf("!!! AS CARTAS EMPATARAM !!!\n");
                } else if (superpoder1 > superpoder2) {
                        printf("!!! %s VENCEU, O PODER DA CARTA 1 É MAIOR !!!\n", cidade1);
                } else {
                        printf("!!! %s VENCEU, O PODER DA CARTA 2 É MAIOR !!!\n", cidade2);
                }   break;
            case 8:
                pontuacao1 = 0;
                pontuacao2 = 0;
                populacao1 > populacao2 ? pontuacao1++ : (populacao2 > populacao1 ? pontuacao2++ : 0);
                area1 > area2 ? pontuacao1++ : (area2 > area1 ? pontuacao2++ : 0);
                pib1 > pib2 ? pontuacao1++ : (pib2 > pib1 ? pontuacao2++ : 0);
                pontosturisticos1 > pontosturisticos2 ? pontuacao1++ : (pontosturisticos2 > pontosturisticos1 ? pontuacao2++ : 0);
                densidade1 < densidade2 ? pontuacao1++ : (densidade2 < densidade1 ? pontuacao2++ : 0);
                pibcapita1 > pibcapita2 ? pontuacao1++ : (pibcapita2 > pibcapita1 ? pontuacao2++ : 0);
                superpoder1 > superpoder2 ? pontuacao1++ : (superpoder2 > superpoder1 ? pontuacao2++ : 0);

                printf("\nPlacar final: Carta 1 (%hd pontos) VS Carta 2 (%hd pontos)\n", pontuacao1, pontuacao2);
                if (pontuacao1 == pontuacao2) {
                    printf("As duas cartas têm a mesma pontuação, jogue novamente!\n");
                } else if (pontuacao1 > pontuacao2) {
                    printf("%s teve mais pontos, Carta 1 venceu!\n", cidade1);
                } else {
                    printf("%s teve mais pontos, Carta 2 venceu!\n", cidade2);
                }
                break;
            default:
                printf("\nOpção inválida, tente novamente...\n");
        }
    } while (opcao != 0);
}