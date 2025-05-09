#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
//desafio NOVATO

//cadastro da primeira carta

 //definição e inicialiação de variáveis

        char estado1[20] = "Ceará";
        char codigo1[5] = "A01";
        char cidade1[20] = "Betim";
        int populacao1 = 10;
        float area1 = 100;
        float PIB1 = 1.0;
        int turisticos1 = 1 

//aqui solicita ao usuario de cadastre os dados pedidos

       ; printf("Olá usuário! Cadastre a primeira carta \n");

            printf("Digite o nome do estado: \n");
            scanf("%s", estado1);

            printf("Digite o código da carta: \n");
            scanf("%s", codigo1);

            printf("Digite o nome da cidade: \n");
            scanf("%s", cidade1);

            printf("Digite a população da cidade: \n");
            scanf("%d", &populacao1);

            printf("Digite a área da cidade em Km2: \n");
            scanf("%f", &area1);

            printf("Digite o PIB da cidade: \n");
            scanf("%f", &PIB1);

            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &turisticos1);

/*coloquei os códigos sem espaço aqui porque com espaço estava dando um erro nas entradas da
área, PIB e pontos turísticos*/
   
//mostra os dados da primeira carta cadastrados pelo usuário
            
            printf("Perfeito! Estes são os dados da primeira carta cadastrada: \n");
            printf("Estado: %s\n", estado1 );
            printf("Código da carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f\n", area1);
            printf("PIB: %.2f\n", PIB1);
            printf("Número de pontos turísticos %d\n", turisticos1);

//término do cadastro da primeira carta, seguindo para a segunda

//definindo e inicializando novamente as variáveis para a segunda carta
        
        char estado2[20] = "Pará";
        char codigo2[5] = "A02";
        char cidade2[20] = "Caeté";
        int populacao2 = 20;
        float area2 = 200;
        float PIB2 = 2.0;
        int turisticos2 = 2 

//solicitação ao usuário de cadastre os dados pedidos

       ; printf("Agora cadastre a segunda carta \n");

            printf("Digite o nome do estado: \n");
            scanf("%s", estado2);

            printf("Digite o código da carta: \n");
            scanf("%s", codigo2);

            printf("Digite o nome da cidade: \n");
            scanf("%s", cidade2);

            printf("Digite a população da cidade: \n");
            scanf("%d", &populacao2);

            printf("Digite a área da cidade em Km2: \n");
            scanf("%f", &area2);

            printf("Digite o PIB da cidade: \n");
            scanf("%f", &PIB2);
            
            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &turisticos2);

//mostra os dados da segunda carta cadastrados pelo usuário
            
            printf("Muito bom! Estes são os dados da segunda carta cadastrada: \n");
            printf("Estado: %s\n", estado2 );
            printf("Código da carta: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f\n", area2);
            printf("PIB: %.2f\n", PIB2);
            printf("Número de pontos turísticos %d\n", turisticos2);

            printf("Parabéns usuário! Você cadastrou duas cartas com sucesso! \n");

    
    
    
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



    return 0;
}
