#include "Turma.cpp"
#include "ClockCalendar.cpp"
#include <iostream>
#include <vector>
#include <list>
using namespace std;

Turma::Turma()
{
	list<Aluno> lAlunos;
	ClockCalendar c;
}
//Metodo para a listagem dos alunos da turma
void Turma::listaList()
{
    list<Aluno>::iterator it;
	it = lAlunos.begin();
	while(it != lAlunos.end())
	{
 	   cout << "Aluno matricula: " << it->getMatr() << endl;
       cout << "Nota prova 1: " << it->getN1() << endl;
       cout << "Nota prova 2: " << it->getN2() << endl;
       cout << "Media final: " << it->calcMedia() << endl << endl;
       it->readClock();
       it->readCalendar(); 
	   it++;	
	}
	
}
//Metodo para a inclusao de alunos

void Turma::inclui(int matr, float n1, float n2, int hr, int sec, int min,
 int is_pm, int mo, int day, int yr)
{
	list<Aluno>::iterator it;
	it = lAlunos.begin();
	bool termina = false;
	
	while(it != lAlunos.end())
	{
		if (matr == it->getMatr())
		{
			cout << "Matricula duplicada! Erro" << endl;
			termina = true;
		}
		it++;
	}
		
	if (!termina)
	{
		it->setMatr(matr);
		it->setN1(n1);
		it->setN2(n2);
		it->setClockCalendar(hr,sec,min,is_pm, mo,day,hr);
		lAlunos.push_front(*it);
		cout << "Aluno cadastrado com sucesso!" << endl;
		c.advance();
	}
    
}
//Metodo para a exclusao de um aluno. Caso a matricula digitada for correta, libera-se a escrita atraves
//do vetor de controle 'valido'
void Turma::exclui(int matr)
{
	list<Aluno>::iterator it;
	it = lAlunos.begin();
	bool found = false;
	
	while(it != lAlunos.end())
	{
		if (matr == it->getMatr())
		{
			lAlunos.erase(it);
            cout << "Aluno excluido!\n\n";
            found = true;
            break;
		}
		it++;
	}
	if (!found)
	{
		cout << "Aluno nao encontrado! Tente novamente.\n\n";	
	} 
	

}
//Metodo para consulta de apenas uma matricula
void Turma::consulta(int matr)
{
 	list<Aluno>::iterator it;
	it = lAlunos.begin();
	bool found = false;
	
	while(it != lAlunos.end())
	{
		if (matr == it->getMatr())
		{
            found = true;
            cout << "Nota 1: " << it->getN1() << endl;
            cout << "Nota 2: " << it->getN2() << endl;
            cout << "Media final: " << it->calcMedia() << endl << endl;
            it->readClock();
			it->readCalendar(); 
		}
		it++;
	}
	if (!found)
	{
		cout << "Aluno nao encontrado! Tente novamente.\n\n";	
	} 
	
	
}
//Alteracao das notas de um determinado aluno
void Turma::altera(int matr)
{
    list<Aluno>::iterator it;
	it = lAlunos.begin();
	bool found = false;
	float nota1, nota2;
	
	while(it != lAlunos.end())
	{
		if (matr == it->getMatr())
		{
            found = true;
            cout << "Digite a nova nota 1: "; cin >> nota1;
            cout << "\nDigite a nova nota 2: "; cin >> nota2;
            it->setN1(nota1);
            it->setN2(nota2);
		}
		it++;
	}
	if (!found)
	{
		cout << "Aluno nao encontrado! Tente novamente.\n\n";	
	} 
		
}