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

            printf("Digite o nome do estado: ");
            scanf("%s", estado1);

            printf("Digite o código da carta: ");
            scanf("%s", codigo1);

            printf("Digite o nome da cidade: ");
            scanf("%s", cidade1);

            printf("Digite a população da cidade: ");
            scanf("%lu", &populacao1);

            printf("Digite a área da cidade em Km2: ");
            scanf("%f", &area1);

            printf("Digite o PIB da cidade: ");
            scanf("%f", &PIB1);

            printf("Digite o numero de pontos turisticos: ");
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
            printf("Super poder:%.2Lf\n", superpoder1); //adicionei a instrução para exibir o resultado do superpoder
                     

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

            printf("Digite o nome do estado: ");
            scanf("%s", estado2);

            printf("Digite o código da carta: ");
            scanf("%s", codigo2);

            printf("Digite o nome da cidade: ");
            scanf("%s", cidade2);

            printf("Digite a população da cidade: ");
            scanf("%lu", &populacao2);

            printf("Digite a área da cidade em Km2: ");
            scanf("%f", &area2);

            printf("Digite o PIB da cidade: ");
            scanf("%f", &PIB2);
            
            printf("Digite o numero de pontos turisticos: ");
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
            printf("Super poder:%.2Lf\n", superpoder2);// adicionei exibição do superpoder
            
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

//Iniciando nível AVENTUREIRO

//Exibe menu interativo para que o jogador escolha o atributo da sua carta para comparação
int escolhaJogador; //aqui armazena o valor escolhido pelo jogador

  printf("Agora vamos comparar as duas cartas cadastradas!\n");
  printf("Lista de atributos para comparação:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. Densidade demográfica\n");
  printf("4. PIB\n");
  printf("5. PIB per capita\n");
  printf("6. Número de pontos turísticos\n");
  printf("7. Super poder\n");
  printf("Digite o número do atributo da sua carta que você quer comparar:  \n");
  scanf("%d", &escolhaJogador);

//inserindo o switch com as condições de comparação para os atributos
switch (escolhaJogador) {
  
  case 1:
  printf("Você escolheu o atributo POPULAÇÃO\n");
  printf("Sua carta - %s,  população: %lu\n", cidade1, populacao1);
  printf("Carta adversária - %s,  população: %lu\n", cidade2, populacao2);
  
  if(populacao1 > populacao2){
  printf("Sua carta venceu!\n");
        
  } else if (populacao1 < populacao2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;

  case 2:
  printf("Você escolheu o atributo ÁREA\n");
  printf("Sua carta - %s,  área: %.2f\n", cidade1, area1);
  printf("Carta adversária - %s,  área: %.2f\n", cidade2, area2);
  
  if(area1 > area2){
  printf("Sua carta venceu!\n");
        
  } else if (area1 < area2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;
  
  case 3:
  printf("Você escolheu o atributo DENSIDADE DEMOGRÁFICA\n");
  printf("Sua carta - %s,  densidade demográfica: %.2f\n", cidade1, densidade1);
  printf("Carta adversária - %s,  densidade demográfica: %.2f\n", cidade2, densidade2);
  
  if(densidade1 < densidade2){
  printf("Sua carta venceu!\n");
        
  } else if (densidade1 > densidade2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;

  case 4:
  printf("Você escolheu o atributo PIB\n");
  printf("Sua carta - %s,  PIB: %.2f\n", cidade1, PIB1);
  printf("Carta adversária - %s,  PIB: %.2f\n", cidade2, PIB2);
  
  if(PIB1 > PIB2){
  printf("Sua carta venceu!\n");
        
  } else if (PIB1 < PIB2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;

  case 5:
  printf("Você escolheu o atributo PIB PER CAPITA\n");
  printf("Sua carta - %s,  PIB per capita: %.2f\n", cidade1, PIBpercapita1);
  printf("Carta adversária - %s,  PIB per capita: %.2f\n", cidade2, PIBpercapita2);
  
  if(PIBpercapita1 > PIBpercapita2){
  printf("Sua carta venceu!\n");
        
  } else if (PIBpercapita1 < PIBpercapita2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;

  case 6:
  printf("Você escolheu o atributo NÚMERO DE PONTOS TURÍSTICOS\n");
  printf("Sua carta - %s,  número de pontos turísticos: %d\n", cidade1, turisticos1);
  printf("Carta adversária - %s,  número de pontos turísticos: %d\n", cidade2, turisticos2);
  
  if(turisticos1 > turisticos2){
  printf("Sua carta venceu!\n");
        
  } else if (turisticos1 < turisticos2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;

  case 7:
  printf("Você escolheu o atributo SUPER PODER\n");
  printf("Sua carta - %s,  super poder: %.2Lf\n", cidade1, superpoder1);
  printf("Carta adversária - %s,  super poder: %.2Lf\n", cidade2, superpoder2);
  
  if(superpoder1 > superpoder2){
  printf("Sua carta venceu!\n");
        
  } else if (superpoder1 < superpoder2) {
        printf("A carta adversária venceu!\n");       
        
    } else {
        printf("Deu empate!\n");
    }
  break;
}
        
        printf(" ### Obrigada por jogar! ###\n ");


    return 0;
}
