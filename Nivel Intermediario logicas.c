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


  


  printf("\n\n- Comparação das Cartas:\n\n");
 

        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional (menor vence)\n");
        printf("6 - PIB per Capita\n");
        printf("7 - Super Poder\n");
        printf("0 - Sair\n");
        printf("Escolha um atributo: ");
        scanf("%d", &opcao);




    switch (opcao)
    {
    case 1: 
         
        if (População > População2){

           printf("Primeira carta tem a maior população.\n");
           printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (População < População2){

          printf("Segunda carta tem a maior população.\n");
          printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);


         } else {

           printf("O atributo da população empatou!");
           


        }
         
       break;


    case 2: 
         
        if (Área >  Área2){

        printf("primeira Carta tem a maior área.\n");
        printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (Área <  Área2){

        printf("segunda Carta tem a maior área.\n");
        printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);



         } else {

           printf("O atributo da Área empatou!");
           


        }
         
       break;


    case 3: 
         
        if ((Pib * 1000) >  Pib2){

           printf("primeira carta tem o maior PIB.\n");
           printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (Área <  Área2){

           printf("segunda carta tem o maior PIB.\n");
           printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);



         } else {

           printf("O atributo do PIB empatou!");
           


        }
         
       break;


       case 4: 
         
        if (Pontos > Pontos2){

            printf("Primeira carta tem mais pontos Turísticos.\n");
            printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (Pontos < Pontos2){

            printf("Segunda carta tem mais pontos Turísticos.\n");
            printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);


         } else {

           printf("O atributo de Pontos Turísticos empatou!");
           


        }
         
       break;



      case 5: 
         
        if (Densidade > Densidade2){

          printf("Primeira carta tem a Menor densidade populacional.\n");
          printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (Densidade < Densidade2){

          printf("A Segunda carta tem a Menor densidade populacional.\n");
          printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);


         } else {

           printf("O atributo densidade populacional empatou!");
           


        }
         
       break;


      case 6: 
         
        if (capita > capita2){
 
         printf("Primeira carta tem maior PIB per capita.\n");
         printf("A cidade vencedora desse atributo é: %s\n\n", cidade);

        } else if (capita < capita2){
  
       printf("Segunda carta tem maior PIB per capita.\n");
         printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);


         } else {

           printf("O atributo do PIB per capita empatou!");
           


        }
         
       break;


       case 7: 
         
        if (SuperPoder> SuperPoder2){

         printf("Super Poder: Primeira carta Venceu! \n");
         printf("A cidade vencedora desse atributo é: %s\n\n", cidade);
   

        } else if (SuperPoder < SuperPoder2){
  
         printf("Super Poder: Segunda carta Venceu!\n");
         printf("A cidade vencedora desse atributo é: %s\n\n", cidade2);


         } else {

           printf("O atributo SuperPoder empatou!");
           


        }
         
       break;

       
   case 0:
        printf("\nEncerrando o jogo...\n");
      break;

    default:
         printf("\nOpção invalida! Escolha de 0 a 7.\n");
        break;
      
      
      
  }

    


 }