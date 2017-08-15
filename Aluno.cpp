#include "Aluno.h"
using namespace std;

Aluno::Aluno() {
   p1 = ;
   p2 = ;
   nome = "";
   matricula = "";
}

Aluno::~Aluno() {
   p1 = ;
   p2 = ;
   media = ;
   nome = "";
   matricula = "";
}

void Aluno::setP1(float newNotaP1) {
    p1 = newNotaP1;
}

void Aluno::setP2(float newNotaP2) {
    p2 = newNotaP2;
}

void Aluno::setNome(string newNome) {
    nome = newNome;
}

void Aluno::setMatricula(string newMatricula) {
    matricula = newMatricula;
}


float Aluno::getP1() {
    return p1;
}

float Aluno::getP2() {
    return p2;
}

float Aluno::getMedia() {
    return (p1 + p2) / 2;
}

string Aluno::getNome() {
    return nome;
}

int Aluno::getMatricula() {
    return matricula;
}
