#include <stdio.h>
    int main(){
        
        char nomec1[20], nomec2[20];
        int populacaoc1, populacaoc2;
        float areac1, areac2;
        unsigned float pibc1, pibc2;
        int pontosc1, pontosc2;
        float densidadec1, densidadec2, percaptac1, percaptac2;

        printf("\nDigite o nome da primeira cidade a ser comparada: ");
        scanf("%20s",nomec1);
        printf("\nDigite a população da primeira cidade: ");
        scanf("%d", &populacaoc1);
        printf("\nDigite a área da primeira cidade (m2): ");
        scanf("%f", &areac1);
        printf("\nDigite o PIB da primeira cidade: ");
        scanf("%f", &pibc1);
        printf("\nDigite o número de pontos turísticos da primeira cidade: ");
        scanf("%d", &pontosc1);
        
        densidadec1 = populacaoc1 / areac1;
        percaptac1 = pibc1 / populacaoc1;

        printf("\nA densidade populacional dessa cidade é: %f\n", densidadec1);
        printf("\nO PIB per capta dessa cidade é: %f\n", percaptac1);

        printf("\nDigite o nome da segunda cidade a ser comparada: ");
        scanf("%20s",nomec2);
        printf("\nDigite a população da segunda cidade: ");
        scanf("%d", &populacaoc2);
        printf("\nDigite a área da segunda cidade (m2): ");
        scanf("%f", &areac2);
        printf("\nDigite o PIB da segunda cidade: ");
        scanf("%llf", &pibc2);
        printf("\nDigite o número de pontos turísticos da segunda cidade: ");
        scanf("%d", &pontosc2);

        densidadec1 = populacaoc2 / areac2;
        percaptac1 = pibc2 / populacaoc2;

        printf("\nA densidade populacional dessa cidade é: %f\n", densidadec2);
        printf("\nO PIB per capta dessa cidade é: %f\n", percaptac2);





        return 0;
    }