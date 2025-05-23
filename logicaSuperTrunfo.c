#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
  //  Área para definição das variáveis para armazenar as propriedades das cidades
  int pontosturisticos1;
  long unsigned int populacao1;
  float pib1, area1;
  char codigo1[4], cidade1[50], estado1;
//  Diferenciação entre ambas as cartas adicionando uma identificação ao final das variáveis
  int pontosturisticos2; 
  long unsigned int populacao2;
  float pib2, area2;
  char codigo2[4], cidade2[50], estado2;

// Área para entrada de dados
  printf("Vamos começar com o registro da primeira carta!\n");
    printf("Insira o estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo1);
    getchar();

    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade1); //Feito dessa forma para permitir espaços, ^ indica "exceto", dessa forma são lidos todos os caracteres exceto \n
    getchar();

    printf("A população de %s é de: ", cidade1);
    scanf(" %lu", &populacao1);

    printf("Qual a área em km²?: ");
    scanf(" %f", &area1);

    printf("O PIB dessa cidade (em bilhões) é de: ");
    scanf(" %f", &pib1);

    printf(" Quantos pontos turísticos temos em %s?: ", cidade1);
    scanf(" %d", &pontosturisticos1);
    printf("\n");

//Coleta dos dados da segunda carta
  printf("Certo! Vamos registrar os dados da segunda carta agora.\n");
    printf("Insira o estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);
    getchar();


    printf("Ótimo! Insira agora o código de identificação dessa carta: ");
    scanf(" %s", codigo2);
    getchar();

    printf("De qual cidade estamos falando?: ");
    scanf(" %[^\n]", cidade2);
    getchar();

    printf("A população de %s é de: ", cidade2);
    scanf(" %lu", &populacao2);

    printf("Qual a área em km²?: ");
    scanf(" %f", &area2);

    printf("O PIB dessa cidade (em bilhões) é de: ");
    scanf(" %f", &pib2);

    printf(" Quantos pontos turísticos temos em %s?: ", cidade2);
    scanf(" %d", &pontosturisticos2);

// Declaração das variáveis de densidade populacional, PIB per capita e super poder

    float densidade1 = populacao1 / area1, densidade2 = populacao2 / area2;
    float pibcapita1 = (pib1*1000000000) / populacao1, pibcapita2 = (pib2 * 1000000000) / populacao2;

    float superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibcapita1 + (area1 / (float) populacao1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibcapita2 + (area2 / (float) populacao2);

// Contar qual carta venceu mais vezes:
    short int pontuacao1 = 0;
    short int pontuacao2 = 0;



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n--- PRIMEIRA CARTA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);

    printf("\n--- SEGUNDA CARTA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);

    printf("\n --- HORA DE COMPARAR AS CARTAS ---\n");

    printf("\nPopulação: Carta 1 (%lu habitantes) VS Carta 2 (%lu habitantes)\n", populacao1, populacao2);
    if (populacao1 == populacao2) {
        printf("As cidades possuem a mesma população, ninguém venceu!\n");
    } else{
        if(populacao1 > populacao2) {
            printf ("Carta 1 possui a população maior que a carta 2, carta 1 venceu!\n");
            pontuacao1++;
        } else {
            printf("Carta 2 possui a população maior que a carta 1, carta 2 venceu!\n");
            pontuacao2++;
    }}

    printf("\nÁrea: Carta 1 (%.2f km²) VS Carta 2 (%.2fkm²)\n", area1, area2);
    if (area1 == area2) {
        printf("As cidades têm o mesmo tamanho, ninguém venceu!\n");
    } else {
        if (area1 > area2) {
            printf("%s é maior! Carta 1 venceu!\n", cidade1);
            pontuacao1++;
        } else {
            printf ("%s é maior! Carta 2 venceu!\n", cidade2);
            pontuacao2++;
        }
    }

    printf("\nPIB: Carta 1 (%.2f bilhões) VS Carta 2 (%.2f bilhões)\n", pib1, pib2);
    if (pib1 == pib2) {
        printf("%s e %s têm o mesmo PIB, ninguém venceu!\n", cidade1, cidade2);
    } else {
        if (pib1 > pib2) {
            printf("O PIB da carta 1 é maior, %s venceu!\n", cidade1);
            pontuacao1++;
        } else {
            printf("O PIB da carta 2 é maior, %s venceu!\n", cidade2);
            pontuacao2++;
        }
    }

    printf("\nPontos Turísticos: %s (%d) VS %s (%d)\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
    if (pontosturisticos1 == pontosturisticos2) {
        printf("Ninguém venceu, %s e %s têm a mesma quantidade de pontos turísticos!\n", cidade1, cidade2);
    } else {
        if (pontosturisticos1 > pontosturisticos2) {
            printf("A Carta 1 têm mais pontos turísticos. %s venceu!\n", cidade1);
            pontuacao1++;
        } else {
            printf("A Carta 2 têm mais pontos turísticos, %s venceu!\n", cidade2);
            pontuacao2++;
        }
    }

    printf("\nDensidade Populacional: Carta 1 (%.3f habitantes por km²) VS Carta 2 (%.3f habitantes por km²)\n", densidade1, densidade2);
    if (densidade1 == densidade2) {
        printf("As cidades têm a mesma densidade populacional, ninguém venceu!\n");
    } else {
        if (densidade1 < densidade2) {
            printf("A densidade populacional da Carta 1 é menor, %s venceu!\n", cidade1);
            pontuacao1++;
        } else {
            printf("A densidade populacional da Carta 2 é menor, %s venceu!\n", cidade2);
            pontuacao2++;
        }
    }

    printf("\nPIB per capita: %s (R$%.3f por habitante) VS %s (R$%.3f por habitante)\n", cidade1, pibcapita1, cidade2, pibcapita2);
    if (pibcapita1 == pibcapita2) {
        printf("A riqueza per capita de ambas as cidades é igual, ninguém venceu!\n");
    } else {
        if (pibcapita1 > pibcapita2) {
            printf("%s é mais rica, Carta 1 venceu!\n", cidade1);
            pontuacao1++; 
        } else {
            printf("%s é mais rico, Carta 2 venceu!\n", cidade2);
            pontuacao2++;
        }
    }

        printf("\n!!! SUPER PODER !!!!\nCarta 1 (%.4f de poder) VS Carta 2 (%.4f de poder)\n", superpoder1, superpoder2);
        if (superpoder1 == superpoder2) {
            printf("!!! AS CARTAS EMPATARAM !!!\n");
        } else {
            if (superpoder1 > superpoder2) {
                printf("!!! %s VENCEU, DOIS PONTOS PARA A CARTA 1 !!!\n", cidade1);
                pontuacao1+=2;
            } else {
                printf("!!! %s VENCEU, DOIS PONTOS PARA A CARTA 2 !!!\n", cidade2);
                pontuacao2+=2;
            }
        }

        printf("\n--- HORA DE VERMOS QUEM VENCE: CARTA 1 OU CARTA 2? ---\n");
        printf("Carta 1 - %s: fez %d pontos!\n", cidade1, pontuacao1);
        printf("Carta 2 - %s: fez %d pontos!\n", cidade2, pontuacao2);
        if (pontuacao1 == pontuacao2) {
            printf("AS DUAS TÊM A MESMA PONTUAÇÃO, NINGUÉM VENCEU! JOGUE NOVAMENTE!");
        } else {
            if (pontuacao1 > pontuacao2) {
                printf("%s FEZ MAIS PONTOS, CARTA 1 VENCEU! FIM DE JOGO.", cidade1);
            } else {
                printf("%s FEZ MAIS PONTOS, CARTA 2 VENCEU! FIM DE JOGO.", cidade2);
            }
        }


    return 0;
    }