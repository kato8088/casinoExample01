#include <iostream>
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
    resume01:
	cout << "insira quanto quer apostar: ";
	cin >> valorAposta;

	// COMPLETAR ISSO AQ, codar o que falta xd
	
	if (valorAposta > balance)
	{
		cout << "nao podes apostar mais do que tens! tente novamente" << endl;
		valorAposta = 0;
        goto resume01;
	}

	if (valorAposta == balance)
	{
        tryAgain01:
		cout << "opa! tem certeza que quer apostar tudo?" << endl << "insira 's' para continuar e 'n' para inserir uma outra aposta." << endl;
		cin >> manterAposta;
		
		switch (manterAposta)
		{
		case 's':
			cout << "sim";
			break;
		case 'n':
            goto resume01;
		default:
			cout << "tente novamente!" << endl;
            goto tryAgain01;
		}

	}
	
	//tldr: aq eh dps que a aposta foi inserida
	cout << "agora escolha tres numeros de 1 a 10 para apostar: ";
	cin >> aposta1 >> aposta2 >> aposta3;
	
	//colocar codigo de add money nos if das apostas (done, agr e so testar e ver se ta pika)
	if (aposta1 == numeroRandom1)
	{
		cout << "acertaste a primeira aposta!" << endl;
        balance = balance + valorAposta*2;
	}
	if (aposta1 != numeroRandom1)
	{
		cout << "erraste a primeira aposta..." << endl;
        balance = balance - valorAposta;
	}

	if (aposta2 == numeroRandom2)
	{
		cout << "acertaste a segunda aposta!" << endl;
        balance = balance + valorAposta*2;
	}
	if (aposta2 != numeroRandom2)
	{
		cout << "erraste a segunda aposta..." << endl;
        balance = balance - valorAposta;
	}

	if (aposta3 == numeroRandom3)
	{
		cout << "acertaste a terceira aposta!" << endl;
        balance = balance + valorAposta * 2;
	}
	if (aposta3 != numeroRandom3)
	{
		cout << "erraste a terceira aposta..." << endl;
        balance = balance - valorAposta;
	}
    
    cout << "DEBUG! balance atual: " << balance << endl;
    // nota: sistema de manipulacao de balance ja esta funcionando :DD

	return 0;
}