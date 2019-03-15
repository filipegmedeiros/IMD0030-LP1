#include <string>
#include <iostream>

using namespace std;

class Turma
{

protected:
	string m_nome;


Turma(string nome)
	: m_nome(nome)
{
}


public:
	string getNomeDaTurma() {return m_nome;	}
	virtual const char* speak() { return "????"; }

}



class Turma_IMD : public Turma
{
public:
	Nome_da_Turma(string nome)
		: Turma(nome);
		{
		}
	virtual const char* speak() { return "Oi?"; }
}

void report(Turma &numsei)
{
    cout << numsei.getName() << " says " << numsei.speak() << '\n';
}

int main()
{
Nome_da_Turma Nome_da_Turma("oi");
report(Nome_da_Turma);
}
