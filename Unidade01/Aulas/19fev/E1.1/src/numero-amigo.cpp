#include <iostream>
#include <list> 
#include <iterator>
using namespace std;

void ver_amigos(list <int> d, int atual)
{
	int soma = 0;
	int soma2 = 0;

	for (list <int> :: iterator it = d.begin(); it != d.end(); it++) 
	{
		soma += *it;
	}

	for (int i = 1; i < soma; i++)
	{
		if (soma % i == 0)
		{
			soma2 += i;
		}
	}

	// && atual != soma, pois chegará um momento em que acontecerá (496, 496)
	// soma > atual pra que não apareçam pares repetidamente
	if (soma2 == atual && atual != soma && soma > atual) {cout << "(" << atual << ", " << soma << ")" << '\n';}
}

void preencher()
{
	list <int> divisores;

	// começando por 220, uma vez que os menores namigos são (220, 284)
	for (int i = 220; i <= 70000; i++)
	{
		divisores.clear();
		
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0) {divisores.push_back(j);}
		}
	
		ver_amigos(divisores, i);
	}
}

int main(void)
{
	preencher();
}