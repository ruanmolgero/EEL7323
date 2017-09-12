#include "student.h"
using namespace std;

Student::Student(int ID) {
	this.ID = ID;
	name = "";
	p1 = -1;
	p2 = -1;
}

Student::~Student() {
}

void Student::setID(int ID){
	this.ID = ID;
}

void Student::setName(string name){
	this.name = name;
}

void Student::setP1(float p1){
	this.p1 = p1;
}

void Student::setP2(float p2){
	this.p2 = p2;
}

int getID(){
	return this.ID;
}

string Student::getName(){
	return this.name;
}

float Student::getP1(){
	return this.p1;
}

float Student::getP2(){
	return this.p2;
}

float Student::getMedia(){
	return (this.p1 + this.p2) / 2;
}
