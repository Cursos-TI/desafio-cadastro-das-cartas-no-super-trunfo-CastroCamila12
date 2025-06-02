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
       printf("\n");

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

            printf("\n");

//definindo as operações matemáticas para as novas variáveis da carta 1

            densidade1 = (float)(populacao1 / area1);
            PIBpercapita1 = (float)(PIB1 / populacao1);
            long double superpoder1 = (long double) (populacao1 + area1 + (1 / densidade1) + PIB1 +
            PIBpercapita1 + turisticos1); //adicionei a fórmula do superpoder
            

//mostra os dados da primeira carta cadastrados pelo usuário
            
            printf("Perfeito! Estes são os dados da primeira carta cadastrada: \n");
            printf("\n");
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
            printf("\n");        

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
       printf("\n");

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

            printf("\n");

//definindo as operações matemáticas para as novas variáveis da carta 2

            densidade2 = (float)(populacao2 / area2);
            PIBpercapita2 = (float) (PIB2 / populacao2);
            long double superpoder2 = (long double) (populacao2 + area2 + (1 / densidade2) + PIB2 +
            PIBpercapita2 + turisticos2); //adicionei a fórmula do superpoder

//mostra os dados da segunda carta cadastrados pelo usuário
            
            printf("Muito bom! Estes são os dados da segunda carta cadastrada: \n");
            printf("\n");
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
            printf("\n");
            
            printf("Parabéns usuário! Você cadastrou duas cartas com sucesso! \n");

            printf("\n");


//desafio MESTRE (MÓDULO 1)
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

//Iniciando nível MESTRE

//Exibe menu interativo para que o jogador escolha o atributo da sua carta para comparação
int escolhaJogador1;
int escolhaJogador2;
int resultado1;
int resultado2;

  printf("Vamos comparar dois atributos das cartas cadastradas\n");
  printf("\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. Densidade demográfica\n");
  printf("4. PIB\n");
  printf("5. PIB per capita\n");
  printf("6. Número de pontos turísticos\n");
  printf("7. Super poder\n");
  printf("\n");
  
  printf("Escolha o primeiro atributo: ");
  scanf("%d", &escolhaJogador1);
 
  switch (escolhaJogador1) {
        case 1:
        printf("Você escolheu o atributo POPULAÇÃO\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu o atributo ÁREA\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu o atributo DENSIDADE DEMOGRÁFICA\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu o atributo PIB\n");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu o atributo PIB PER CAPITA\n");
        resultado1 = PIBpercapita1 > PIBpercapita2;
        break;

        case 6:
        printf("Você escolheu o atributo NÚMERO DE PONTOS TURÍSTICOS\n");
        resultado1 = turisticos1 > turisticos2 ? 1 : 0;
        break;

        case 7:
        printf("Você escolheu o atributo SUPER PODER\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;

        default:
        printf("Opção inválida\n");
        break;
        }
  printf("\n");

  printf("1. População\n");
  printf("2. Área\n");
  printf("3. Densidade demográfica\n");
  printf("4. PIB\n");
  printf("5. PIB per capita\n");
  printf("6. Número de pontos turísticos\n");
  printf("7. Super poder\n");
  printf("\n");

  printf("ATENÇÃO! Você não deve escolher o mesmo atributo duas vezes!\n");
  printf("Agora escolha o segundo atributo: ");
  scanf("%d", &escolhaJogador2);

  printf("\n");

  if (escolhaJogador1 == escolhaJogador2){
    printf("Inválido: Você escolheu dois atributos iguais! Comece novamente.\n");
  
  } else {
        switch (escolhaJogador2) {
        case 1:
        printf("Você escolheu o atributo POPULAÇÃO\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
        printf("Você escolheu o atributo ÁREA\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu o atributo DENSIDADE DEMOGRÁFICA\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu o atributo PIB\n");
        resultado2 = PIB1 > PIB2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu o atributo PIB PER CAPITA\n");
        resultado2 = PIBpercapita1 > PIBpercapita2;
        break;

        case 6:
        printf("Você escolheu o atributo NÚMERO DE PONTOS TURÍSTICOS\n");
        resultado2 = turisticos1 > turisticos2 ? 1 : 0;
        break;

        case 7:
        printf("Você escolheu o atributo SUPER PODER\n");
        resultado2 = superpoder1 > superpoder2 ? 1 : 0;
        break;

        default:
        printf("Opção inválida\n");
        break;
      }
  }
      printf("\n");

      if (resultado1 == 1 && resultado2 == 1){
      printf("Parabéns, você venceu!\n");

      } else if ( resultado1 != resultado2) {
      printf("Deu empate!\n");

      } else {
          printf("Você perdeu!\n");
      }

      printf("\n");
      printf(" *** Obrigada por jogar! ***\n");
/*

//Aventureiro e mestre - módulo 1
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
        
        printf(" ### Obrigada por jogar! ###\n ");*/

 

   return 0;

}
