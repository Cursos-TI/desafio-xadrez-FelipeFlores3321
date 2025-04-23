#include <stdio.h>


int main() {


    int bispo = 0,torre = 0,rainha =0;
    //Variável das peças

    int bispoDia = 1 ,bispoLat = 1;
    // Para movimentação do Bispo, lateral e diagonal!

    int torreMov = 1;
    //Para movimentação da torre

    int rainhaMov = 1;

    int escolhaMenu;
    //Para escolher o Menu

    
    //O menu usando do-while, para não deixar o usuario escolher errado!
    do{

    printf("Bem-vindo ao menu! \n");
    printf("Escolha a peça para mover: \n");
    printf("1. Bispo \n");
    printf("2. Torre \n");
    printf("3. Rainha \n");
    printf("4. Sair \n");
    scanf("%i", &escolhaMenu);
   
    } while(escolhaMenu <= 0 || escolhaMenu > 4);


    //Aqui acontece depois do Do-While ser escolhido corretamente, menu switch básico!
    switch (escolhaMenu)
    {
    case 1:
    
        //Caso o usuario escolha o Bispo, iremos pegar quantas vezes querem que ele se mova!
         //Usei o do-while, para garantir que usuario escolha dentro dos limites estabelecidos!
        do{

        printf("Você escolheu o bispo! \n");
        printf("Bispo se move na diagonal e até 5 casas! \n");
        printf("Escolha quantas vezes o bispo deve se mover: \n");
        scanf("%i", &bispo);

        }while(bispo <= 0 || bispo > 5);


        while (bispoDia <= bispo && bispoLat <= bispo)
        {
            
        printf("Cima \n");
        printf("Direita \n");
        printf("O bispo se moveu %i para direita e %i para cima! \n \n", bispoLat, bispoDia);
        bispoLat++;
        bispoDia++;
    
        }
        //While, para fazer a movimentação!
        //Enquanto as variaveis de movimentações, forem menor que a variavel bispo, o  bispo irá se mover!
      

        break;

    case 2:

        //Menu de escolha da torre!          
        //Mesma lógica dos outros, enquanto não estiver nos parametros certo, a torre não irá se mover
        do{

        printf("Você escolheu a torre! \n");
        printf("A torre se move para direita, e até 5 vezes! \n");
        printf("Quantas vezes irá se mover? \n");
        scanf("%i", &torre);

        }while(torre <= 0 || torre > 5);
        
        //Enquanto torreMov não for igual a torre, vai continuar se movimentando!
        while (torreMov <= torre)
        {
            printf("Direita \n \n");
            torreMov++;
        }
        
        break;

    case 3:



        //Menu da rainha!
        //Segue a mesma lógica dos outros dois.
        do{
        printf("Você escolheu a rainha! \n");
        printf("A rainha se move para a esquerda e até 8 casas! \n");
        printf("Escolha a quantidade de vezes que a rainha irá se mover! \n");
        scanf("%i", &rainha);

        
    }while (rainha <= 0 || rainha > 8);
    

    while (rainhaMov <= rainha)
    {

        //Mesma lógica dos outros!
        printf("A rainha se moveu %i vezes! \n", rainhaMov);
        printf("Esquerda! \n \n");
        rainhaMov++;

    }
    
    
        break;
    case 4: 

        printf("Saindo...");
        break;

    }









    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
