#pragma once
#include "Node.h"
class MyList
{
public:
	MyList();
	~MyList();

	int appendNode(Node* node);
	int insertAtFirst(Node* node);
	int removeNode(Node* node);
	int clear();
	int getSize();
private:
	Node* m_firstNode;
	Node* m_LastNode;
	int m_Size;
};

