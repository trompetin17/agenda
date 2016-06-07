#include "stdafx.h"
#include "Group.h"



Group::Group()
{
	m_Personas = new MyList();
}


Group::~Group()
{
	m_Personas->clear();
	free(m_Personas);
}

int Group::getNames(char container[30])
{
	strcpy_s(container, 30, this->m_Names);
	return 0;
}

int Group::setNames(char newNames[30])
{
	strcpy_s(this->m_Names, 30, newNames);
	return 0;
}

MyList * Group::getPersonas()
{
	return this->m_Personas;
}
