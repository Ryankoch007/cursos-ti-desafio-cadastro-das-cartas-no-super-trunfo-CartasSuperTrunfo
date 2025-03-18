#include <stdio.h>
int main () {
// variaveis para armazenar dados de todas as cartas
    char estado[10];  
    char cidade[50];
    char codigo[4];
    int populacao;
    int pontos;
    float area;
    float pib;
    

    // inserir os Dados da primeira Carta
    printf("\n");
    printf("BEM VINDO AO JOGO DO SUPERTRUNFO\n");
    printf("\n");
    
printf("Digite os dados da Carta n 1\n");

printf("Digite o estado de (A-H) :\n");
scanf("  %s" , &estado);

printf("Codigo (ex: A01):\n");
scanf("%s" , &codigo);

printf("Digite o nome da cidade :\n");
scanf("%s" , &cidade);

printf("Digite a Populacao :\n");
scanf("%d", &populacao);

printf("Digite a area (Km²): \n");
scanf("%f", &area);

printf("Digite o pib (Bilhoes de reais): \n");
scanf("%f" , &pib);

printf("Digite os numeros de pontos turisticos :\n");
scanf("%d" , &pontos);
printf("\n");

//Exibir os dados da primeira carta

printf("OS DADOS CARTA NUMERO 1:");
printf("\n");
printf("Estado : %s \n" , estado);
printf("Codigo : %s\n" , codigo);
printf("Cidade : %s\n" , cidade);
printf("Populacao : %d\n", populacao);
printf("Area : %f\n" , area);
printf("Pib per capita : %f\n", pib);
printf("Pontos turisticos : %d\n" , pontos);
printf("\n");
//INSERIR DADOS DA SEGUNDA CARTA:
printf("Digite os dados da Carta n 2\n");

printf("Digite o estado de (A-H) :\n");
scanf("  %s" , &estado);


printf("Codigo (ex: A01):\n");
scanf("%s" , &codigo);

printf("Digite o nome da cidade :\n");
scanf("%s" ,&cidade);

printf("Digite a Populacao :\n");
scanf("%d", &populacao);

printf("Digite a area (Km²): \n");
scanf("%f", &area);

printf("Digite o pib (Bilhoes de reais): \n");
scanf("%f" , &pib);

printf("Digite os numeros de pontos turisticos :\n");
scanf(" %d" , &pontos);
printf("\n");

  //Exibir os dados da segunda carta:
printf("\n");
printf("\n");
printf("OS DADOS CARTA NUMERO 2:");
printf("\n");
printf("Estado : %s\n" , estado);
printf("Codigo : %s\n" , codigo);
printf("Cidade : %s\n" , cidade);
printf("Populacao : %d\n", populacao);
printf("Area : %f\n" , area);
printf("Pib per capita : %f\n", pib);
printf("Pontos turisticos : %d\n" , pontos);
printf("\n");

// Mensagem final
printf("\nFIM DE JOGO!, pressione enter para fechar\n");


 // Limpar buffer e esperar ENTER
getchar();
getchar();


return 0;
    
}
