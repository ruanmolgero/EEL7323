#include "Turma.h"
#include <iostream>
#include <vector>
#include <list>
using namespace std;

Turma::Turma()
{
	list<Aluno> lAlunos;
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
	   it++;	
	}
	
	
	/*
	for (int i=0; i<20; i++)
    {
        if(valido[i])
        {
           cout << "Aluno matricula: " << vAlunos[i].getMatr() << endl;
           cout << "Nota prova 1: " << vAlunos[i].getN1() << endl;
           cout << "Nota prova 2: " << vAlunos[i].getN2() << endl;
           cout << "Media final: " << vAlunos[i].calcMedia() << endl << endl;
        }
    } */
}
//Metodo para a inclusao de alunos
/*
    Realizei algumas modificacoes em relacao a aula,
    porem a ideia foi bem semelhante
*/
void Turma::inclui(int matr, float n1, float n2)
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
		lAlunos.push_front(*it);
		cout << "Aluno cadastrado com sucesso!" << endl;
	}
    
    
	
	/*int i = 0;
    int guardaPosicao;
    bool sai = false;
    bool termina = false;
    do
    {
        for (int x=0; x<20; x++)
        {
            if (matr == vAlunos[x].getMatr())
            {
                cout << "Matricula duplicada! Erro" << endl;
                sai = true;
            }
        }
        if (!sai && !valido[i])
        {
            guardaPosicao = i;
            termina = true;
        }
        i++;
    } while (i<20 && !sai && !termina);
    // Caso sai = true, o encerramento foi devido a um problema de matricula
    // duplicada, nao podendo ser gravado os dados no objeto
    // A flag 'termina' existe para direcionar o fluxo caso haja um espaco livre no vetor valido[i]
    if (!sai && termina)
    {
        vAlunos[guardaPosicao].setMatr(matr);
        vAlunos[guardaPosicao].setN1(n1);
        vAlunos[guardaPosicao].setN2(n2);
        valido[guardaPosicao] = 1; // Indica o preenchimeto de um objeto
    }*/
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
	
	
    /*bool found = 0;
    int i = 0;
    while (!found && i<20)
    {
        if (matr == vAlunos[i].getMatr())
        {
            found = 1;
            valido[i] = 0;
            vAlunos[i].setMatr(-1); //Numero invalido para liberar o repreenchimento
            cout << "Aluno excluido!\n\n";
        }
        i++;
    }
    if (!found) cout << "Aluno nao encontrado! Tente novamente.\n\n";*/
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
		}
		it++;
	}
	if (!found)
	{
		cout << "Aluno nao encontrado! Tente novamente.\n\n";	
	} 
	
	
	
	/*bool found = 0;
    int i = 0;
    while (!found && i<20)
    {
        if (matr == vAlunos[i].getMatr())
        {
            found = 1;
            cout << "Nota 1: " << vAlunos[i].getN1() << endl;
            cout << "Nota 2: " << vAlunos[i].getN2() << endl;
            cout << "Media final: " << vAlunos[i].calcMedia() << endl << endl;
        }
        i++;
    }
    if (!found) cout << "Aluno nao encontrado! Tente novamente.\n\n";*/
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
		
	
	/*bool found = 0;
    int i = 0;
    float nota1, nota2;
    while (!found && i<20)
    {
        if (matr == vAlunos[i].getMatr())
        {
            found = 1;
            cout << "Digite a nova nota 1: "; cin >> nota1;
            cout << "\nDigite a nova nota 2: "; cin >> nota2;
            vAlunos[i].setN1(nota1);
            vAlunos[i].setN2(nota2);
        }
        i++;
    }
    if (!found) cout << "Aluno nao encontrado! Tente novamente.\n\n";*/
}