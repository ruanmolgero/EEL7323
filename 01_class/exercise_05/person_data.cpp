#include "person_data.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Data
{
	int 	month, day, year;
};

struct Person
{
	char 	name[80];
	int 	age;
	float 	weight;
	
	Data	birth;
	
};

void printPerson(Person person1)
{
	cout 	<< person1.name << ", " << person1.age << " years old, has " << person1.weight << " kilograms." << endl 
			<< "Born in " 	<< person1.birth.month << "/" << person1.birth.day << "/" << person1.birth.year	<< "."<< endl;
}
