#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    //imprime o cabecalho do jogo pra mim.
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    //Aleatoriedade do Numero Secreto
    int nAleatorio_1 = time(0);
    srand(nAleatorio_1);
    int nAleatorio_2 = rand();
    int numeroSecreto = nAleatorio_2 % 100;


    //Variavel Chute
    int chute;

    double pontos = 1000;
    int tentativas = 1;
    double pontosTotais;

    //Texto para o Nivel
    int nivel;
    printf("Escolha o nível de dificultade:\n ");
    printf("(1) para fácil \n (2) para médio \n (3) para difícil \n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    // Configura o número de tentativas com base no nível escolhido
    switch(nivel){
    case 1:
        //Nível Fácil
        numerodetentativas = 25;
        break;
    case 2:
        //Nível Médio
        numerodetentativas = 15;
        break;
    default:
        //Nível Dificil
        numerodetentativas = 6;
        break;
    }


    int acertou;
    int maior;

    //Loop para verificação do numero Secreto
    for( int i = 1; i <= numerodetentativas; i++){


            printf("Tentativa %d \n", tentativas);
            printf("Qual é o seu chute ?\n");
            scanf("%d", &chute);
            printf("Seu chute foi %d\n", chute);

                if (chute < 0){
                    printf("Por favor, digite apenas números positivos.");
                    continue;
                    }

                    //Variavel para saber se o player acertou ou errou
                    acertou = (chute == numeroSecreto);
                    maior = chute > numeroSecreto;

                    if ( acertou ){
                        break;
                    } else if(maior){
                        printf("O seu chute é maior que o número secreto.\n");
                    } else{
                        printf("O seu chute é menor que o número secreto.\n");
                    }
                        tentativas++;

                        double pontosPerdidos = abs( chute - numeroSecreto ) / 2.0 ;
                        pontosTotais = pontos - pontosPerdidos;
}

                printf("\nFim de Jogo!\n");

                if  (acertou){
                    printf("Parabéns, você ganhou!\n");
                    printf("Você acertou em %d tentativas.\n", tentativas);
                    printf("Total de pontos: %.1f\n", pontosTotais);

                printf("              OOOOOOOOOOO                       \n");
                printf("         OOOOOOOOOOOOOOOOOOO                    \n");
                printf("      OOOOOO  OOOOOOOOO  OOOOOO                 \n");
                printf("    OOOOOO      OOOOO      OOOOOO               \n");
                printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO             \n");
                printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO            \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO           \n");
                printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO           \n");
                printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO           \n");
                printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO            \n");
                printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO             \n");
                printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO              \n");
                printf("      OOOOOO   OOOOOOOOO   OOOOOO               \n");
                printf("         OOOOOO         OOOOOO                  \n");
                printf("             OOOOOOOOOOOO                       \n");


                }else {
                    printf("Você perdeu, tente novamente.\n");

                printf("            \\|/ ____ \\|/            \n");
                printf("            @~/ ,. \\~@               \n");
                printf("           /_( \__/ )_\ \             \n");
                printf("              \\__U_/                 \n");
                }


}

