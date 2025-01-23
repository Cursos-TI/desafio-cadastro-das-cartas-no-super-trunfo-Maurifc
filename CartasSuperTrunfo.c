    #include <stdio.h>

    int main() {
        /*
        VARIÁVEIS
        */
        
        // variáveis para a carta 1
        char estado;                  // espaço em memória para armazenar  um caractere que representa o estado
        char nomeCidade[51];          // espaço em memória para armazenar o nome da cidade com suporte a 50 caracteres
        char codigoCarta[4];          // espaço em memória para armazenar o código da carta com suporte a 3 caracteres
        unsigned long int populacao;  // espaço em memória para armazenar a população da cidade com suporte a um número muito maior
        float area;                   // espaço em memória para armazenar a área da cidade com suporte a número decimal
        float pib;                    // espaço em memória para armazenar o pib da cidade com suporte a número decimal
        int numeroPontosTuristicos;   // espaço em memória para armazenar a quantidade de pontos turísticos da cidade
        float densidadePopulacional;  // espaço em memória para armazenar a densidade populacional da cidade com suporte a número decimal
        float pibPerCapita;           // espaço em memória para armazenar o pib per capta com suporte a número decimal
        float superPoder;             // espaço para armazenar a soma de todas as propriedade

        // variáveis para a carta 2
        char estado2;
        char nomeCidade2[51];
        char codigoCarta2[4];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int numeroPontosTuristicos2;
        float densidadePopulacional2;
        float pibPerCapita2;
        float superPoder2;
        
        /*
        CARTA 1
        */
        
        // Cadastro da carta 1
        printf("Para começar, insira as informações da carta 1...\n");
        
        printf("Digite uma letra de A até H que representa o estado: ");
        scanf("%c", &estado);                                           // solicita o estado e armazena na variável estado
        printf("Digite o código da carta: ");
        scanf("%s", &codigoCarta);                                      // solicita o código da carta e armaena na variável codigoCarta
        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeCidade);                                       // solicita o nome da cidade e armazena na variável nomeCidade
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao);                                        // solicita a população da cidade e armazena na variável populacao
        printf("Digite a área de cidade em Km²: ");
        scanf("%f", &area);                                             // solicita a área da cidade e armazena na variável area
        printf("Digite o PIB: ");
        scanf("%f", &pib);                                              // solicita o PIB da cidade e armazena na variável PIB
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numeroPontosTuristicos);                           // solicita o PIB da cidade e armazena na variável PIB
        
        // calculo da densidade populacional
        densidadePopulacional = populacao / area;

        // calculo do pib per capita
        pibPerCapita = pib / populacao;

        // calculo do super poder
        superPoder = populacao + area + pib + pibPerCapita + (densidadePopulacional * -1) + numeroPontosTuristicos;

        /*
        CARTA 2
        */

        // Cadastro da carta 2
        printf("\nAgora, insira as informações da carta 2...\n");
        
        printf("Digite uma letra de A até H que representa o estado: ");
        scanf(" %c", &estado2);
        printf("Digite o código da carta: ");
        scanf("%s", &codigoCarta2);
        printf("Digite o nome da cidade: ");
        scanf("%s", &nomeCidade2);
        printf("Digite a população da cidade: ");
        scanf("%lu", &populacao2);
        printf("Digite a área de cidade em Km²: ");
        scanf("%f", &area2);
        printf("Digite o PIB: ");
        scanf("%f", &pib2);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &numeroPontosTuristicos2);
        
        // calculo da densidade populacional
        densidadePopulacional2 = populacao2 / area2;

        // calculo do pib per capita
        pibPerCapita2 = pib2 / populacao2;

        // calculo do super poder
        superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + (densidadePopulacional2 * -1) + numeroPontosTuristicos2;

        /*
        COMPARAÇÃO DAS CARTAS
        */
        printf("\nComparando as propriedades das cartas...\n1 = Carta 1 Venceu\n0 = Carta 2 venceu\n");
        printf("\nPopulação: %d", populacao > populacao2);
        printf("\nÁrea: %d", area > area2);
        printf("\nPIB: %d", pib > pib2);
        printf("\nNúmero de pontos turísticos: %d", numeroPontosTuristicos > numeroPontosTuristicos2);
        printf("\nDensidade Populacional: %d", densidadePopulacional < densidadePopulacional2);
        printf("\nPIB per Capita: %d", pibPerCapita > pibPerCapita2);
        printf("\nSuper Poder: %d\n", superPoder > superPoder2);


        return 0;
    }
