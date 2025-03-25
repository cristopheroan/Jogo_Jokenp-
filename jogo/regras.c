#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));//Inicializador de time para inicializar os numeros aleatorios.

    printf("### Jogo de Jokenpô ###\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);//Pegando a informação do teclado.

    escolhaComputador = rand() % 3 + 1;

    /*Inplementação do switch para a estrutura de decisão.
    uma ação só vai acontecer de acordo com o que for acontecendo,
    durante a interação. 
    */
    switch (escolhaJogador) {

    case 1:
        printf("Jogador: Pedra\n");
        break;

    case 2:
        printf("Jogador: Papel\n");
        break;

    case 3:
        printf("Jogador: Tesoura\n");
        break;

    default://Default é usado pcaso algo seja feito fora do que foi disponibilzado.
        printf("Opção invalida!\n");
        break;
    }

    switch (escolhaComputador) {

        case 1:
            printf("Computador: Pedra\n");
            break;
    
        case 2:
            printf("Computador: Papel\n");
            break;
    
        case 3:
            printf("Computador: Tesoura\n");
            break;
        }

        //lógica do jogo para decidir quando ganha e perde.
        if (escolhaComputador == escolhaJogador) {
            printf("###Jogo empatou !###\n");
        } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || 
                   (escolhaJogador == 2) && (escolhaComputador == 1) ||
                   (escolhaJogador == 3) && (escolhaComputador == 2)) {
            printf("###Parabéns, você ganhou!###\n");
         } else {
            printf("###Você perdeu!###\n");
         }


  return(0);//Retorna a ação sem problemas.

}