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

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // variáveis declaradas, estado, código, cidade, população, pontoturístico, area e PIB da primeira e segunda carta
    char estado, codigocarta[4], nome_city[40], estado2, codigocarta2[4], nome_city2[40];
    int ponto_turistico, ponto_turistico2;
    float area, PIB, densi_popu = 0, PIB_capita = 0,area2, PIB2, densi_popu2 = 0, PIB_capita2 = 0; 
    float superpoder, superpoder2;
    unsigned long int populacao, populacao2;
    int opcao;

    printf("*** Informacoes da primeira carta ***\n");

    printf("Qual o estado escolhido?\n"); 
    scanf(" %c", &estado); // adicionado um espaço antes para que o scanf ignore qualquer caracter em branco ou uma quebra de linha decorrente do \n
		
    printf("Qual o codigo da carta?\n");
    scanf("%s", codigocarta);
	
	printf("Qual o nome da cidade?\n");
	getchar();
	fgets(nome_city, 40, stdin);
	nome_city[strcspn(nome_city, "\n")] = '\0';

	printf("Qual a populacao da cidade?\n");
	scanf("%lu", &populacao);
	
	printf("Quantos pontos turisticos tem?\n");
	scanf("%d", &ponto_turistico);
	
	printf("Qual o tamanho da area?\n");
	scanf("%f", &area);
	
	printf("Qual o PIB?\n");
	scanf("%f", &PIB);
    
    printf("=============================\n");

    printf("*** Informacoes da segunda carta ***\n");

    printf("Qual o estado escolhido?\n"); 
    scanf(" %c", &estado2); 
		
    printf("Qual o codigo da carta?\n");
    scanf("%s", codigocarta2);
	
	printf("Qual o nome da cidade?\n");
	getchar();
	fgets(nome_city2, 40, stdin);
	nome_city2[strcspn(nome_city2, "\n")] = '\0';

	printf("Qual a populacao da cidade?\n");
	scanf("%lu", &populacao2);
	
	printf("Quantos pontos turisticos tem?\n");
	scanf("%d", &ponto_turistico2);
	
	printf("Qual o tamanho da area?\n");
	scanf("%f", &area2);
	
	printf("Qual o PIB?\n");
	scanf("%f", &PIB2);
	
    // informações da primeira carta

    densi_popu = populacao / area;
    PIB_capita = PIB / populacao;

    superpoder = (float) populacao + (float) ponto_turistico + area + (1/densi_popu) + PIB + PIB_capita;

    printf("Cartas Registradas:\n");
    printf("=============================\n");
    printf("|Carta 1|\n");
    printf("Estado: %c\n", estado); // MOSTRA PARA O USUÁRIO O ESTADO DA PRIMEIRA CARTA
    printf("Codigo: %3s\n", codigocarta); // MOSTRA PARA O USUÁRIO CODIGO DA PRIMEIRA CARTA
    printf("Nome da cidade: %s\n", nome_city); // MOSTRA O NOME DA CIDADE DA PRIMEIRA CARTA
    printf("Populacao: %lu\n", populacao); // MOSTRA A POPULAÇÃO DA PRIMEIRA CARTA
    printf("Pontos turisticos: %d\n", ponto_turistico); //MOSTRA OS PONTOS TURÍSTICOS DA PRIMEIRA CARTA
    printf("Area: %.2f km²\n", area); // MOSTRA AREA DA PRIMEIRA CARTA
    printf("Densidade populacional: %.2f hab/km²\n", densi_popu); // MOSTRA A DENSIDADE POPULACIONAL DA CIDADE DA PRIMEIRA CARTA
    printf("PIB: %.2f bilhoes de reais\n", PIB); // MOSTRA O PIB DA PRIMEIRA CARTA
    printf("PIB per capita: %.2f reais\n\n", PIB_capita); // MOSTRA O PIB PER CAPITA DA CIDADE DA PRIMEIRA CARTA
    printf("Super Poder: %.2f.\n", superpoder); // MOSTRA O SUPER PODER (SOMA DE TODOS OS ATRIBUTOS ANTERIORES COM O INVERSO DA DENSIDADE POPULACIONAL)
    
    // informações da segunda carta

    densi_popu2 = populacao2 / area2;
    PIB_capita2 = PIB2 / populacao2;

    superpoder2 = (float) populacao2 + (float) ponto_turistico2 + area2 + (1/densi_popu2) + PIB2 + PIB_capita2;

    printf("=============================\n\n");
    printf("|Carta 2|\n");
	printf("Estado: %c\n", estado2); // MOSTRA PARA O USUÁRIO O ESTADO DA SEGUNDA CARTA
    printf("Codigo: %3s\n", codigocarta2); // MOSTRA PARA O USUÁRIO CODIGO DA SEGUNDA CARTA
    printf("Nome da cidade: %s\n", nome_city2); // MOSTRA O NOME DA CIDADE DA SEGUNDA CARTA
    printf("Populacao: %lu\n", populacao2); // MOSTRA A POPULAÇÃO DA SEGUNDA CARTA
    printf("Pontos turisticos: %d\n", ponto_turistico2); //MOSTRA OS PONTOS TURÍSTICOS DA SEGUNDA CARTA
    printf("Area: %.2f km²\n", area2); // MOSTRA AREA DA SEGUNDA CARTA
    printf("Densidade populacional: %.2f hab/km²\n", densi_popu2); // MOSTRA A DENSIDADE POPULACIONAL DA CIDADE DA SEGUNDA CARTA
    printf("PIB: %.2f bilhoes de reais\n", PIB2); // MOSTRA O PIB DA SEGUNDA CARTA
    printf("PIB per capita: %.2f reais\n\n", PIB_capita2); // MOSTRA O PIB PER CAPITA DA CIDADE DA SEGUNDA CARTA
    printf("Super Poder: %.2f\n\n", superpoder2); // MOSTRA O SUPER PODER (SOMA DE TODOS OS ATRIBUTOS ANTERIORES COM O INVERSO DA DENSIDADE POPULACIONAL)
    
    // Cria um looping para que a comparação só termine quando o usuário decidir que não quer mais comparar.
    while (opcao != 6)
    {
    
    // comparação dos atributos de cada carta
    printf("*** Comparacao das cartas ***\n\n");
    printf("1. Populacao.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Ponto turistico.\n");
    printf("5. Densidade demografica.\n");
    printf("||DIGITE 6 PARA SAIR||\n");
    printf("#Escolha um atributo para comparar!#\n");
    scanf("%d", &opcao);

    // Caso a opção do usuário nao seja válida ele terá que escolher uma opção para o programa prosseguir.
    while (opcao < 1 || opcao > 6)
    {
        printf("Opcao invalida!!\n Por favor escolha um atributo de 1 a 5!\n");
        scanf("%d", &opcao);
    }
    
    switch (opcao)
    {
    case 1:
        printf("Paises: %s - %s\n", nome_city, nome_city2);
        printf("Atributo: Populacao.\n");
        printf("Valor: %lu - %lu\n", populacao, populacao2);
        if (populacao > populacao2)
        {
            printf("%s venceu!\n", nome_city);
        } else if (populacao < populacao2) {
            printf("%s venceu!\n", nome_city2);
        } else {
            printf("###Empate!###\n");
        }
        break;
    case 2:
        printf("Paises: %s - %s\n", nome_city, nome_city2);
        printf("Atributo: Area.\n");
        printf("Valor: %.2f - %.2f\n", area, area2);
        if (area > area2)
        {
            printf("%s venceu!\n", nome_city);
        } else if (area < area2) {
            printf("%s venceu!\n", nome_city2);
        } else {
            printf("###Empate!###\n");
        }
        break;
    case 3:
        printf("Paises: %s - %s\n", nome_city, nome_city2);
        printf("Atributo: PIB.\n");
        printf("Valor: %.2f - %.2f\n", PIB, PIB2);
        if (PIB > PIB2)
        {
            printf("%s venceu!\n", nome_city);
        } else if (PIB < PIB2) {
            printf("%s venceu!\n", nome_city2);
        } else {
            printf("###Empate!###\n");
        }
        break;
    case 4:
        printf("Paises: %s - %s\n", nome_city, nome_city2);
        printf("Atributo: Ponto turistico.\n");
        printf("Valor: %d - %d\n", ponto_turistico, ponto_turistico2);
        if (ponto_turistico > ponto_turistico2)
        {
            printf("%s venceu!\n", nome_city);
        } else if (ponto_turistico < ponto_turistico2) {
            printf("%s venceu!\n", nome_city2);
        } else {
            printf("###Empate!###\n");
        }
        break;
    case 5:
        printf("Paises: %s - %s\n", nome_city, nome_city2);
        printf("Atributo: Densidade demografica.\n");
        printf("Valor: %.2f - %.2f\n", densi_popu, densi_popu2);
        if (densi_popu > densi_popu2)
        {
            printf("%s venceu!\n", nome_city);
        } else if (densi_popu < densi_popu2) {
            printf("%s venceu!\n", nome_city2);
        } else {
            printf("###Empate!###\n");
        }
        break;
    default:
        printf("\nObrigado por jogar!\n");
        break;
    }
    }
