/*#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int balance = 20;
	int valorAposta;
	int aposta1 = 0;
	int aposta2 = 0;
	int aposta3 = 0;
	char manterAposta = 'a';
	srand(time(NULL));

	int numeroRandom1;
	numeroRandom1 = rand() % 10 + 1;
	int numeroRandom2;
	numeroRandom2 = rand() % 10 + 1;
	int numeroRandom3;
	numeroRandom3 = rand() % 10 + 1;

	cout << "seja bem vindo ao cassino do sergio!" << endl;
	cout << "tens 20 dolares para iniciares, tente advinhar os numeros de 1 a 10, se acertares o numero, dobras a aposta, se errar perde a aposta. tens tres chances para advinhar. ";
	//texto merda, refinar dps xd
	cout << "pronto para comecar?" << endl << endl;
//	system("pause");
	cout << "sua carteira vale: $" << balance << endl;
	cout << "insira quanto quer apostar: ";
	cin >> valorAposta;

	// COMPLETAR ISSO AQ, codar o que falta xd
	
	if (valorAposta > balance)
	{
		cout << "DEBUG! aposta:" << valorAposta << endl;
		cout << "nao podes apostar mais do que tens! tente novamente" << endl;
		int aposta = 0;
	}

	if (valorAposta == balance)
	{
		cout << "opa! tem certeza que quer apostar tudo?" << endl << "insira 's' para continuar e 'n' para inserir uma outra aposta." << endl;
		cin >> manterAposta;
		
		switch (manterAposta)
		{
		case 's':
			cout << "sim";
			break;
		case 'n':
			cout << "nao";

			break;
		default:
			cout << "default";
		}

	}
	
	//tldr: aq eh dps que a aposta foi inserida
	cout << "agora escolha tres numeros de 1 a 10 para apostar: ";
	cin >> aposta1 >> aposta2 >> aposta3;
	
	//colocar codigo de add money nos if das apostas
	if (aposta1 == numeroRandom1)
	{
		cout << "acertaste a primeira aposta!" << endl;
	}
	if (aposta1 != numeroRandom1)
	{
		cout << "erraste a primeira aposta..." << endl;
	}

	if (aposta2 == numeroRandom2)
	{
		cout << "acertaste a segunda aposta!" << endl;
	}
	if (aposta2 != numeroRandom2)
	{
		cout << "erraste a segunda aposta..." << endl;
	}

	if (aposta3 == numeroRandom3)
	{
		cout << "acertaste a terceira aposta!" << endl;
	}
	if (aposta3 != numeroRandom3)
	{
		cout << "erraste a terceira aposta..." << endl;
	}

	return 0;
}
*/