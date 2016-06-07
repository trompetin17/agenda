#include "stdafx.h"
#include "MyList.h"


MyList::MyList()
	:m_firstNode(NULL), m_LastNode(NULL), m_Size(0)
{
}


MyList::~MyList()
{
	free(m_firstNode);
	m_firstNode = NULL;

	free(m_LastNode);
	m_LastNode = NULL;
}

int MyList::appendNode(Node * node)
{
	return 0;
}

int MyList::insertAtFirst(Node * node)
{
	return 0;
}

int MyList::removeNode(Node * node)
{
	return 0;
}

int MyList::clear()
{
	return 0;
}

int MyList::getSize()
{
	return 0;
}
