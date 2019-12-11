
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include "funcoesheyguy.h"
int main()
{
char espaco, tecla; 
int qtde, highscore = 0, aux; 
int gameover; // Controle do fim do jogo
int x_atual, y_atual, x_anterior, y_anterior; // vari�veis para a manipula��o da matriz
int k, l, z; // vari�veis para percorrer for
struct jogadores *jogadores;	// Ponteiro para aloca��o dinamica; 	
FILE *maiorpont;
	setlocale(LC_ALL,""); 
	cabecalho();
	texto();
	printf("\n| PRESSIONE A TECLA ENTER PARA CONTINUAR |");
	scanf("%c", &espaco);
	
	if(espaco= 32) {
		system("Cls");
	}
	
	printf("Digite a quantidade de jogadores: "); 
	scanf("%d", &qtde);
	jogadores = (struct jogadores*) malloc (qtde*sizeof(struct jogadores)); // separa memoria para todos os jogadores;
	
    for(z = 0; z < qtde; z++) // Estrutura do jogo para cada jogador;
    {
  		char matriz[20][10] = { {'K','K','R','I','P','T','O','N',' ','K'}, // Formato do jogo
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ',' ',' ',' ',' ','K'},
					 			{'K',' ',' ',' ',' ','S',' ',' ',' ','K'}
								};
		x_atual = 5, y_atual = 19; // posi��o atual do S
		gameover = 0;  
		jogadores[z].pontuacao = 0;
		
		
		flush_in(); // Limpa o buffer do teclado
		printf("Digite seu nome : ");
		gets(jogadores[z].nomes);
   
		instrucoes();

		for(k = 0; k < 20; k++) // Imprime o formato do jogo
		{
			for(l = 0; l < 10; l++)
		  		printf("%c", matriz[k][l]);
			printf("\n");
		}
		
		tecla = getchar();
		flush_in(); 
		while(tecla != 'a' && tecla != 'd')// erro do usu�rio
		{
			printf("Comando inv�lido! Tente novamente.");
			tecla = getchar();
    	}
	
		while(gameover != 1)
		{

			if(tecla == 'a')
			{
			for(x_atual, y_atual;  ; x_atual--, y_atual-- ) // for para avan�ar o jogo � esquerda
			{
				y_anterior = y_atual + 1;
				x_anterior = x_atual + 1;
				system("cls"); // Limpa a tela 
				Sleep(100);
		
				matriz[y_atual][x_atual] = 'S'; // Atualiza a posi��o de 'S' na matriz.
				matriz[y_anterior][x_anterior] = ' '; // Apaga a posi��o anterior de 'S' na matriz.

				jogadores[z].pontuacao = jogadores[z].pontuacao + 1;
				
				if(matriz[y_anterior][0] == ' ' ||matriz[y_anterior][9] == ' ' ){ 
							matriz[y_anterior][x_anterior] = 'K';
						}

			if(matriz[y_atual][0] == 'S' || matriz[y_atual][9] == 'S') // Gameover
			{
				printf("GAME OVER\n");
				gameover = 1;
				break;
			}
			if(matriz[0][x_atual] == 'S')
			{
				printf("Parab�ns! o Superman chegou � Kripton gra�as aos seus esfor�os!\n");
				gameover = 1;
				break;
			}
			for(k = 0; k < 20; k++)
			{
				for(l = 0; l < 10; l++)
				{
					printf("%c", matriz[k][l]); // printa a matriz
				}
				printf("\n");
			}
			tecla = getchar();
			if(tecla == 'd')
				break;
			}
			}

			if(tecla == 'd') // 'S' vai para direita
			{
	
				for(x_atual, y_atual; ; x_atual++, y_atual--)
					{ 
						y_anterior = y_atual + 1;
						x_anterior = x_atual - 1; 
						system("cls"); 
						Sleep(100); 
						matriz[y_atual][x_atual] = 'S';
						matriz[y_anterior][x_anterior] = ' '; // Limpa o "rastro" do S 
						jogadores[z].pontuacao = jogadores[z].pontuacao + 1; // Aumenta a pontua��o � cada itera��o
						
						if(matriz[y_anterior][0] == ' ' ||matriz[y_anterior][9] == ' ' ){ 
							matriz[y_anterior][x_anterior] = 'K';
						}
						if(matriz[y_atual][0] == 'S' || matriz[y_atual][9] == 'S')// Fim de jogo
							{ 
							printf("GAME OVER\n");
							gameover = 1;
							break;
							}
						if(matriz[0][x_atual] == 'S')// Vit�ria
							{ 
								printf("Parab�ns! o Superman chegou � Kripton gra�as aos seus esfor�os!\n"); 
								gameover = 1;
								break;
							}
			
							for(k = 0; k < 20; k++) // Imprime a matriz ap�s a jogada
							{
								for(l = 0; l < 10; l++)
								printf("%c", matriz[k][l]); 
								printf("\n");
 							}	 
							tecla = getchar(); // Atualiza o valor de tecla
							if(tecla == 'a')  // Se tecla vale 'a', o la�o para e recome�a
							break;

					}
		}
		}
					if(jogadores[z].pontuacao > highscore) // Criando o highscore da partida
					{
					remove("highscore.txt");
					highscore = jogadores[z].pontuacao;
					maiorpont = fopen("highscore.txt", "a");
					fprintf(maiorpont, "%d", highscore);
					fclose(maiorpont);
					aux = z;
					}
   
   		if(z < qtde - 1)
   		printf("Digite enter para recome�ar o jogo.\n"); // Se ainda houverem jogadores, aparece a mensagem.

	}
	printf("Lista de jogadores-\n");
	
	for(z = 0; z < qtde; z++)
		printf("Nome: %s / N�mero: %d /Pontua��o: %d\n",jogadores[z].nomes, z + 1, jogadores[z].pontuacao ); // Imprime a lista de jogadores
		
	printf("\n\nJogador com maior pontua��o: %s\nPontua��o: %d pontos",jogadores[aux].nomes, highscore); // Imprime o jogador com a maior pontua��o
	free(jogadores);
}
