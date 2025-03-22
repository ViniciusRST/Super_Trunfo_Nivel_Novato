#include <stdio.h>

int main(){
    char estadoA, estadoB, codigoA[15], codigoB[20], cidadeA[50], cidadeB[50]; //char, []-> indica quantidade de caracteres// 
    float areaA, areaB, pibA, pibB; //float para números reais.
    float densidadeA, densidadeB;
    float pib_per_capitaA, pib_per_capitaB;
    float divisaoA, divisaoB;
    float divisaoC, divisaoD; 
    int populacaoA, populacaoB, pontos_turisticosA, pontos_turisticosB; //int para números inteiros.

    //Primeira Carta<


    printf("\nCodigo da Carta: 01");

    printf("\nEscolha uma letra de A a H para representar o primeiro Estado."); //printf para imprimir texto na tela, \n para quebrar a linha.
    printf("\nEstado: ");
    scanf(" %c", &estadoA); // %c para ler char(caractere), o espaço antes do %c para limpar o buffer do teclado. (&) para pagar o endereço da variável.

    printf("\nEscolha um numero entre 01 e 04 para definir o numero da carta. ");
    printf("\nNumero: ");
    scanf(" %2s", codigoA); //%2s para ler string de 2 caracteres, sem & pois ja existe um vetor '[]' 

    printf("\nInsira o nome da primeira cidade");
    printf("\nNome da cidade: ");
    getchar(); //limpa o buffer do teclado
    fgets(cidadeA, sizeof(cidadeA), stdin); //fgets para ler strings com espaços, O sizeof para limitar  o tamanho da string. stdin é para ler o teclado

    printf("\nInsira a quantidade de habitantes da cidade");
    printf("\nPopulacao: ");
    scanf("%d", &populacaoA); //%d leitura de numero inteiro

    printf("\nInsira a area territorial da cidade ");
    printf("\nArea em Km2: ");
    scanf(" %f", &areaA); //%f para leitura de numeros reais

    printf("\nInsira o Produto Interno Bruto da cidade");
    printf("\nPIB: ");
    scanf(" %f", &pibA); //%f para leitura de numeros reais

    printf("\nInsira a quantidade de pontos turisticos da cidade ");
    printf("\nPontos Turisticos: ");
    scanf(" %d", &pontos_turisticosA); //%d para numeros inteiros

    divisaoA = populacaoA / areaA;
    printf("\nDensidade populacional: %.2f hab/Km2\n", divisaoA);
    divisaoB = pibA/populacaoA;
    printf("\nPIB per capita: %f reais/hab\n", divisaoB);
   

    //Segunda Carta<

    printf("\nCodigo da carta: 02");

    printf("\nDigite uma letra de A a H para representar o segundo estado.");
    printf("\nEstado: ");
    scanf(" %c", &estadoB);

    printf("\nEscolha entre 1 e 4 para definir o número da carta.");
    printf("\nNumero: ");
    scanf("%s", codigoB);

    printf("\nInsira o nome da segunda cidade");
    printf("\nNome da cidade: ");
    getchar();
    fgets(cidadeB, sizeof(cidadeB), stdin);

    printf("\nInsira a quantidade de habitantes. ");
    printf("\nPopulacao: ");
    scanf(" %d", &populacaoB);

    printf("\nInsira a area territorial da cidade");
    printf("\nArea Km2: ");
    scanf("%f", &areaB);

    printf("Insira o valor do produto interno bruto da cidade \n");
    printf("PIB: ");
    scanf(" %f", &pibB);

    printf("\nInsira a quantidade de pontos turisticos da cidade");
    printf("\nPontos turisticos: ");
    scanf(" %d", &pontos_turisticosB);

    divisaoC = populacaoB/areaB;
    printf("\nDensidade populacional: %f Hab/km2\n", divisaoC);
    divisaoD = pibB/populacaoB;
    printf("\nPIB per capita: %f reais/habitante\n", divisaoD);


//Mostrar Dados das Cartas<
    //Carta 1<

    printf("\nCodigo da Carta: 01\n");

    printf("Estado: '%c' \n", estadoA);
    printf("Codigo: %c%2s \n", estadoA, codigoA);
    printf("Nome da cidade: %s", cidadeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area: %.2f km2 \n", areaA);
    printf("PIB: %.3f bilhoes de reais \n", pibA);
    printf("Pontos turisticos: %d \n", pontos_turisticosA);
    printf("Densidade populacional: %.2f/km2\n", divisaoA);
    printf("PIB per capita: %.2freais/habitante\n", divisaoB);

    //Carta 2<

    printf("\nCodigo da Carta: 02\n");

    printf("Estado: '%c' \n", estadoB);
    printf("Codigo: %c%2s \n", estadoB, codigoB);
    printf("Nome da cidade: %s", cidadeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area: %.2f km2 \n", areaB);
    printf("PIB: %.3f bilhoes de reais \n", pibB);
    printf("Pontos turisticos: %d \n", pontos_turisticosB);
    printf("Densidade populacional: %.2f/km²\n", divisaoC);
    printf("PIB per capita: %.2f reais/habitante\n", divisaoD);


return 0;




}












