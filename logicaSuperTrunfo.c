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


    printf("=======JOGO DE CARTA SUPER TRUNFO====== \n");

    
    // DADOS CARTA 1
                
            char estado_carta1[6];                // Variável para o estado (1 caractere)
             char codigo_carta1[6];                // Código     da cidade  
          char nome_carta1[50];                 // Nome da cidade
                int populacao_carta1;                 // População da cidade
                float  area_carta1;                    // Área da cidade (em km²)
                float pib_carta1;                     // PIB da cidade (em milhões de reais)
                int numerosdepontosturisticos_carta1; // Número de pontos turísticos
            
                // Variáveis para os cálculos
                float densidade_populacional_carta1;  // Densidade populacional (hab/km²)
                float pib_per_capita_carta1 ;          // PIB per capita (milhões de reais por habitante)
            
                printf("\n");
    
    
                //dados carta2
            char estado_carta2[6];                // Variável para o estado (1 caractere)
            char codigo_carta2[6];                // Código     da cidade  
         char nome_carta2[50];                 // Nome da cidade
               int populacao_carta2;                 // População da cidade
               float  area_carta2;                    // Área da cidade (em km²)
               float pib_carta2;                     // PIB da cidade (em milhões de reais)
               int numerosdepontosturisticos_carta2; // Número de pontos turísticos
           
               // Variáveis para os cálculos
               float densidade_populacional_carta2; // Densidade populacional (hab/km²)
               float pib_per_capita_carta2 ;          // PIB per capita (milhões de reais por habitante)
    
                // Entrada de dados carta1
                printf("=====CARTA 1===== \n");
    
                printf("ESTADO (Exemplo: SP): \n");
                scanf("%s", estado_carta1);
                
                printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
                scanf("%s", codigo_carta1); 
            
                printf("Nome da cidade: \n");
                scanf(" %49[^\n]", nome_carta1);  // Captura a linha inteira, permitindo espaços no nome
            
                printf("Populacao (em habitantes): \n");
                scanf("%d", &populacao_carta1);
            
                printf("Area (em km²): \n");
                scanf("%f", &area_carta1);
            
                printf("PIB (em milhões de reais): \n");
                scanf("%f", &pib_carta1);
            
                printf("Numero de pontos turísticos: \n");
                scanf("%d", &numerosdepontosturisticos_carta1);
            
                // Cálculos para densidade populacional e PIB per capita
                densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1; // Garantir que a divisão seja feita com float
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1; // PIB per capita em milhões de reais por habitante
            
                printf("\n");
    
                 // Entrada de dados carta2
                 printf("=====CARTA 2===== \n");
    
                 printf("ESTADO (Exemplo: SP): \n");
                 scanf("%s", estado_carta2);
                 
                 printf("Codigo da cidade (EX: A01,A02,B01,B02): \n");
                 scanf("%s", codigo_carta2); 
             
                 printf("Nome da cidade: \n");
                 scanf(" %49[^\n]", nome_carta2);  // Captura a linha inteira, permitindo espaços no nome
             
                 printf("Populacao (em habitantes): \n");
                 scanf("%d", &populacao_carta2);
             
                 printf("Area (em km²): \n");
                 scanf("%f", &area_carta2);
             
                 printf("PIB (em milhões de reais): \n");
                 scanf("%f", &pib_carta2);
             
                 printf("Numero de pontos turísticos: \n");
                 scanf("%d", &numerosdepontosturisticos_carta2);
             
                 // Cálculos para densidade populacional e PIB per capita
                 densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2; // Garantir que a divisão seja feita com float
                 pib_per_capita_carta2 = pib_carta2 / populacao_carta2; // PIB per capita em milhões de reais por habitante
    
                // Saída de dados carta1
                printf("\n===== DADOS DA CARTA 1 =====\n");
                printf("Estado: %s\n", estado_carta1);
                printf("Codigo da cidade: %s\n", codigo_carta1);
                printf("Nome da cidade: %s\n", nome_carta1);
                printf("Populacao: %d habitantes\n", populacao_carta1);
                printf("Area: %.2f km²\n", area_carta1); // Formatação com 2 casas decimais
                printf("PIB: %.2f milhões de reais\n", pib_carta1); // Formatação com 2 casas decimais
                printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos_carta1);
                printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_carta1);
                printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita_carta1);
                
                // Saída de dados carta2
                printf("\n===== DADOS DA CARTA 2 =====\n");
                printf("Estado: %s\n", estado_carta2);
                printf("Codigo da cidade: %s\n", codigo_carta2);
                printf("Nome da cidade: %s\n", nome_carta2);
                printf("Populacao: %d habitantes\n", populacao_carta2);
                printf("Area: %.2f km²\n", area_carta2); // Formatação com 2 casas decimais
                printf("PIB: %.2f milhões de reais\n", pib_carta2); // Formatação com 2 casas decimais
                printf("Número de pontos turísticos: %d\n", numerosdepontosturisticos_carta2);
                printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional_carta2);
                printf("PIB per capita: %.2f milhões de reais\n", pib_per_capita_carta2);
    
                printf("\n");
    
                // COMPARAÇÃO ENTRE AS CARTAS PARA DEFINIR O GANHADOR 
        if (populacao_carta1 > populacao_carta2) {
            printf("CARTA 1 TEM A MAIOR POPULAÇÃO! \n");
            printf("A CIDADE VENCEDORA É: %s\n", nome_carta1);
        } else if (populacao_carta2 > populacao_carta1) {
            printf("CARTA 2 TEM A MAIOR POPULAÇÃO! \n");
            printf("A CIDADE VENCEDORA É: %s\n", nome_carta2);
        } else {
            printf("EMPATE! AMBAS AS CIDADES TÊM A MESMA POPULAÇÃO.\n");
        }
    
        return 0;
    }
