#include <string>
using namespace std;

class Aluno {
        float p1;
        float p2;
        float media;
        string nome;
        int matricula;
    public:
        Turma();
        ~Turma();
        void setP1(float newNotaP1);
        void setP2(float newNotaP2);
        void setNome(string newNome);
        void setMatricula(string newMatricula);
        float getP1();
        float getP2();
        float getMedia();
        string getNome();
        int getMatricula();
};
