#include <string>
#include <iostream>

using namespace std;


class Turma
{
protected:
    string nome_da_turma;
    string nome_do_aluno;
    string componente_curricular;
    char *lista_de_alunos;
    int matricula;
    int quantidade_de_alunos;

public:
    virtual string getNomeDaTurma();
    virtual string setNomeDaTurma();
/*    virtual string getNomeDoAluno();
    virtual string getComponente();
    virtual char   getListaAlunos();
    virtual int    getMatricula();
    virtual int    getQntDeAlunos();*/

};

class Turma_IMD : public Turma
{
public:
    getNomeDaTurma()
    {
        return nome_da_turma;
    }

    setNomeDaTurma(string Nome)
        : nome_da_turma(Nome)
    {
    }

};

int main()
{
    Turma *Teste = new Turma_IMD();

    Teste -> getNomeDaTurma();
}

