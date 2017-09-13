#include <string>
#include <vector>
#include<list>
using namespace std;

class Turma
{
    private:
    //Aluno vAlunos[20];
    //bool valido[20];
    public:
    Turma();
    list<Aluno> lAlunos;
    void listaList();
    void inclui(int matr, float n1, float n2);
    void exclui(int matr);
    void consulta(int matr);
    void altera(int matr);
};