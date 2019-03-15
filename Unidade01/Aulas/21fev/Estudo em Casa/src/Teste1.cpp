#include <iostream>
using namespace std;

class Turma
{
public:
	virtual const char* getNomeDaTurma() = 0;
	virtual const char* setNomeDaTurma() = 0;
};


class Turma_IMD : public Turma
{
private:
	const char* nome_da_turma = "Turma 01";
	char *nome_do_aluno;

public:
	const char* getNomeDaTurma()
	{
		cout << nome_da_turma << endl;
		return nome_da_turma;
	}

	/*const char* setNomeDaTurma()
	{
		cin >> nome_da_turma >> endl;;
	}*/
};




int main(int argc, char *argv[])
{
	Turma *Teste = new Turma_IMD();


	Teste -> getNomeDaTurma();


	return 0;
}
