#include <stdio.h>
#include <string.h>

typedef struct {
    char nomePais[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
} Carta;

void compararAtributos(Carta c1, Carta c2, int atributo1, int atributo2) {
    float somaCarta1 = 0, somaCarta2 = 0;
    
    printf("\nComparação entre %s e %s\n", c1.nomePais, c2.nomePais);

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 1:
            printf("População: %lu vs %lu\n", c1.populacao, c2.populacao);
            printf("%s venceu o primeiro atributo! (%s)\n", c1.populacao > c2.populacao ? c1.nomePais : c2.nomePais, c1.populacao > c2.populacao ? "População" : "População");
            somaCarta1 += c1.populacao;
            somaCarta2 += c2.populacao;
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", c1.area, c2.area);
            printf("%s venceu o primeiro atributo! (%s)\n", c1.area > c2.area ? c1.nomePais : c2.nomePais, c1.area > c2.area ? "Área" : "Área");
            somaCarta1 += c1.area;
            somaCarta2 += c2.area;
            break;
        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", c1.pib, c2.pib);
            printf("%s venceu o primeiro atributo! (%s)\n", c1.pib > c2.pib ? c1.nomePais : c2.nomePais, c1.pib > c2.pib ? "PIB" : "PIB");
            somaCarta1 += c1.pib;
            somaCarta2 += c2.pib;
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", c1.pontosTuristicos, c2.pontosTuristicos);
            printf("%s venceu o primeiro atributo! (%s)\n", c1.pontosTuristicos > c2.pontosTuristicos ? c1.nomePais : c2.nomePais, c1.pontosTuristicos > c2.pontosTuristicos ? "Pontos Turísticos" : "Pontos Turísticos");
            somaCarta1 += c1.pontosTuristicos;
            somaCarta2 += c2.pontosTuristicos;
            break;
        case 5:
            printf("Densidade Populacional: %.2f hab/km² vs %.2f hab/km²\n", c1.densidadePopulacional, c2.densidadePopulacional);
            printf("%s venceu o primeiro atributo! (%s)\n", c1.densidadePopulacional < c2.densidadePopulacional ? c1.nomePais : c2.nomePais, c1.densidadePopulacional < c2.densidadePopulacional ? "Densidade Populacional" : "Densidade Populacional");
            somaCarta1 += c1.densidadePopulacional;
            somaCarta2 += c2.densidadePopulacional;
            break;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 1:
            printf("População: %lu vs %lu\n", c1.populacao, c2.populacao);
            printf("%s venceu o segundo atributo! (%s)\n", c1.populacao > c2.populacao ? c1.nomePais : c2.nomePais, c1.populacao > c2.populacao ? "População" : "População");
            somaCarta1 += c1.populacao;
            somaCarta2 += c2.populacao;
            break;
        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", c1.area, c2.area);
            printf("%s venceu o segundo atributo! (%s)\n", c1.area > c2.area ? c1.nomePais : c2.nomePais, c1.area > c2.area ? "Área" : "Área");
            somaCarta1 += c1.area;
            somaCarta2 += c2.area;
            break;
        case 3:
            printf("PIB: %.2f bilhões vs %.2f bilhões\n", c1.pib, c2.pib);
            printf("%s venceu o segundo atributo! (%s)\n", c1.pib > c2.pib ? c1.nomePais : c2.nomePais, c1.pib > c2.pib ? "PIB" : "PIB");
            somaCarta1 += c1.pib;
            somaCarta2 += c2.pib;
            break;
        case 4:
            printf("Pontos Turísticos: %d vs %d\n", c1.pontosTuristicos, c2.pontosTuristicos);
            printf("%s venceu o segundo atributo! (%s)\n", c1.pontosTuristicos > c2.pontosTuristicos ? c1.nomePais : c2.nomePais, c1.pontosTuristicos > c2.pontosTuristicos ? "Pontos Turísticos" : "Pontos Turísticos");
            somaCarta1 += c1.pontosTuristicos;
            somaCarta2 += c2.pontosTuristicos;
            break;
        case 5:
            printf("Densidade Populacional: %.2f hab/km² vs %.2f hab/km²\n", c1.densidadePopulacional, c2.densidadePopulacional);
            printf("%s venceu o segundo atributo! (%s)\n", c1.densidadePopulacional < c2.densidadePopulacional ? c1.nomePais : c2.nomePais, c1.densidadePopulacional < c2.densidadePopulacional ? "Densidade Populacional" : "Densidade Populacional");
            somaCarta1 += c1.densidadePopulacional;
            somaCarta2 += c2.densidadePopulacional;
            break;
    }

    // Soma total dos atributos
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", c1.nomePais, somaCarta1);
    printf("%s: %.2f\n", c2.nomePais, somaCarta2);

    // Verificando vencedor
    if (somaCarta1 > somaCarta2)
        printf("\n%s venceu a rodada!\n", c1.nomePais);
    else if (somaCarta1 < somaCarta2)
        printf("\n%s venceu a rodada!\n", c2.nomePais);
    else
        printf("\nEmpate!\n");
}

int main() {
    Carta carta1 = {"Brasil", 214000000, 8515767, 1.84, 100, 25.1};
    Carta carta2 = {"Argentina", 45000000, 2780000, 0.64, 50, 16.2};

    int atributo1, atributo2;

    do {
        printf("\nMenu de Comparação de Atributos:\n");
        printf("Escolha o primeiro atributo:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);

        // Garantindo que o segundo atributo seja diferente do primeiro
        do {
            printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
            printf("Escolha o segundo atributo: ");
            scanf("%d", &atributo2);
        } while (atributo2 == atributo1);

        // Comparar os atributos
        compararAtributos(carta1, carta2, atributo1, atributo2);

    } while (1);

    return 0;
}
