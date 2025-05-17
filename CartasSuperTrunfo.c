#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
//desafio AVENTUREIRO

//cadastro da primeira carta

 //definição e inicialiação de variáveis

        char estado1[20];
        char codigo1[5];
        char cidade1[20];
        unsigned long int populacao1;
        float area1;
        float PIB1;
        int turisticos1;
        float densidade1;
        float PIBpercapita1;
        

//aqui solicita ao usuario de cadastre os dados pedidos

       printf("Olá usuário! Cadastre a primeira carta \n");

            printf("Digite o nome do estado: \n");
            scanf("%s", estado1);

            printf("Digite o código da carta: \n");
            scanf("%s", codigo1);

            printf("Digite o nome da cidade: \n");
            scanf("%s", cidade1);

            printf("Digite a população da cidade: \n");
            scanf("%lu", &populacao1);

            printf("Digite a área da cidade em Km2: \n");
            scanf("%f", &area1);

            printf("Digite o PIB da cidade: \n");
            scanf("%f", &PIB1);

            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &turisticos1);

//definindo as operações matemáticas para as novas variáveis da carta 1

            densidade1 = (float)(populacao1 / area1);
            PIBpercapita1 = (float)(PIB1 / populacao1);
            long double superpoder1 = (long double) (populacao1 + area1 + (1 / densidade1) + PIB1 +
            PIBpercapita1 + turisticos1); //adicionei a fórmula do superpoder
            

//mostra os dados da primeira carta cadastrados pelo usuário
            
            printf("Perfeito! Estes são os dados da primeira carta cadastrada: \n");
            printf("Estado: %s\n", estado1 );
            printf("Código da carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Área: %.2f\n", area1);
            printf("Densidade demográfica: %.2f\n", densidade1);
            printf("PIB: %.2f\n", PIB1);
            printf("PIB per capita: %.2f\n", PIBpercapita1);
            printf("Número de pontos turísticos %d\n", turisticos1);
            printf("Superpoder:%.2Lf\n", superpoder1); //adicionei a instrução para exibir o resultado do superpoder
                     

//término do cadastro da primeira carta, seguindo para a segunda
//adicionei as duas novas variáveis (densidade demográfica e PIB per capita)

//definindo e inicializando novamente as variáveis para a segunda carta
        
        char estado2[20] = "Pará";
        char codigo2[5] = "A02";
        char cidade2[20] = "Caeté";
        unsigned long int populacao2 = 20;
        float area2 = 200;
        float PIB2 = 2.0;
        int turisticos2 = 2;
        float densidade2;
        float PIBpercapita2;

//solicitação ao usuário de cadastre os dados pedidos

       printf("Agora cadastre a segunda carta \n");

            printf("Digite o nome do estado: \n");
            scanf("%s", estado2);

            printf("Digite o código da carta: \n");
            scanf("%s", codigo2);

            printf("Digite o nome da cidade: \n");
            scanf("%s", cidade2);

            printf("Digite a população da cidade: \n");
            scanf("%lu", &populacao2);

            printf("Digite a área da cidade em Km2: \n");
            scanf("%f", &area2);

            printf("Digite o PIB da cidade: \n");
            scanf("%f", &PIB2);
            
            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &turisticos2);

//definindo as operações matemáticas para as novas variáveis da carta 2

            densidade2 = (float)(populacao2 / area2);
            PIBpercapita2 = (float) (PIB2 / populacao2);
            long double superpoder2 = (long double) (populacao2 + area2 + (1 / densidade2) + PIB2 +
            PIBpercapita2 + turisticos2); //adicionei a fórmula do superpoder

//mostra os dados da segunda carta cadastrados pelo usuário
            
            printf("Muito bom! Estes são os dados da segunda carta cadastrada: \n");
            printf("Estado: %s\n", estado2 );
            printf("Código da carta: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f\n", area2);
            printf("Densidade demográfica: %.2f\n", densidade2);
            printf("PIB: %.2f\n", PIB2);
            printf("PIB per capita: %.2f\n", PIBpercapita2);
            printf("Número de pontos turísticos %d\n", turisticos2);
            printf("O valor é:%.2Lf\n", superpoder2);// adicionei exibição do superpoder
            
            printf("Parabéns usuário! Você cadastrou duas cartas com sucesso! \n");


//desafio MESTRE
//comparação entre as cartas cadastradas

       /*printf("Agora começa a competição!\n");
        printf("Vamos comparar as cartas\n");

        printf(" POPULAÇÃO: A carta 1 venceu? %d\n", populacao1 > populacao2);
        printf(" ÁREA: A carta 1 venceu? %d\n", area1 > area2);
        printf(" DENSIDADE DEMOGRÁFICA: A carta 1 venceu? %d\n", densidade1 < densidade2);
        printf(" PIB: A carta 1 venceu? %d\n", PIB1 > PIB2);
        printf(" PIB PER CAPITA: A carta 1 venceu? %d\n", PIBpercapita1 > PIBpercapita2);
        printf(" NÚMERO DE PONTOS TURÍSTICOS: A carta 1 venceu? %d\n", turisticos1 > turisticos2);
        printf(" SUPERPODER: A carta 1 venceu? %d\n", superpoder1 > superpoder2);*/

//código finalizado - desafio mestre cumprido


               // -----------------------------------

//Desafio Super Trunfo - Países - MÓDULO 2

//Iniciando nível NOVATO

//Inseri as estruturas de comparação para todos os atributos das cartas:

        printf("Agora vamos comparar as duas cartas cadastradas!\n");

        printf("Carta 1 - %s,  população: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s,  população: %lu\n", cidade2, populacao2);

        if(populacao1 > populacao2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }

        
        printf("Carta 1 - %s,  área: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s,  área: %.2f\n", cidade2, area2);

        if(area1 > area2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }


        printf("Carta 1 - %s,  densidade demográfica: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s,  densidade demográfica: %.2f\n", cidade2, densidade2);

        if(densidade1 < densidade2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }


        printf("Carta 1 - %s,  PIB: %.2f\n", cidade1, PIB1);
        printf("Carta 2 - %s,  PIB: %.2f\n", cidade2, PIB2);

        if(PIB1 > PIB2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }


        printf("Carta 1 - %s,  PIB per capita: %.2f\n", cidade1, PIBpercapita1);
        printf("Carta 2 - %s,  PIB per capita: %.2f\n", cidade2, PIBpercapita2);

        if(PIBpercapita1 > PIBpercapita2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }


        printf("Carta 1 - %s,  número de pontos turísticos: %d\n", cidade1, turisticos1);
        printf("Carta 2 - %s,  número de pontos turísticos: %d\n", cidade2, turisticos2);

        if(turisticos1 > turisticos2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }


        printf("Carta 1 - %s,  superpoder: %.2Lf\n", cidade1, superpoder1);
        printf("Carta 2 - %s,  superpoder: %.2Lf\n", cidade2, superpoder2);

        if(superpoder1 > superpoder2){
                printf("A carta 1 (%s) venceu!\n", cidade1);
        } else {
                printf("A carta 2 (%s) venceu!\n", cidade2);
        }



    return 0;
}
