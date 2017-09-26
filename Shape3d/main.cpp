/*
 * file: testCShape3d.cpp
 *
 * Descricao: Programa de teste para a Classe.
 *
 * Saida do programa:
 *
 * Volume do paralelograma: 730.17 
 * Volume do cone: 5.12707
 * Volume do cilindro: 20.3575
 *
 *
 * Autor: Rob McGregor
 * Data: ??/??/??
 * 
 * Ultima Alteracao: Eduardo Augusto Bezerra
 * Data da ultima alteracao: 29/05/2003
 *
 */

#include<iostream>
using namespace std;


class CShape3d
{
    protected:
        float x, y, z;
    public:
        virtual float volume() = 0;
};

class CBox: public CShape3d
{
    protected:
        float a, b, c;
    public:
        CBox(float x, float y, float z);
        float volume();
        
};

class CCone: public CShape3d
{
    public:
        double volume(double x, double y);
};

class CCylinder: public CShape3d
{
    public:
        double volume(double x, double y);
};

CBox::CBox(float x, float y, float z)
{
    a = x;
    b = y;
    c = z;
}
float CBox::volume()
{
    return (x*y*z);
}

//double CBox:volume()
//{
//    return x*y*z;
//}
//
//double CBox:volume()
//{
//    return x*y*z;
//}

int main(){
	CShape3d* shape;

	// Um ponteiro para CShape3d assume a forma de um CBox
	//
	shape = new CBox(10.5f, 12.2f, 5.7f);
	cout << "Volume do paralelogramo: " << shape->volume() << endl;
	delete shape;

	// Um ponteiro para CShape3d assume a forma de um CCone
	//
//	shape = new CCone(1.2f, 3.4f);
//	cout << "Volume do cone: " << shape->volume() << endl;
//	delete shape;
//
//	// Um ponteiro para CShape3d assume a forma de um CCylinder
//	//
//	shape = new CCylinder(1.2f, 4.5f);
//	cout << "Volume do cilindro: " << shape->volume() << endl;
//	delete shape;

	return 0;
}
