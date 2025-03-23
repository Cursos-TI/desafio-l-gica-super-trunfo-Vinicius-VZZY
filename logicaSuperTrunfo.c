#include <stdio.h>
<<<<<<< HEAD

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

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
=======
#include <stdlib.h>
#include <string.h>

typedef struct {
    char estado; // Letra do estado (A a H)
    char estadoNome[50]; // Nome do estado
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

void calcularDados(Carta *c) {
    c->densidadePopulacional = c->populacao / c->area;
    c->pibPerCapita = (c->pib * 1000000000) / c->populacao;
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos + c->pibPerCapita + (1.0 / c->densidadePopulacional);
}

void lerCarta(Carta *c, char estadoLetra) {
    c->estado = estadoLetra; // Define a letra do estado

    printf("Nome do Estado: ");
    getchar(); // Limpa buffer
    fgets(c->estadoNome, 50, stdin);
    c->estadoNome[strcspn(c->estadoNome, "\n")] = 0; // Remove o \n da string

    printf("Código da Carta (ex: A01): ");
    scanf("%s", c->codigo);
    getchar(); // Limpa buffer
    
    printf("Nome da Cidade: ");
    fgets(c->nomeCidade, 50, stdin);
    c->nomeCidade[strcspn(c->nomeCidade, "\n")] = 0;
    
    printf("População: ");
    scanf("%lu", &c->populacao);
    printf("Área (km²): ");
    scanf("%f", &c->area);
    printf("PIB (bilhões): ");
    scanf("%f", &c->pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &c->pontosTuristicos);
    
    calcularDados(c);
}

void exibirCarta(const Carta *c) {
    printf("\n----------------------\n");
    printf(" Estado: %s (%c)\n", c->estadoNome, c->estado);
    printf(" Código: %s\n", c->codigo);
    printf(" Nome da Cidade: %s\n", c->nomeCidade);
    printf(" População: %lu habitantes\n", c->populacao);
    printf(" Área: %.2f km²\n", c->area);
    printf(" PIB: %.2f bilhões de reais\n", c->pib);
    printf(" Pontos Turísticos: %d\n", c->pontosTuristicos);
    printf(" Densidade Populacional: %.2f hab/km²\n", c->densidadePopulacional);
    printf(" PIB per Capita: %.2f reais\n", c->pibPerCapita);
    printf(" Super Poder: %.2f\n", c->superPoder);
    printf("----------------------\n");
}

void compararCartas(const Carta *c1, const Carta *c2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (1)\n", c1->populacao > c2->populacao ? 1 : 2);
    printf("Área: Carta %d venceu (1)\n", c1->area > c2->area ? 1 : 2);
    printf("PIB: Carta %d venceu (1)\n", c1->pib > c2->pib ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu (1)\n", c1->pontosTuristicos > c2->pontosTuristicos ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu (1)\n", c1->densidadePopulacional < c2->densidadePopulacional ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu (1)\n", c1->pibPerCapita > c2->pibPerCapita ? 1 : 2);
    printf("Super Poder: Carta %d venceu (1)\n", c1->superPoder > c2->superPoder ? 1 : 2);
}

int main() {
    int numEstados, numCartasPorEstado;
    
    // Definir a quantidade de estados e cartas por estado dentro dos limites
    printf("Quantos estados deseja cadastrar? (1 a 8): ");
    scanf("%d", &numEstados);
    if (numEstados < 1 || numEstados > 8) numEstados = 8; // Garante o limite

    printf("Quantas cartas por estado? (1 a 4): ");
    scanf("%d", &numCartasPorEstado);
    if (numCartasPorEstado < 1 || numCartasPorEstado > 4) numCartasPorEstado = 4;

    Carta cartas[numEstados * numCartasPorEstado];

    printf("\nCadastro de cartas:\n");

    // Loop para cadastrar as cartas
    int cartaIndex = 0;
    for (int i = 0; i < numEstados; i++) {
        char estadoLetra = 'A' + i; // Define a letra do estado
        
        for (int j = 0; j < numCartasPorEstado; j++) {
            printf("\nInforme os dados para a carta %d do Estado %c:\n", j + 1, estadoLetra);
            lerCarta(&cartas[cartaIndex], estadoLetra);
            cartaIndex++;
        }
    }

    // Exibir as cartas cadastradas
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < cartaIndex; i++) {
        exibirCarta(&cartas[i]);
    }

    // Comparar as primeiras duas cartas cadastradas (exemplo)
    if (cartaIndex >= 2) {
        compararCartas(&cartas[0], &cartas[1]);
    } else {
        printf("\nNão há cartas suficientes para comparação.\n");
    }

    return 0;
}

>>>>>>> 67f9b52 (Tema 2 Super Trunfo em C: desenvolvendo a lógica do jogo - Desafio Novato)
