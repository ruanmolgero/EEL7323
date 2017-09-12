#include "class.h"
#include "student.cpp"
using namespace std;

Class::Class(){
}

Class::~Class(){
}

bool Class::searchID(int ID){
	bool existID = false;
	
	
	for(int i = 0; i < 20; i++)
		if(studentVector[i].getID() == ID){
			existID = true;
			i = 20;
		}

//	int i = 0;
//	while(existID == false && i<20){
//		if(studentVector[i].getID() == ID)
//			existID = true;
//		i++;
//	}
	
	return existID;
}

bool Class::addStudent(int ID){	
	if(this.searchID(ID) == true)
		cout << "There's already a student with the same ID.";
	
	bool freeSpace;
	
	for(int i = 0; i < 20; i++)
		
		
}

bool Class::removeStudent(int ID){
	
}

float Class::getMedia(){
	
}

void Class::editStudent(int ID){
	
}

void Class::printStudent(int ID){
	
}
