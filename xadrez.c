#include <stdio.h>

int main(){
     
    int torre = 0, rainha = 0; //inicializei variáveis
    int option; //variável do menu interativo (switch)
    int bispo; //declarei variável para ser inicializada no for
    
   printf("====================================\n");  //adicionei um menu interativo, para que o código ficasse criativo
    printf("      BEM VINDO AO JOGO DE      \n");
    printf("             XADREZ                 \n");
    printf("====================================\n\n");
       printf("Escolha uma opção:\n");
       printf("1.Iniciar jogo\n");
       printf("2.Tutorial\n");
       printf("3.Sair do jogo\n");
       scanf("%d", &option);

       switch (option) {
        case 1: 
        printf("\n\nIniciando jogo...\n\n");
        break;
        case 2:
        printf("====================================\n"); //escrevi um tutorial com as regras que encontrei na internet, para que ficasse bacana o menu interativo
    printf("      TUTORIAL DE MOVIMENTAÇÃO      \n");
    printf("             XADREZ                 \n");
    printf("====================================\n\n");

    printf("♙ Peão:\n");
    printf("  - Move 1 casa para frente (2 casas no primeiro movimento)\n");
    printf("  - Captura na diagonal\n\n");

    printf("♘ Cavalo:\n");
    printf("  - Movimento em 'L': 2 casas em uma direção + 1 na perpendicular\n");
    printf("  - Pode pular sobre outras peças\n\n");

    printf("♗ Bispo:\n");
    printf("  - Move qualquer número de casas nas diagonais\n\n");

    printf("♖ Torre:\n");
    printf("  - Move qualquer número de casas em linha reta (horizontal/vertical)\n\n");

    printf("♕ Rainha:\n");
    printf("  - Combina os movimentos da torre e do bispo\n\n");

    printf("♔ Rei:\n");
    printf("  - Move 1 casa em qualquer direção\n\n");

    printf("====================================\n");
    printf("Dica: O objetivo é dar xeque-mate ao rei adversário!\n");
    printf("====================================\n");
    return 0; //para não iniciar o jogo quando o usuário ver o tutorial
    break;

    case 3:
    ("Saindo do jogo...\n");
    break;
    default:
    printf("Opção inválida! Reinicie\n");
    return 0; //para de executar o código caso o usuário digite uma opção inválida
    break;
}

    for(bispo = 0; bispo < 5; bispo++){
    printf("\nBispo se move: Cima, direita\n");
}
    while (torre <= 4){
        printf("\nTorre se move: Direita\n");
        torre++;
            }
            do{
                
                rainha++;
                if (rainha <= 8){
                    printf("\nRainha se move: Esquerda\n");
                }
            }while (rainha <= 8);
            
            

    return 0;
    }
       

       
       


