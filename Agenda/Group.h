#pragma once
#include "Node.h"
#include "MyList.h"

class Group :
	public Node
{
public:
	Group();
	~Group();
	
	int getNames(char container[30]);
	int setNames(char newNames[30]);

	MyList* getPersonas();

private:
	char m_Names[30];
	MyList* m_Personas;
};

