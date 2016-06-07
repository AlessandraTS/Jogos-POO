//Tema3- Corrida de carros
#include <iostream> 
#include <string>// Acessa biblioteca do comando string
#include <ctime>// Permite gerar um numero aleatorio
using namespace std;

//Identifica a fun��o
void imprimir_espacos(int total1); 

//fun��o principal
int main(int argc, char* args[]) 
{
	// Variavel boleana para usar no la�o while
	bool sair = false; 

	//Variavel string para salvar os nomes dos jogadores
	string jog1, jog2; 

	//Variavel para definir a quantidade de espacos inicial de cada carrinho, al�m de fazer uma adi��o a cada rodada
	int total1 = 0, total2 = 0;

	//Solicita que o primeiro jogador digite seu nome
	cout << "Digite o nome do jogador 1:" << endl; 
	// Salva o nome digitado na variavel jog1
	cin >> jog1; 
	//Solicita que o segundo jogador digite seu nome
	cout << "Digite o nome do jogador 2:" << endl; 
	// Salva o nome digitado na variavel jog2
	cin >> jog2; 
	
	//Usando o la�o para determinar a hora de parar.(Usando a variavel boleana como condi��o)
	while (sair == false)
	{
		// Variavel para definir o tamanho da pista
		int total_espacos = 80;

		//Fazendo o calculo para gerar um numero aleat�rio
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		//Imprimindo na tela o carro, a chegada e o nome dos jogadores

		cout << "Velozes e Furiosos" << endl;

		cout << "LARGADA:                                                               CHEGADA:" << endl;

		// Imprime nome do primeiro jogador
		cout << "Piloto 1:" << jog1 << endl; 
		//Usa o numero aleatorio gerado no Total1 para definir a qntd de espa�os
		imprimir_espacos(total1);
		// teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio gerado no Total1 para definir a qntd de espa�os
		imprimir_espacos(total1);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espa�os do piloto 1
		cout << "Valor que andou: " << total1 << endl;  

		// Imprime nome do segundo jogador
		cout << "Piloto 2:" << jog2 << endl;
		//Usa o numero aleatorio gerado no Total2 para definir a qntd de espa�os
		imprimir_espacos(total2);
		// teto do carro
		cout << "  _  " << endl;
		//Usa o numero aleatorio gerado no Total2 para definir a qntd de espa�os
		imprimir_espacos(total2);
		//Corpo do carro
		cout << "-o-o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;
		
		//Total de espa�os do piloto 2
		cout << "Valor que andou: " << total2 << endl;  
		
		//Atualiza a tela a cada rodada
		system("cls");

		//Se sair n�o limpa a tela.
		//Condi��o para fazer a condi��o do la�o ficar falsa, e o jogo parar
		if (total1 >= 80 || total2 >= 80)
		{
			//Muda o la�o
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do la�o mostra que o jogo acabou
	cout << "Poxa, o jogo chegou ao fim  :(  " << endl;

	//Define qual jogador ganhou, ou at� se ocorreu empate

	//Mensagem caso o jog1 ganhe
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu!" << endl;

	//Mensagem caso o jog 2 ganhe
	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu !" << endl;

	//Mensagem em caso de empate
	else cout << "OCORREU EMPATE!" << endl;

	return 0; //Retorna ao inicio

}



void imprimir_espacos(int total) //Usando a fun��o void 
{
	// La�o for pq n�o sabe a hora que vai parar.
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";// espa�o que vai ser impresso, dependendo do numero aleatorio.


	}

}