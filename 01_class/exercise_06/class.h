#include <string>
#include "student.h"

class Class {
	
	private
		Student 	studentVector[20];
		//float 		media;
	public:
		bool 		searchID(int ID);
		bool 		addStudent(int ID, string name);
		bool 		removeStudent(int ID, string name);
		float 		getMedia();
		void		editStudent(int ID);
		void		printStudent(int ID);
};
