#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	//Declara��o de vari�veis
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int a1 = 4, a2 = 4;
	int d1 = 1, d2 = 1;

	//Perguta o nome do jogador 1
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	//Perguta o nome do jogador 2
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	// Loop para dar continuidade a partidas

	while (sair == false)
	{
		//Corpo dos personagens
		cout << " O			   O" << endl;
		cout << ".T./		         \\.T." << endl;
		cout << " ^			   ^" << endl;
		cout << jog1 << "	                " << jog2 << endl;

		//Vari�veis para lan�ar um n�mero aleat�rio

		// Para primeiro jogador 

		//Vai salvar o n�mero aleat�rio
		int dado1;
		//Vai guardar o valor aleat�rio para ser usado na condi��o
		int dadof1;
		//Vai guardar o resultado do dano para imprimir futuramente na tela	
		int dano1;

		//Adiciona uma "semente" ao gerador de n�meros
		srand((int)time(0));
		//Gera um n�mero aleat�tio entre 1 e 6
		dado1 = rand() % 6 + 1;
		dadof1 = dado1;


		//Se a vari�vel que guarda o valor aleat�rio for mais que 4
		if (dadof1 >= 4)
		{
			//C�lculo para obter valor de dano
			dano1 = a2 - d1;
			//vai substituir o valor da vida do jog 1 a partir da subtra��o do vida pelo dano
			vida1 = vida1 - dano1;


		}
		//Vari�veis para lan�ar n�mero aleat�rio

		//Para segundo jogador 

		//Vai salvar o n�mero aleat�rio
		int dado2;
		//Vai guardar o valor aleat�rio para ser usado na condi��o
		int dadof2;
		//Vai guardar o resultado do dano para imprimir futuramente na tela	
		int dano2;

		//Adiciona uma "semente" ao gerador de n�meros
		srand((int)time(0));
		//Gera um n�mero aleat�tio entre 1 e 6
		dado2 = rand() % 6 + 1;
		dadof2 = dado2;

		//Se a vari�vel que guarda o valor aleat�rio for mais que 4
		if (dadof2 >= 4)
		{
			//C�lculo para obter valor de dano
			dano2 = a1 - d2;
			//vai substituir o valor da vida do jog 2 a partir da subtra��o do vida pelo dano
			vida2 = vida2 - dano2;

		}

		//Caso o valor do dado seja maior que 4 o jogador ir� acertar
		if (dadof2 && dadof1 >= 4)
		{
			//Imprime o acerto e o dano obtido
			cout << "\Acertou!:)" << "           " << "Dano:-" << dano1 << endl;

		}
		//Caso a codi��o do n�mero do dado ser menor que 4 o jogador errar�
		else cout << "Errou :( " << endl;

		//imprimindo informa��es na tela
		//Imprime o ataque do jog 1 e do jog 2
		cout << "A:" << a1 << "                    " << "A:" << a2 << endl;
		//Imprime a defesa do jog 1 e do jog2
		cout << "D:" << d1 << "                    " << "D:" << d2 << endl;
		//Imprime a vida do jog 1 e do jog 2
		cout << "Vida:" << vida1 << "               " << "Vida:" << vida2 << endl;

		//Continua o loop sem deixar o programa fechar
		system("Pause");
	
		//Se a vida de um dos jogadores chegar a zero a tela ser� fechada, sair=true.
		if (vida1 <= 0 || vida2 <= 0)
		{
			
			sair = true;

		}
		//Caso contrario, a vida for maior que zero a tela ser� atualizada para a continua��o do loop
		else system("cls");
		
		//Quando a vida chegar at� 0 os dois perdem
		if (vida1 && vida2 < 0) cout << "Os dois perderam!" << endl;
	}
	return 0;
}