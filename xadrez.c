//O xadrez terminado, refiz o código do zero, diferente do nível iniciante e do médio.
//Achei mais fácil, e ficaria menos confuso de mexer. Então o código é outro, comparado ao nível médio e iniciante!

#include <stdio.h>

//Estrutura recursiva para mover a Torre
void MovaTorre(int casas){

    if(casas > 0){
    
        printf("Direita \n \n");
        MovaTorre(casas - 1);

    }
    
}


//Estrutura para mover o Bispo
void MovaBispo(int casas){

int MoviBispo;

if (casas > 0)
{
    int moverBispo;

    moverBispo = casas;

   for(casas; casas > 0; casas--){

    printf("Cima \n");

    for(moverBispo; moverBispo >= casas; moverBispo--){
        printf("Direita \n \n"); 
    }

   }
}

}


//Estrutura para mover a Rainha
void MovaRainha(int casas){
    if(casas > 0){
        printf("Esquerda \n \n");

        MovaRainha(casas - 1);
    }
}



//Estrutura para mover o Cavalo
void MovaCavalo(int casas){

    if(casas >0){

        int moverCavalo = casas;
        int moverCavalo2 = moverCavalo;

        for(casas; casas > 0; casas--){
            printf("Cima \n");
            for(moverCavalo; moverCavalo >= casas; moverCavalo--){
                printf("Cima \n");
                    for(moverCavalo2; moverCavalo2 >= moverCavalo; moverCavalo2--){
                        printf("Direita \n \n");
                    }
            } 
        }

    }
}


//Aqui começamos a chamar as estruturas recursivas para o main

int main(){

int torreQuant, bispoQuant, rainhaQuant,cavaloQuant;
//Fiz essas variáveis para o jogador poder escolher quantas vezes quer mexer as peças. 
//Apenas para dar um poder de escolha maior, e poder estudar mais de estruturas de repetição.

int EscolhaMenu;
//Para o menu


do{

//Usei o do-while, para impedir o usuario de escolher o valor errado para a varíavel
printf("Escolha a peça para mover! \n");
printf("1. Torre \n");
printf("2. Bispo \n");
printf("3. Rainha \n");
printf("4. Cavalo \n");
scanf("%i", &EscolhaMenu);

}while(EscolhaMenu <= 0 || EscolhaMenu > 4);

//Menu switch para escolher as peças
switch (EscolhaMenu)
{
case 1:

do{
//Do-while novamente para impedir escolhas de valor erradas
    printf("A torre pode ser mover 5 blocos para direita! \n");
    printf("Escolha quantas vezes ela irá se mover! \n");
    
    scanf("%i", &torreQuant);
    //Usei a variavel de mais cedo aqui.
    
    } while(torreQuant <= 0 || torreQuant > 5);
    //Usuario escolheu a varíavel certa, o código imprime tudo certo.

    MovaTorre(torreQuant);

    break;

case 2:

//Mesma lógica.

do{

    printf("O bispo pode se mover 1 para direita e 1 para cima 5 vezes! \n");
    printf("Escolha quantas vezes ele irá se mover! \n");

    scanf("%i", &bispoQuant);
   

    }while(bispoQuant <= 0 || bispoQuant > 5);
    
    MovaBispo(bispoQuant);

    break;

case 3:

//Mesma lógica.

do{

    printf("A rainha pode ser mover 8 blocos para esquerda! \n");
    printf("Escolha quantas vezes ela irá se mover! \n");
    
    scanf("%i", &rainhaQuant);
    
    } while(rainhaQuant <= 0 || rainhaQuant > 8);

    MovaRainha(rainhaQuant);

    break;

case 4:

//Mesma lógica.

do{
    
    printf("O cavalo pode ser mover em forma de L, duas casas para cima e uma direita, ele vai se mover até 5 vezes! \n");
    printf("Escolha quantas vezes o cavalo se moverá! \n");
    scanf("%i", &cavaloQuant);

}while (cavaloQuant <= 0 || cavaloQuant > 5);

    MovaCavalo(cavaloQuant);

    break;

    return 0;
}
