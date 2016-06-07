#include "stdafx.h"
#include "AddressBook.h"


AddressBook::AddressBook()
{
	m_Groups = new MyList();
}


AddressBook::~AddressBook()
{
	m_Groups->clear();
	free(m_Groups);
}

int AddressBook::loadData()
{
	return 0;
}

int AddressBook::saveData()
{
	return 0;
}

MyList * AddressBook::getGroups()
{
	return this->m_Groups;
}
