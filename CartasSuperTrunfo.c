#include <stdio.h>

int main() {
    // variáveis
    char estado;                // espaço em memória para armazenar  um caractere que representa o estado
    char nomeCidade[51];        // espaço em memória para armazenar o nome da cidade com suporte a 50 caracteres
    char codigoCarta[4];        // espaço em memória para armazenar o código da carta com suporte a 3 caracteres
    int populacao;              // espaço em memória para armazenar a população da cidade.
    float area;                 // espaço em memória para armazenar a área da cidade com suporte a número decimal
    float pib;                  // espaço em memória para armazenar o pib da cidade com suporte a número decimal
    int numeroPontosTuristicos; // espaço em memória para armazenar a quantidade de pontos turísticos da cidade
    
    // Cadastro da carta
    printf("Para começar, insira as informações da carta...\n");
    
    printf("Digite uma letra de A até H que representa o estado: ");
    scanf("%c", &estado);                                           // solicita o estado e armazena na variável estado
    printf("Digite o código da carta: ");
    scanf("%s", &codigoCarta);                                      // solicita o código da carta e armaena na variável codigoCarta
    printf("Digite o nome da cidade: ");
    scanf("%s", &nomeCidade);                                       // solicita o nome da cidade e armazena na variável nomeCidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);                                        // solicita a população da cidade e armazena na variável populacao
    printf("Digite a área de cidade em Km²: ");
    scanf("%f", &area);                                             // solicita a área da cidade e armazena na variável area
    printf("Digite o PIB: ");
    scanf("%f", &pib);                                              // solicita o PIB da cidade e armazena na variável PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos);                           // solicita o PIB da cidade e armazena na variável PIB
    
    // Imprime as informações da carta inserida anteriormente
    printf("\n\nImprimindo as informações da carta...");
    printf("\nEstado: %c", estado);
    printf("\nCódigo da carta: %s", codigoCarta);
    printf("\nNome da Cidade: %s", nomeCidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2f Km²", area);                             // %.2f imprime a área com dois dígitos decimais
    printf("\nPIB: %.2f", pib);                                   // %.2f imprime o valor do PIB com dois dígitos decimais
    printf("\nNúmero de pontos turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
