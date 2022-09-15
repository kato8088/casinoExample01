#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	restart:
	int balance = 20;
	int valorAposta;
	int aposta1 = 0;
	int aposta2 = 0;
	int aposta3 = 0;
	int apostasCorretas = 0;
	int statsSpent = 0;
	int statsQuantidadeApostas = 0;
	char manterAposta = 'a';
	char restartGame = 'a';
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
	cout << "sua carteira vale: $" << balance << endl;
    resume01:
	cout << "insira quanto quer apostar: ";
	cin >> valorAposta;
//	cout << "DEBUG! balance: " << balance << "valor aposta: " << valorAposta << endl;

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
		//	cout << "sim";
			balance = balance - valorAposta;
			statsSpent = statsSpent + valorAposta;
			break;
		case 'n':
            goto resume01;
		default:
			cout << "tente novamente!" << endl;
            goto tryAgain01;
		}

	}
	if (valorAposta <= 0)
	{
		cout << "como o valor da aposta foi menor ou igual a zero, voce podera jogar mas sem valer nada!" << endl;
	}
	else
	{
		balance = balance - valorAposta;
		statsSpent = statsSpent + valorAposta;
//		cout << "DEBUG! balance: " << balance << "valor aposta: " << valorAposta << endl;
	}
	
	//tldr: aq eh dps que a aposta foi inserida
retryAposta:
	cout << "agora escolha tres numeros de 1 a 10 para apostar: ";
	cin.clear();
	cin.ignore();
	cin >> aposta1 >> aposta2 >> aposta3;
	statsQuantidadeApostas = statsQuantidadeApostas + 3;
	cout << endl;

	/*
	if (cin.fail())
	{
		cout << "um caractere invalido foi inserido, tente novamente!" << endl;
		aposta1 = 0;
		aposta2 = 0;
		aposta3 = 0;
		goto retryAposta;
	}
	nota: nao funcionando atm, algum integer fica maior do que 10 por algum motivo o qual estou com bastante sono pra ir atras xd
	nota2: pode ser que nao esteja funcionando por causa que nao esta em um loop while :D

	if (aposta1 || aposta2 || aposta3 > 10)
	{
		cout << "uma das apostas inseridas foi maior do que 10, tente novamente!" << endl;
		aposta1 = 0;
		aposta2 = 0;
		aposta3 = 0;
		goto retryAposta;
	}
	*/

	// DONE! colocar codigo de add money nos if das apostas (done, agr e so testar e ver se ta pika)
	if (aposta1 == numeroRandom1)
	{
		cout << "acertaste a primeira aposta!" << endl;
        balance = balance + valorAposta*2;
		apostasCorretas = apostasCorretas + 1;
	}
	if (aposta1 != numeroRandom1)
	{
		cout << "erraste a primeira aposta..." << endl;
      //  balance = balance - valorAposta;
	}

	if (aposta2 == numeroRandom2)
	{
		cout << "acertaste a segunda aposta!" << endl;
        balance = balance + valorAposta*2;
		apostasCorretas = apostasCorretas + 1;
	}
	if (aposta2 != numeroRandom2)
	{
		cout << "erraste a segunda aposta..." << endl;
     //   balance = balance - valorAposta;
	}

	if (aposta3 == numeroRandom3)
	{
		cout << "acertaste a terceira aposta!" << endl;
        balance = balance + valorAposta * 2;
		apostasCorretas = apostasCorretas + 1;
	}
	if (aposta3 != numeroRandom3)
	{
		cout << "erraste a terceira aposta..." << endl;
     //   balance = balance - valorAposta;
	}

	// 2do (DONE!): colocar dependendo de quantas apostas foram acertadas, textos diferentes de tryagain
	cout << endl;
	if (apostasCorretas == 0)
	{
		cout << "boa sorte na proxima! tente novamente" << endl;
	}
	if (apostasCorretas == 1)
	{
		cout << "bem jogado, jogue novamente!" << endl;
		apostasCorretas = 0;
	}
	if (apostasCorretas == 2)
	{
		cout << "otima jogada! jogue novamente!" << endl;
		apostasCorretas = 0;
	}
	if (apostasCorretas == 3)
	{
		cout << "parabens! voce acertou todas as apostas, use bem os " << balance + valorAposta * 6 << "! jogue novamente!" << endl;
		apostasCorretas = 0;
	}

	cout << "sua carteira vale: $" << balance << endl;
	cout << endl;
    
	if (balance < 1)
	{
		tryAgain02:
		cout << "o seu saldo ficou menor do que $1, portanto perdeste o jogo :(" << endl;
		cout << "deseja recomecar o jogo?" << endl << "insira 's' para recomecar e insira 'n' para fechar o jogo." << endl << "insira 'e' para ver as estatisticas." << endl;
		cin.ignore();
		cin.clear();
		cin >> restartGame;
		switch (restartGame)
		{
		case 's':
			balance = 20;
			valorAposta;
			aposta1 = 0;
			aposta2 = 0;
			aposta3 = 0;
			manterAposta = 'a';
			restartGame = 'a';
			goto restart;
		case 'n':
			cout << "obrigado por jogar! ate a proxima!" << endl;
			return 777;
		case 'e':
			cout << endl << "o total gasto nessa sessao foi: $" << statsSpent << endl;
			cout << "voce realizou " << statsQuantidadeApostas << " apostas nessa sessao" << endl;
			cout << "obrigado por jogar! ate a proxima!" << endl;
			return 777;
		default:
			cout << "input invalido, insira 's' para recomecar, 'n' para sair e 'e' para ver as estatisticas dessa sessao de jogo." << endl;
			goto tryAgain02;
		}
	}
	if (balance >= 1)
	{
		goto resume01;
	}
	

    // nota: sistema de manipulacao de balance ja esta funcionando :DD
	// 2do: (scraped!) fazer verificacao de valor de aposta para que a balance nunca fique menor do que 1
	// 2do 2: (DONE!) caso a balance fique menor do que 1, terminar o jogo
	// 2do 3: (DONE!) implementar sistema de estatisticas no final do jogo

	return 0;
}