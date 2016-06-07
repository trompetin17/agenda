#include "stdafx.h"
#include "Phone.h"


Phone::Phone()
{
}


Phone::~Phone()
{
}

int Phone::getNumber(char container[30])
{
	strcpy_s(container, 30, this->m_Number);
	return 0;
}

int Phone::setNumber(char newNumber[30])
{
	strcpy_s(this->m_Number, 30, newNumber);
	return 0;
}

EPhoneType Phone::getPhoneType()
{
	return this->m_PhoneType;
}

int Phone::setPhoneType(EPhoneType newPhoneType)
{
	this->m_PhoneType = newPhoneType;
	return 0;
}
