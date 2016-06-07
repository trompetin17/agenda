#include "stdafx.h"
#include "Person.h"


Person::Person()
{
	m_Phones = new MyList();
}


Person::~Person()
{
	m_Phones->clear();
	free(m_Phones);
}

int Person::getNames(char container[30])
{
	strcpy_s(container, 30, this->m_Names);
	return 0;
}

int Person::setNames(char newNames[30])
{
	strcpy_s(this->m_Names, 30, newNames);
	return 0;
}

int Person::getLastNames(char container[30])
{
	strcpy_s(container, 30, this->m_Lastnames);
	return 0;
}

int Person::setLastNames(char newLastName[30])
{
	strcpy_s(this->m_Lastnames, 30, newLastName);
	return 0;
}

MyList * Person::getPhones()
{
	return this->m_Phones;
}
