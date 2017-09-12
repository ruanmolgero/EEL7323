#include "person.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Person
{
	char name[80];
	int age;
	float weight;
};

void printPerson(Person person1)
{
	cout << person1.name << ", " << person1.age << " years old, has " << person1.weight << " kilograms.";
}
