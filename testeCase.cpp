#include <iostream>
using namespace std;
/*
int main()
{
	int teste01 = 0;

	cout << "teste case" << endl;
	cout << "insira ples :>" << endl;
	cin >> teste01;

	switch (teste01)
		{
		case 5:
			cout << "digitaste 5" << endl;
			break;
		case 10:
			cout << "digitaste 10" << endl;
			break;
		case 69:
			cout << "digitaste 69 e nao tem break no codigo" << endl;
		default:
			cout << "default :D" << endl;
			break;
		}
		cout << "fora do loop!" << endl;
	return 0;
}
// nota: codigo funcionando, caso for mudar alguma coisa, copiar e colar em outro espaco para testar de novo!
*/
int main()
{
	while (!cin.fail())
	{
	// teste de balance manipulation - add and remove money
		//int balanceTeste = 50;
		int balanceTeste{};
		int valorApostaTeste1;
	int apostaTeste1;
	int respostaTeste1 = 7;
	cout << "balance: " << balanceTeste << endl;
	cout << "coloque a aposta 1 aqui (resposta = 7)" << endl;
	cin >> apostaTeste1;
	cout << "coloque quanto money quer apostar: " << endl;
	cin >> valorApostaTeste1;

	if (apostaTeste1 == respostaTeste1)
	{
		cout << "parabens, acertaste yeeey" << endl;
		balanceTeste + valorApostaTeste1 * 2;
	}
	if (apostaTeste1 != respostaTeste1)
	{
		cout << "erraste!1!!!!11 :OOOO" << endl;
		balanceTeste - valorApostaTeste1;
	}
	}
	return 0;
}
// nao ta funcionando essa porra, problema no codigo de balance, manipulacao soma/subtracao...