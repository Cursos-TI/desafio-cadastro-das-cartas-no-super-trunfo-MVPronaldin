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

        printf("Digite o código da primeira cidade do país A (Ex:A02):\n");
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

        printf("\nDigite o código da segunda cidade do país A (Ex:A02):\n");
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

        printf("\nDigite o código da terceira cidade do país A (Ex:A02):\n");
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

        printf("\nDigite o código da quarta cidade do país A (Ex:A02):\n");
        scanf("%3s", codigoA04);
        printf("Digite o nome da quarta cidade do país A:\n");
        scanf("%s", nomeA04);
        printf("Digite a população da quarta cidade do país A:\n");
        scanf("%d", &populacaoA04);
        printf("Digite a área(m2) da quarta cidade do país A:\n");
        scanf("%f", &areaA04);
        printf("Digite o pib da quarta cidade do país A:\n");
        scanf("%f", &pibA04);
        printf("Digite o número de pontos turísticos da quarta cidade do país A:\n");
        scanf("%d", &pontosA04);

        char codigoB01[4], codigoB02[4], codigoB03[4], codigoB04[4];
        char nomeB01[20], nomeB02[20], nomeB03[20], nomeB04[20];
        int populacaoB01, populacaoB02, populacaoB03, populacaoB04;
        float areaB01, areaB02, areaB03, areaB04;
        float pibB01, pibB02, pibB03, pibB04;
        int pontosB01, pontosB02, pontosB03, pontosB04;

        printf("\nDigite o código da primeira cidade do país B (Ex:A02):\n");
        scanf("%3s", codigoB01);
        printf("Digite o nome da primeira cidade do país B:\n");
        scanf("%s", nomeB01);
        printf("Digite a população da primeira cidade do país B:\n");
        scanf("%d", &populacaoB01);
        printf("Digite a área da primeira cidade do país B:\n");
        scanf("%f", &areaB01);
        printf("Digite o pib da primeira cidade do país B:\n");
        scanf("%f", &pibB01);
        printf("Digite o número de pontos turísticos da primeira cidade do país B:\n");
        scanf("%d", &pontosB01);

        printf("\nDigite o código da segunda cidade do país B (Ex:A02):\n");
        scanf("%3s", codigoB02);
        printf("Digite o nome da segunda cidade do país B:\n");
        scanf("%s", nomeB02);
        printf("Digite a população da segunda cidade do país B:\n");
        scanf("%d", &populacaoB02);
        printf("Digite a área(m2) da segunda cidade do país B:\n");
        scanf("%f", &areaB02);
        printf("Digite o pib da segunda cidade do país B:\n");
        scanf("%f", &pibB02);
        printf("Digite o número de pontos turísticos da segunda cidade do país B:\n");
        scanf("%d", &pontosB02);

        printf("\nDigite o código da terceira cidade do país B (Ex:A02):\n");
        scanf("%3s", codigoB03);
        printf("Digite o nome da terceira cidade do país B:\n");
        scanf("%s", nomeB03);
        printf("Digite a população da terceira cidade do país B:\n");
        scanf("%d", &populacaoB03);
        printf("Digite a área(m2) da terceira cidade do país B:\n");
        scanf("%f", &areaB03);
        printf("Digite o pib da terceira cidade do país B:\n");
        scanf("%f", &pibB03);
        printf("Digite o número de pontos turísticos da terceira cidade do país B:\n");
        scanf("%d", &pontosB03);

        printf("\nDigite o código da quarta cidade do país B (Ex:A02):\n");
        scanf("%3s", codigoB04);
        printf("Digite o nome da quarta cidade do país B:\n");
        scanf("%s", nomeB04);
        printf("Digite a população da quarta cidade do país B:\n");
        scanf("%d", &populacaoB04);
        printf("Digite a área(m2) da quarta cidade do país B:\n");
        scanf("%f", &areaB04);
        printf("Digite o pib da quarta cidade do país B:\n");
        scanf("%f", &pibB04);
        printf("Digite o número de pontos turísticos da quarta cidade do país B:\n");
        scanf("%d", &pontosB04);

        char codigoC01[4], codigoC02[4], codigoC03[4], codigoC04[4];
        char nomeC01[20], nomeC02[20], nomeC03[20], nomeC04[20];
        int populacaoC01, populacaoC02, populacaoC03, populacaoC04;
        float areaC01, areaC02, areaC03, areaC04;
        float pibC01, pibC02, pibC03, pibC04;
        int pontosC01, pontosC02, pontosC03, pontosC04;

        printf("\nDigite o código da primeira cidade do país C (Ex:A02):\n");
        scanf("%3s", codigoC01);
        printf("Digite o nome da primeira cidade do país C:\n");
        scanf("%s", nomeC01);
        printf("Digite a população da primeira cidade do país C:\n");
        scanf("%d", &populacaoC01);
        printf("Digite a área da primeira cidade do país C:\n");
        scanf("%f", &areaC01);
        printf("Digite o pib da primeira cidade do país C:\n");
        scanf("%f", &pibC01);
        printf("Digite o número de pontos turísticos da primeira cidade do país C:\n");
        scanf("%d", &pontosC01);

        printf("\nDigite o código da segunda cidade do país C (Ex:A02):\n");
        scanf("%3s", codigoC02);
        printf("Digite o nome da segunda cidade do país C:\n");
        scanf("%s", nomeC02);
        printf("Digite a população da segunda cidade do país C:\n");
        scanf("%d", &populacaoC02);
        printf("Digite a área(m2) da segunda cidade do país C:\n");
        scanf("%f", &areaC02);
        printf("Digite o pib da segunda cidade do país C:\n");
        scanf("%f", &pibC02);
        printf("Digite o número de pontos turísticos da segunda cidade do país C:\n");
        scanf("%d", &pontosC02);

        printf("\nDigite o código da terceira cidade do país C (Ex:A02):\n");
        scanf("%3s", codigoC03);
        printf("Digite o nome da terceira cidade do país C:\n");
        scanf("%s", nomeC03);
        printf("Digite a população da terceira cidade do país C:\n");
        scanf("%d", &populacaoC03);
        printf("Digite a área(m2) da terceira cidade do país C:\n");
        scanf("%f", &areaC03);
        printf("Digite o pib da terceira cidade do país C:\n");
        scanf("%f", &pibC03);
        printf("Digite o número de pontos turísticos da terceira cidade do país C:\n");
        scanf("%d", &pontosC03);

        printf("\nDigite o código da quarta cidade do país C (Ex:A02):\n");
        scanf("%3s", codigoC04);
        printf("Digite o nome da quarta cidade do país C:\n");
        scanf("%s", nomeC04);
        printf("Digite a população da quarta cidade do país C:\n");
        scanf("%d", &populacaoC04);
        printf("Digite a área(m2) da quarta cidade do país C:\n");
        scanf("%f", &areaC04);
        printf("Digite o pib da quarta cidade do país C:\n");
        scanf("%f", &pibC04);
        printf("Digite o número de pontos turísticos da quarta cidade do país C:\n");
        scanf("%d", &pontosC04);

        char codigoD01[4], codigoD02[4], codigoD03[4], codigoD04[4];
        char nomeD01[20], nomeD02[20], nomeD03[20], nomeD04[20];
        int populacaoD01, populacaoD02, populacaoD03, populacaoD04;
        float areaD01, areaD02, areaD03, areaD04;
        float pibD01, pibD02, pibD03, pibD04;
        int pontosD01, pontosD02, pontosD03, pontosD04;

        printf("\nDigite o código da primeira cidade do país D (Ex:A02):\n");
        scanf("%3s", codigoD01);
        printf("Digite o nome da primeira cidade do país D:\n");
        scanf("%s", nomeD01);
        printf("Digite a população da primeira cidade do país D:\n");
        scanf("%d", &populacaoD01);
        printf("Digite a área da primeira cidade do país D:\n");
        scanf("%f", &areaD01);
        printf("Digite o pib da primeira cidade do país D:\n");
        scanf("%f", &pibD01);
        printf("Digite o número de pontos turísticos da primeira cidade do país D:\n");
        scanf("%d", &pontosD01);

        printf("\nDigite o código da segunda cidade do país D (Ex:A02):\n");
        scanf("%3s", codigoD02);
        printf("Digite o nome da segunda cidade do país D:\n");
        scanf("%s", nomeD02);
        printf("Digite a população da segunda cidade do país D:\n");
        scanf("%d", &populacaoD02);
        printf("Digite a área(m2) da segunda cidade do país D:\n");
        scanf("%f", &areaD02);
        printf("Digite o pib da segunda cidade do país D:\n");
        scanf("%f", &pibD02);
        printf("Digite o número de pontos turísticos da segunda cidade do país D:\n");
        scanf("%d", &pontosD02);

        printf("\nDigite o código da terceira cidade do país D (Ex:A02):\n");
        scanf("%3s", codigoD03);
        printf("Digite o nome da terceira cidade do país D:\n");
        scanf("%s", nomeD03);
        printf("Digite a população da terceira cidade do país D:\n");
        scanf("%d", &populacaoD03);
        printf("Digite a área(m2) da terceira cidade do país D:\n");
        scanf("%f", &areaD03);
        printf("Digite o pib da terceira cidade do país D:\n");
        scanf("%f", &pibD03);
        printf("Digite o número de pontos turísticos da terceira cidade do país D:\n");
        scanf("%d", &pontosD03);

        printf("\nDigite o código da quarta cidade do país D (Ex:A02):\n");
        scanf("%3s", codigoD04);
        printf("Digite o nome da quarta cidade do país D:\n");
        scanf("%s", nomeD04);
        printf("Digite a população da quarta cidade do país D:\n");
        scanf("%d", &populacaoD04);
        printf("Digite a área(m2) da quarta cidade do país D:\n");
        scanf("%f", &areaD04);
        printf("Digite o pib da quarta cidade do país D:\n");
        scanf("%f", &pibD04);
        printf("Digite o número de pontos turísticos da quarta cidade do país D:\n");
        scanf("%d", &pontosD04);

        char codigoE01[4], codigoE02[4], codigoE03[4], codigoE04[4];
        char nomeE01[20], nomeE02[20], nomeE03[20], nomeE04[20];
        int populacaoE01, populacaoE02, populacaoE03, populacaoE04;
        float areaE01, areaE02, areaE03, areaE04;
        float pibE01, pibE02, pibE03, pibE04;
        int pontosE01, pontosE02, pontosE03, pontosE04;

        printf("\nDigite o código da primeira cidade do país E (Ex:A02):\n");
        scanf("%3s", codigoE01);
        printf("Digite o nome da primeira cidade do país E:\n");
        scanf("%s", nomeE01);
        printf("Digite a população da primeira cidade do país E:\n");
        scanf("%d", &populacaoE01);
        printf("Digite a área da primeira cidade do país E:\n");
        scanf("%f", &areaE01);
        printf("Digite o pib da primeira cidade do país E:\n");
        scanf("%f", &pibE01);
        printf("Digite o número de pontos turísticos da primeira cidade do país E:\n");
        scanf("%d", &pontosE01);

        printf("\nDigite o código da segunda cidade do país E (Ex:A02):\n");
        scanf("%3s", codigoE02);
        printf("Digite o nome da segunda cidade do país E:\n");
        scanf("%s", nomeE02);
        printf("Digite a população da segunda cidade do país E:\n");
        scanf("%d", &populacaoE02);
        printf("Digite a área(m2) da segunda cidade do país E:\n");
        scanf("%f", &areaE02);
        printf("Digite o pib da segunda cidade do país E:\n");
        scanf("%f", &pibE02);
        printf("Digite o número de pontos turísticos da segunda cidade do país E:\n");
        scanf("%d", &pontosE02);

        printf("\nDigite o código da terceira cidade do país E (Ex:A02):\n");
        scanf("%3s", codigoE03);
        printf("Digite o nome da terceira cidade do país E:\n");
        scanf("%s", nomeE03);
        printf("Digite a população da terceira cidade do país E:\n");
        scanf("%d", &populacaoE03);
        printf("Digite a área(m2) da terceira cidade do país E:\n");
        scanf("%f", &areaE03);
        printf("Digite o pib da terceira cidade do país E:\n");
        scanf("%f", &pibE03);
        printf("Digite o número de pontos turísticos da terceira cidade do país E:\n");
        scanf("%d", &pontosE03);

        printf("\nDigite o código da quarta cidade do país E (Ex:A02):\n");
        scanf("%3s", codigoE04);
        printf("Digite o nome da quarta cidade do país E:\n");
        scanf("%s", nomeE04);
        printf("Digite a população da quarta cidade do país E:\n");
        scanf("%d", &populacaoE04);
        printf("Digite a área(m2) da quarta cidade do país E:\n");
        scanf("%f", &areaE04);
        printf("Digite o pib da quarta cidade do país E:\n");
        scanf("%f", &pibE04);
        printf("Digite o número de pontos turísticos da quarta cidade do país E:\n");
        scanf("%d", &pontosE04);

        char codigoF01[4], codigoF02[4], codigoF03[4], codigoF04[4];
        char nomeF01[20], nomeF02[20], nomeF03[20], nomeF04[20];
        int populacaoF01, populacaoF02, populacaoF03, populacaoF04;
        float areaF01, areaF02, areaF03, areaF04;
        float pibF01, pibF02, pibF03, pibF04;
        int pontosF01, pontosF02, pontosF03, pontosF04;

        printf("\nDigite o código da primeira cidade do país F (Ex:A02):\n");
        scanf("%3s", codigoF01);
        printf("Digite o nome da primeira cidade do país F:\n");
        scanf("%s", nomeF01);
        printf("Digite a população da primeira cidade do país F:\n");
        scanf("%d", &populacaoF01);
        printf("Digite a área da primeira cidade do país F:\n");
        scanf("%f", &areaF01);
        printf("Digite o pib da primeira cidade do país F:\n");
        scanf("%f", &pibF01);
        printf("Digite o número de pontos turísticos da primeira cidade do país F:\n");
        scanf("%d", &pontosF01);

        printf("\nDigite o código da segunda cidade do país F (Ex:A02):\n");
        scanf("%3s", codigoF02);
        printf("Digite o nome da segunda cidade do país F:\n");
        scanf("%s", nomeF02);
        printf("Digite a população da segunda cidade do país F:\n");
        scanf("%d", &populacaoF02);
        printf("Digite a área(m2) da segunda cidade do país F:\n");
        scanf("%f", &areaF02);
        printf("Digite o pib da segunda cidade do país F:\n");
        scanf("%f", &pibF02);
        printf("Digite o número de pontos turísticos da segunda cidade do país F:\n");
        scanf("%d", &pontosF02);

        printf("\nDigite o código da terceira cidade do país F (Ex:A02):\n");
        scanf("%3s", codigoF03);
        printf("Digite o nome da terceira cidade do país F:\n");
        scanf("%s", nomeF03);
        printf("Digite a população da terceira cidade do país F:\n");
        scanf("%d", &populacaoF03);
        printf("Digite a área(m2) da terceira cidade do país F:\n");
        scanf("%f", &areaF03);
        printf("Digite o pib da terceira cidade do país F:\n");
        scanf("%f", &pibF03);
        printf("Digite o número de pontos turísticos da terceira cidade do país F:\n");
        scanf("%d", &pontosF03);

        printf("\nDigite o código da quarta cidade do país F (Ex:A02):\n"); 
        scanf("%3s", codigoF04);
        printf("Digite o nome da quarta cidade do país F:\n");
        scanf("%s", nomeF04);
        printf("Digite a população da quarta cidade do país F:\n");
        scanf("%d", &populacaoF04);
        printf("Digite a área(m2) da quarta cidade do país F:\n");
        scanf("%f", &areaF04);
        printf("Digite o pib da quarta cidade do país F:\n");
        scanf("%f", &pibF04);
        printf("Digite o número de pontos turísticos da quarta cidade do país F:\n");
        scanf("%d", &pontosF04);

        char codigoG01[4], codigoG02[4], codigoG03[4], codigoG04[4];
        char nomeG01[20], nomeG02[20], nomeG03[20], nomeG04[20];
        int populacaoG01, populacaoG02, populacaoG03, populacaoG04;
        float areaG01, areaG02, areaG03, areaG04;
        float pibG01, pibG02, pibG03, pibG04;
        int pontosG01, pontosG02, pontosG03, pontosG04;

        printf("\nDigite o código da primeira cidade do país G (Ex:A02):\n");
        scanf("%3s", codigoG01);
        printf("Digite o nome da primeira cidade do país G:\n");
        scanf("%s", nomeG01);
        printf("Digite a população da primeira cidade do país G:\n");
        scanf("%d", &populacaoG01);
        printf("Digite a área da primeira cidade do país G:\n");
        scanf("%f", &areaG01);
        printf("Digite o pib da primeira cidade do país G:\n");
        scanf("%f", &pibG01);
        printf("Digite o número de pontos turísticos da primeira cidade do país G:\n");
        scanf("%d", &pontosG01);

        printf("\nDigite o código da segunda cidade do país G (Ex:A02):\n");
        scanf("%3s", codigoG02);
        printf("Digite o nome da segunda cidade do país G:\n");
        scanf("%s", nomeG02);
        printf("Digite a população da segunda cidade do país G:\n");
        scanf("%d", &populacaoG02);
        printf("Digite a área(m2) da segunda cidade do país G:\n");
        scanf("%f", &areaG02);
        printf("Digite o pib da segunda cidade do país G:\n");
        scanf("%f", &pibG02);
        printf("Digite o número de pontos turísticos da segunda cidade do país G:\n");
        scanf("%d", &pontosG02);

        printf("\nDigite o código da terceira cidade do país G (Ex:A02):\n");
        scanf("%3s", codigoG03);
        printf("Digite o nome da terceira cidade do país G:\n");
        scanf("%s", nomeG03);
        printf("Digite a população da terceira cidade do país G:\n");
        scanf("%d", &populacaoG03);
        printf("Digite a área(m2) da terceira cidade do país G:\n");
        scanf("%f", &areaG03);
        printf("Digite o pib da terceira cidade do país G:\n");
        scanf("%f", &pibG03);
        printf("Digite o número de pontos turísticos da terceira cidade do país G:\n");
        scanf("%d", &pontosG03);

        printf("\nDigite o código da quarta cidade do país G (Ex:A02):\n"); 
        scanf("%3s", codigoG04);
        printf("Digite o nome da quarta cidade do país G:\n");
        scanf("%s", nomeG04);
        printf("Digite a população da quarta cidade do país G:\n");
        scanf("%d", &populacaoG04);
        printf("Digite a área(m2) da quarta cidade do país G:\n");
        scanf("%f", &areaG04);
        printf("Digite o pib da quarta cidade do país G:\n");
        scanf("%f", &pibG04);
        printf("Digite o número de pontos turísticos da quarta cidade do país G:\n");
        scanf("%d", &pontosG04);

        char codigoH01[4], codigoH02[4], codigoH03[4], codigoH04[4];
        char nomeH01[20], nomeH02[20], nomeH03[20], nomeH04[20];
        int populacaoH01, populacaoH02, populacaoH03, populacaoH04;
        float areaH01, areaH02, areaH03, areaH04;
        float pibH01, pibH02, pibH03, pibH04;
        int pontosH01, pontosH02, pontosH03, pontosH04;

        printf("\nDigite o código da primeira cidade do país H (Ex:A02):\n");
        scanf("%3s", codigoH01);
        printf("Digite o nome da primeira cidade do país H:\n");
        scanf("%s", nomeH01);
        printf("Digite a população da primeira cidade do país H:\n");
        scanf("%d", &populacaoH01);
        printf("Digite a área da primeira cidade do país H:\n");
        scanf("%f", &areaH01);
        printf("Digite o pib da primeira cidade do país H:\n");
        scanf("%f", &pibH01);
        printf("Digite o número de pontos turísticos da primeira cidade do país H:\n");
        scanf("%d", &pontosH01);

        printf("\nDigite o código da segunda cidade do país H (Ex:A02):\n");
        scanf("%3s", codigoH02);
        printf("Digite o nome da segunda cidade do país H:\n");
        scanf("%s", nomeH02);
        printf("Digite a população da segunda cidade do país H:\n");
        scanf("%d", &populacaoH02);
        printf("Digite a área(m2) da segunda cidade do país H:\n");
        scanf("%f", &areaH02);
        printf("Digite o pib da segunda cidade do país H:\n");
        scanf("%f", &pibH02);
        printf("Digite o número de pontos turísticos da segunda cidade do país H:\n");
        scanf("%d", &pontosH02);

        printf("\nDigite o código da terceira cidade do país H (Ex:A02):\n");
        scanf("%3s", codigoH03);
        printf("Digite o nome da terceira cidade do país H:\n");
        scanf("%s", nomeH03);
        printf("Digite a população da terceira cidade do país H:\n");
        scanf("%d", &populacaoH03);
        printf("Digite a área(m2) da terceira cidade do país H:\n");
        scanf("%f", &areaH03);
        printf("Digite o pib da terceira cidade do país H:\n");
        scanf("%f", &pibH03);
        printf("Digite o número de pontos turísticos da terceira cidade do país H:\n");
        scanf("%d", &pontosH03);

        printf("\nDigite o código da quarta cidade do país H (Ex:A02):\n"); 
        scanf("%3s", codigoH04);
        printf("Digite o nome da quarta cidade do país H:\n");
        scanf("%s", nomeH04);
        printf("Digite a população da quarta cidade do país H:\n");
        scanf("%d", &populacaoH04);
        printf("Digite a área(m2) da quarta cidade do país H:\n");
        scanf("%f", &areaH04);
        printf("Digite o pib da quarta cidade do país H:\n");
        scanf("%f", &pibH04);
        printf("Digite o número de pontos turísticos da quarta cidade do país H:\n");
        scanf("%d", &pontosH04);

        printf("\nOs dados das cidades são:\n");
        printf("Cidade 01 do país A:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoA01, nomeA01, populacaoA01, areaA01, pibA01, pontosA01);
        printf("Cidade 02 do país A:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoA02, nomeA02, populacaoA02, areaA02, pibA02, pontosA02);
        printf("Cidade 03 do país A:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoA03, nomeA03, populacaoA03, areaA03, pibA03, pontosA03);
        printf("Cidade 04 do país A:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoA04, nomeA04, populacaoA04, areaA04, pibA04, pontosA04);
        //Printf das cidades do país A acima
        printf("Cidade 01 do país B:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoB01, nomeB01, populacaoB01, areaB01, pibB01, pontosB01);
        printf("Cidade 02 do país B:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoB02, nomeB02, populacaoB02, areaB02, pibB02, pontosB02);
        printf("Cidade 03 do país B:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoB03, nomeB03, populacaoB03, areaB03, pibB03, pontosB03);
        printf("Cidade 04 do país B:\nCódigo:%s\n Nome:%s\nPopulação:%d\nÁrea:%f\nPIB:%f\nNúmero de pontos turísticos:%d", codigoB04, nomeB04, populacaoB04, areaB04, pibB04, pontosB04);
        //Printf das cidades do país B acima

  return 0;
}
