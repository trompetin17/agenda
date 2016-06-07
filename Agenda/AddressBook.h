#pragma once
#include "MyList.h"
#include "Group.h"

class AddressBook
{
public:
	AddressBook();
	~AddressBook();

	int loadData();
	int saveData();

	MyList* getGroups();
private:
	MyList* m_Groups;
};