/*
    if (populacao > populacao2)
    {
        printf("Populacao: Carta 1 venceu! com um valor de: %lu\n", populacao);
    } else
    {
        printf("Populacao: Carta 2 venceu! com um valor de: %lu\n", populacao2);
    }

    if (ponto_turistico > ponto_turistico2)
    {
        printf("Pontos turisticos: Carta 1 venceu! com um valor de: %lu\n", ponto_turistico);
    } else
    {
        printf("Pontos turisticos: Carta 2 venceu! com um valor de: %d\n", ponto_turistico2);
    }

    if (area > area2)
    {
        printf("Area: Carta 1 venceu! com um valor de: %.2f km²\n", area);
    } else
    {
        printf("Area: Carta 2 venceu! com um valor de: %.2f km²\n", area2);
    }

    if (densi_popu < densi_popu2)
    {
        printf("Densidade populacional: Carta 1 venceu! com um valor de: %.2f hab/km²\n", densi_popu);
    } else
    {
        printf("Densidade populacional: Carta 2 venceu! com um valor de: %.2f hab/km²\n", densi_popu2);
    }
    
    if (PIB > PIB2)
    {
        printf("PIB: Carta 1 venceu! com um valor de: %.2f\n", PIB);
    } else
    {
        printf("PIB: Carta 2 venceu! com um valor de: %.2f\n", PIB2);
    }

    if (PIB_capita > PIB_capita2)
    {
        printf("PIB per capita: Carta 1 venceu! com um valor de: %.2f\n", PIB_capita);
    } else
    {
        printf("PIB per capita: Carta 2 venceu! com um valor de: %.2f\n", PIB_capita2);
    }

    if (superpoder > superpoder2)
    {
        printf("Super Poder: Carta 1 venceu! com um valor de: %.2f\n\n", superpoder);
    } else
    {
        printf("Super Poder: Carta 2 venceu! com um valor de: %.2f\n\n", superpoder2);
    }

    printf("--- Comparação de cartas|Atributo: Populacao ---\n");
    
    printf("Carta 1 - %s: %lu.\n", nome_city, populacao);
    printf("Carta 2 - %s: %lu.\n", nome_city2, populacao2);
    
    if (populacao > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n");
    } else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n");
    }
   */ 
    return 0;
}
