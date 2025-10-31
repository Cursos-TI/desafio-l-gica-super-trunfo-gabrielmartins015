#include <stdio.h>

   int main(){

  printf("Desafio Cartas super Trunfo!\n\n");
  printf("Dado da Primeira Carta:\n\n");

  char Estado = 'A';
  char cidade[20] = "Sorocaba";
  char Codigo[10] = "A01";
  unsigned long int  População = 762172;
  float Área = 449.872;
  float Pib = 44.5;
  int Pontos = 25;
  float Densidade = População / Área;
  float capita = (Pib * 1000000000) / População;
  float SuperPoder = (float) População + Área + Pib + (float) Pontos + capita + (1.0 / Densidade);
  int opcao;


  char Estado2 = 'B';
  char cidade2[20] = "Siqueira";
  char Codigo2[10] = "B01";
  unsigned long int População2 = 24031;
  float Área2 = 278.035;
  float Pib2 = 706.6;
  int Pontos2 = 5;
  float Densidade2 = População2 / Área2;
  float capita2 = (Pib2 * 1000000) / População2;
  float SuperPoder2 = (float) População2 + Área2 + Pib2 + (float) Pontos2 + capita2 + (1.0 / Densidade2);


  printf("Digite o Estado: \n");
  scanf(" %c", &Estado);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);
  
  printf("Digite o Codigo da Carta: \n");
  scanf("%s", Codigo);

  printf("Digite a População: \n");
  scanf("%lu", &População);

  printf("Digite a Área em km²: \n");
  scanf("%f", &Área);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &Pib);

  printf("Digite Pontos turisticos: \n");
  scanf("%d", &Pontos);



  printf("\n=== CARTA DA CIDADE ===\n");
  printf("\nPrimeira Carta:\n\n");
  printf("Estado: %c\n", Estado);
  printf("Nome da cidade: %s\n", cidade);
  printf("Codigo da carta: %s\n", Codigo);
  printf("População: %lu\n", População);
  printf("Área em km²: %.3f\n", Área);
  printf("PIB: %.1f Bilhões de Reais\n", Pib);
  printf("Pontos Turísticos: %d\n", Pontos);
  printf("Densidade Populacional: %.2f hab/km²\n",  Densidade);
  printf("PIB per capita: %.2f reais\n", capita);
  printf("super poder: %.2f\n", SuperPoder);

  printf("\nDado da segunda Carta:\n\n");

  printf("Digite o Estado: \n");
  scanf(" %c", &Estado2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);
  
  printf("Digite o Codigo da Carta: \n");
  scanf("%s", Codigo2);

  printf("Digite a População: \n");
  scanf("%lu", &População2);

  printf("Digite a Área em km²: \n");
  scanf("%f", &Área2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &Pib2);

  printf("Digite Pontos turisticos: \n");
  scanf("%d", &Pontos2);


  
  printf("\n=== CARTA DA CIDADE ===\n");
  printf("\nSegunda Carta:\n\n");
  printf("Estado: %c\n", Estado2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Codigo da carta: %s\n", Codigo2);
  printf("População: %lu\n", População2);
  printf("Área em km²: %.3f\n", Área2);
  printf("PIB: %.1f Milhões de Reais\n", Pib2);
  printf("Pontos Turísticos: %d\n", Pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n",  Densidade2);
  printf("PIB per capita: %.2f reais\n", capita2);
  printf("super poder: %.2f\n", SuperPoder2);


  // --- COMPARAÇÃO ---
    printf("\n\n=== COMPARAÇÂO DAS CARTAS ===\n");

    int opcao, opcao2;

    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // Menu dinâmico (não repete o mesmo atributo)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i == opcao) continue;
        printf("%d - ", i);
        switch (i) {
            case 1: printf("Populacao\n"); break;
            case 2: printf("Area\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turisticos\n"); break;
            case 5: printf("Densidade Populacional (menor vence)\n"); break;
            case 6: printf("PIB per Capita\n"); break;
            case 7: printf("Super Poder\n"); break;
        }
    }

    printf("Escolha: ");
    scanf("%d", &opcao2);
    while (opcao2 == opcao || opcao2 < 1 || opcao2 > 7) {
        printf("Opcao invalida! Escolha outro atributo: ");
        scanf("%d", &opcao2);
    }

    // Pega o valor correspondente dos atributos
    float valorA1, valorA2, valorB1, valorB2;

    switch (opcao) {
        case 1: valorA1 = População; valorB1 = População2; break;
        case 2: valorA1 = Área; valorB1 = Área2; break;
        case 3: valorA1 = Pib; valorB1 = Pib2; break;
        case 4: valorA1 = Pontos; valorB1 = Pontos2; break;
        case 5: valorA1 = 1 / Densidade; valorB1 = 1 / Densidade2; break; // menor vence
        case 6: valorA1 = capita; valorB1 = capita2; break;
        case 7: valorA1 = SuperPoder; valorB1 = SuperPoder2; break;
    }

    switch (opcao2) {
        case 1: valorA2 = População; valorB2 = População2; break;
        case 2: valorA2 = Área; valorB2 = Área2; break;
        case 3: valorA2 = Pib; valorB2 = Pib2; break;
        case 4: valorA2 = Pontos; valorB2 = Pontos2; break;
        case 5: valorA2 = 1 / Densidade; valorB2 = 1 / Densidade2; break; // menor vence
        case 6: valorA2 = capita; valorB2 = capita2; break;
        case 7: valorA2 = SuperPoder; valorB2 = SuperPoder2; break;
    }

    // Soma total
    float soma1 = valorA1 + valorA2;
    float soma2 = valorB1 + valorB2;

    // --- RESULTADOS ---
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Cidade 1: %s\nCidade 2: %s\n\n", cidade, cidade2);
    printf("Atributo 1 (opcao %d): %.2f vs %.2f\n", opcao, valorA1, valorB1);
    printf("Atributo 2 (opcao %d): %.2f vs %.2f\n", opcao2, valorA2, valorB2);
    printf("\nSoma total:\n%s = %.2f\n%s = %.2f\n", cidade, soma1, cidade2, soma2);

    // Operador ternário para definir o vencedor
    (soma1 > soma2)
        ? printf("\n🏆 %s venceu a rodada!\n", cidade)
        : (soma1 < soma2)
            ? printf("\n🏆 %s venceu a rodada!\n", cidade2)
            : printf("\n🤝 Empate!\n");

    return 0;
}