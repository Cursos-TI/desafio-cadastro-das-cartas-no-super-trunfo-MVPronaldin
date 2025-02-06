#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        char codigoA01[4], codigoA02[4], codigoA03[4], codigoA04[4];
        char nomeA01[20], nomeA02[20], nomeA03[20], nomeA04[20];
        int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
        float areaA01, areaA02, areaA03, areaA04;
        float pibA01, pibA02, pibA03, pibA04;
        int pontosA01, pontosA02, pontosA03, pontosA04;

        printf("Digite o código da primeira cidade do país A (Ex:A01):\n");
        scanf("%3s", codigoA01);
        printf("Digite o nome da primeira cidade do país A:\n");
        scanf("%s", nomeA01);
        printf("Digite a população da primeira cidade do país A:\n");
        scanf("%d", &populacaoA01);
        printf("Digite a área da primeira cidade do país A:\n");
        scanf("%f", &areaA01);
        printf("Digite o pib da primeira cidade do país A:\n");
        scanf("%f", &pibA01);
        printf("Digite o número de pontos turísticos da primeira cidade do país A:\n");
        scanf("%d", &pontosA01);

        printf("Digite o código da segunda cidade do país A (Ex:A02):\n");
        scanf("%3s", codigoA02);
        printf("Digite o nome da segunda cidade do país A:\n");
        scanf("%s", nomeA02);
        printf("Digite a população da segunda cidade do país A:\n");
        scanf("%d", &populacaoA02);
        printf("Digite a área(m2) da segunda cidade do país A:\n");
        scanf("%f", &areaA02);
        printf("Digite o pib da segunda cidade do país A:\n");
        scanf("%f", &pibA02);
        printf("Digite o número de pontos turísticos da segunda cidade do país A:\n");
        scanf("%d", &pontosA02);

        printf("Digite o código da terceira cidade do país A (Ex:A02):\n");
        scanf("%3s", codigoA03);
        printf("Digite o nome da terceira cidade do país A:\n");
        scanf("%s", nomeA03);
        printf("Digite a população da terceira cidade do país A:\n");
        scanf("%d", &populacaoA03);
        printf("Digite a área(m2) da terceira cidade do país A:\n");
        scanf("%f", &areaA03);
        printf("Digite o pib da terceira cidade do país A:\n");
        scanf("%f", &pibA03);
        printf("Digite o número de pontos turísticos da terceira cidade do país A:\n");
        scanf("%d", &pontosA03);


  return 0;
}
