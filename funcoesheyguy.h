void instrucoes(){ //frases de instru��es
	printf("\nControle o jogo usando as teclas \n'a' - esquerda\n'd'- direita\nCaso pressione outra tecla, o Superman repetir� o �ltimo movimento!");
    	printf("\npressione ENTER para confirmar a escolha � cada movimento.\n");
    	printf("N�O encoste nas K(riptonitas).\nENTER - Ok\n\n");
	 	getchar();
    	system("cls"); // limpa a tela
		system("color bC"); // deixa a cor vermelha
}

void introducao(){ // frases de introdu��o
	printf("Controle o jogo usando as teclas \n'a' - esquerda\n'd'- direita\nCaso pressione outra tecla, o Superman repetir� o �ltimo movimento!");
    printf("\npressione ENTER para confirmar a escolha � cada movimento.\n");
    printf("Mude de dire��o e ganhe pontos extras!!\n");
    printf("N�O encoste nas K(riptonitas).\nENTER - Ok\n\n");
}

void flush_in(){ // limpa o buffer do teclado
	int ch;
	while((ch = getc(stdin))!= EOF && ch != '\n'){}
}
struct jogadores{ // estrutura de cada jogador
	char nomes[40];
	int pontuacao;
};

int cabecalho() // Desenho do menu
{
	system("color b0");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------"
	       "                  HHHHHHHHH     HHHHHHHHHEEEEEEEEEEEEEEEEEEEEEEYYYYYYY       YYYYYYY             GGGGGGGGGGGGGUUUUUUUU     UUUUUUUUYYYYYYY       YYYYYYY\n"
	"                  H:::::::H     H:::::::HE::::::::::::::::::::EY:::::Y       Y:::::Y          GGG::::::::::::GU::::::U     U::::::UY:::::Y       Y:::::Y\n"
	"                  H:::::::H     H:::::::HE::::::::::::::::::::EY:::::Y       Y:::::Y        GG:::::::::::::::GU::::::U     U::::::UY:::::Y       Y:::::Y\n"
	"               	  HH::::::H     H::::::HHEE::::::EEEEEEEEE::::EY::::::Y     Y::::::Y       G:::::GGGGGGGG::::GUU:::::U     U:::::UUY::::::Y     Y::::::Y\n"
	"	            H:::::H     H:::::H    E:::::E       EEEEEEYYY:::::Y   Y:::::YYY      G:::::G       GGGGGG U:::::U     U:::::U YYY:::::Y   Y:::::YYY\n"
	"	            H:::::H     H:::::H    E:::::E                Y:::::Y Y:::::Y        G:::::G               U:::::D     D:::::U    Y:::::Y Y:::::Y   \n"
	"	            H::::::HHHHH::::::H    E::::::EEEEEEEEEE       Y:::::Y:::::Y         G:::::G               U:::::D     D:::::U     Y:::::Y:::::Y    \n"
	"	            H:::::::::::::::::H    E:::::::::::::::E        Y:::::::::Y          G:::::G    GGGGGGGGGG U:::::D     D:::::U      Y:::::::::Y     \n"
	"	            H:::::::::::::::::H    E:::::::::::::::E         Y:::::::Y           G:::::G    G::::::::G U:::::D     D:::::U       Y:::::::Y      \n"
	"	            H::::::HHHHH::::::H    E::::::EEEEEEEEEE          Y:::::Y            G:::::G    GGGGG::::G U:::::D     D:::::U        Y:::::Y       \n"
	"	            H:::::H     H:::::H    E:::::E                    Y:::::Y            G:::::G        G::::G U:::::D     D:::::U        Y:::::Y       \n"
	"	            H:::::H     H:::::H    E:::::E       EEEEEE       Y:::::Y             G:::::G       G::::G U::::::U   U::::::U        Y:::::Y       \n"
	"	          HH::::::H     H::::::HHEE::::::EEEEEEEE:::::E       Y:::::Y              G:::::GGGGGGGG::::G U:::::::UUU:::::::U        Y:::::Y       \n"
	"	          H:::::::H     H:::::::HE::::::::::::::::::::E    YYYY:::::YYYY            GG:::::::::::::::G  UU:::::::::::::UU      YYYY:::::YYYY    \n"
	"	          H:::::::H     H:::::::HE::::::::::::::::::::E    Y:::::::::::Y              GGG::::::GGG:::G    UU:::::::::UU        Y:::::::::::Y    \n"
	"	          HHHHHHHHH     HHHHHHHHHEEEEEEEEEEEEEEEEEEEEEE    YYYYYYYYYYYYY                 GGGGGG   GGGG      UUUUUUUUU          YYYYYYYYYYYYY    \n"
	"------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
	system("pause");
	
	return 0;
}

