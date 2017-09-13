#include "Aluno.cpp"
#include "Turma.cpp"
#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
   bool sair = false;
   int opcao, matr;
   float n1, n2;
   Turma CadAlunos;
   cout << "Programa de cadastro de alunos - EEL 510232 - UFSC 2017";
    do
     {
         //Mostra todas as opções
         cout << "\n1. Cadastrar aluno" << endl;
         cout << "2. Consultar aluno" << endl;
         cout << "3. Listar turma" << endl;
         cout << "4. Excluir aluno" << endl;
         cout << "5. Alterar aluno" << endl;
         cout << "6. Sair" << endl;
         cout << "Digite a opcao desejada: ";
         cin >> opcao;
         //Switch para direcionar a escolha aos metodos da classe CadAlunos
         switch (opcao)
         {
             case 1:
                 cout << "\nDigite a matricula: "; cin >> matr;
                 cout << "Digite a nota 1: "; cin >> n1;
                 cout << "Digite a nota 2: "; cin >> n2;
                 CadAlunos.inclui(matr,n1,n2);
                 break;
             case 2:
                cout << "\nDigite a matricula do aluno a consultar: "; cin >> matr;
                CadAlunos.consulta(matr);
                break;
             case 3:
                cout << "\nOpcao listar turma, listando:\n";
                CadAlunos.listaList();
                break;
             case 4:
                cout << "\nDigite a matricula do aluno a excluir: "; cin >> matr;
                CadAlunos.exclui(matr);
                break;
             case 5:
                cout << "\nDigite a matricula do aluno a consultar: "; cin >> matr;
                CadAlunos.altera(matr);
                break;
             case 6:
                sair = true;
                break;
             default:
                cout << "\nA opcao digitada nao existe! Tente novamente. \n\n";
         }
     } while(!sair);
   return 0;
}