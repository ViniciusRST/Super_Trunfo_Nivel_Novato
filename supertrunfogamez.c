#include <stdio.h>

int main(){
    char estadoA, estadoB, codigoA[15], codigoB[20], cidadeA[50], cidadeB[50]; //char, []-> indica quantidade de caracteres// 
    float areaA, areaB, pibA, pibB; //float para números reais.
    int populacaoA, populacaoB, pontos_turisticosA, pontos_turisticosB; //int para números inteiros.

    //Primeira Carta<


    printf("\nCodigo da Carta: 01");
    printf("\nEstado: Bahia");
    printf("\nCidade: Salvador");

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

    printf("\nInsira o Produto Interno Bruto da cidade ");
    printf("\nPIB: ");
    scanf(" %f", &pibA); //%f para leitura de numeros reais

    printf("\nInsira a quantidade de pontos turisticos da cidade ");
    printf("\nPontos Turisticos: ");
    scanf(" %d", &pontos_turisticosA); //%d para numeros inteiros



    //Segunda Carta<

    printf("\nCodigo da carta: 02");
    printf("\nEstado: Espirito Santo");
    printf("\nNome da Cidade: ");

    printf("\nDigite uma letra de A a H para representar o segundo estado.");
    printf("\nEstado: ");
    scanf(" %c", &estadoB);

    printf("\nEscolha entre 1 e 4 para definir o numero da carta.");
    printf("\nNumero: ");
    scanf(" %2s", &codigoB);

    printf("\nInsira o nome da segunda cidade.");
    printf("\nNome da cidade:");
    getchar();
    fgets(cidadeB, sizeof(cidadeB), stdin);

    printf("\nInsira a quantidade de habitantes. ");
    printf("\nPopulacao: ");
    scanf(" %d", &populacaoB);

    printf("\nInsira a area territorial da cidade");
    printf("\nArea em Km2: ");
    scanf(" %f", &areaB);

    printf("\nInsira o valor do produto interno bruto da cidade");
    printf("\nPIB: ");
    scanf(" %f", &pibB);

    printf("\nInsira a quantidade de pontos turisticos da cidade");
    printf("\nPontos turisticos: ");
    scanf(" %d", &pontos_turisticosB);


//Mostrar Dados das Cartas<
    //Carta 1<

    printf("\nCodigo da Carta: 01");
    printf("\nEstado: Bahia");
    printf("\nCidade: Salvador");

    printf("Estado:'%c'\n", estadoA); // %c para imprimir 1 caracter
    printf("Codigo: %c%2s\n", estadoA, codigoA); //%c%2s para imprimir um caractere e uma string para gerar o código da carta. Estado + número.
    printf("Nome da cidade: %s", cidadeA);//%s para imprimir a string
    printf("Populacao: %d\n", populacaoA);//%d para numeros inteiro
    printf("Area em Km2: %f\n", &areaA); //%2.f para imprimir numero real com 2 casas decimais 
    printf("PIB: %.2f Bilhoes de Reais\n", &pibA);
    printf("Pontos turisticos: %d\n", &pontos_turisticosA); //%d para numero inteiro

//Carta 2<

printf("\nCodigo da Carta: 02");
printf("\nEstado: Espirito Santo");
printf("\nCidade: Vitoria");

printf("Estado: '%c'\n", estadoB);
printf("Codigo: %c%2s \n", estadoB, &codigoB);
printf("Nome da cidade: %s", cidadeB);
printf("Populacao: %d\n", populacaoB);
printf("Area: %.2f km2 \n", areaB);
printf("PIB: %.2f bilhoes de reais \n", pibB);
printf("Pontos turisticos: %d \n", pontos_turisticosB);



return 0;




}












