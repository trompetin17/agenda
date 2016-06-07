#pragma once
#include "Node.h"
#include "MyList.h"

class Person :
	public Node
{
public:
	Person();
	~Person();

	int getNames(char container[30]);
	int setNames(char newNames[30]);

	int getLastNames(char container[30]);
	int setLastNames(char newLastName[30]);

	MyList* getPhones();
private:
	char m_Names[30];
	char m_Lastnames[30];
	MyList* m_Phones;
};