int texto(){ // Texto da hist�ria
	
	printf("\t\t\t\t\t\t\t\t\t\t\tO ");
	Sleep(100);
	
	printf("S");
	Sleep(100);
	
	printf("U");
	Sleep(100);
	
	printf("P");
	Sleep(100);
	
	printf("E");
	Sleep(100);
	
	printf("R");
	Sleep(100);
	
	printf("M");
	Sleep(100);
	
	printf("A");
	Sleep(100);
	
	printf("N ");
	Sleep(100);
	
	printf("E");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("� ");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("M");
	Sleep(100);
		
	printf(" U");
	Sleep(100);
		
	printf("M");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf(" N");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("V");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf(" M");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("S");
	Sleep(100);
	
	printf("�");
	Sleep(100);
	
	printf("O");
	Sleep(100);
	
	printf("!\n");
	Sleep(100);
	
	printf("\t\t\t\t\t\t\t\t\tE");
	Sleep(100);
		
	printf("L");
	Sleep(100);
		
	printf("E ");
	Sleep(100);
		
	printf("P");
	Sleep(100);
		
	printf("R");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("C");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("A ");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("L");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("R");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("P");
	Sleep(100);
		
	printf("A");
	Sleep(100);
	
	printf("S");
	Sleep(100);
	
	printf("S");
	Sleep(100);
	
	printf("A");
	Sleep(100);
	
	printf("R");
	Sleep(100);
		
	printf(" O");
	Sleep(100);
		
	printf("S ");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("B");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("�");
	Sleep(100);
		
	printf("C");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("L");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" S");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("M");
	Sleep(100);
		
	printf(" E");
	Sleep(100);
	
	printf("N");
	Sleep(100);
	
	printf("C");
	Sleep(100);
	
	printf("O");
	Sleep(100);
	
	printf("S");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("R");
	Sleep(100);
		
	printf(" N");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" K");
	Sleep(100);
		
	printf("R");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("P");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("N");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("A");
	Sleep(100);
	
	printf("S");
	Sleep(100);
	
	printf("!\n");
	Sleep(100);
	
	printf("\t\t\t\t\t\t\t\tQ");
	Sleep(100);
	
	printf("U");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("N");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf(" M");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" E");
	Sleep(100);
		
	printf("L");
	Sleep(100);
		
	printf("E ");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("B");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("R");
	Sleep(100);
	
	printf(", ");
	Sleep(100);
	
	printf("M");
	Sleep(100);
	
	printf("A");
	Sleep(100);
	
	printf("I");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" S");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" P");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("N");
	Sleep(100);
		
	printf("T");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" A");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("M");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("N");
	Sleep(100);
	
	printf("T");
	Sleep(100);
	
	printf("A");
	Sleep(100);
	
	printf("M ");
	Sleep(100);
	
	printf("E");
	Sleep(100);
		
	printf(" V");
	Sleep(100);
		
	printf("O");
	Sleep(100);
		
	printf("C");
	Sleep(100);
		
	printf("� ");
	Sleep(100);
		
	printf("D");
	Sleep(100);
		
	printf("E");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("X");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("-");
	Sleep(100);
		
	printf("O ");
	Sleep(100);
		
	printf("M");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("I");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf(" P");
	Sleep(100);
	
	printf("E");
	Sleep(100);
	
	printf("R");
	Sleep(100);
	
	printf("T");
	Sleep(100);
	
	printf("O ");
	Sleep(100);
		
	printf("D");
	Sleep(100);
		
	printf("E ");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("U");
	Sleep(100);
		
	printf("A ");
	Sleep(100);
		
	printf("C");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("S");
	Sleep(100);
		
	printf("A");
	Sleep(100);
		
	printf("!");
	
	return 0;
}

