#pragma once

enum EPhoneType 
{
	Personal,
	Home,
	Work
};

class Phone
{
public:
	Phone();
	~Phone();

	int getNumber(char container[30]);
	int setNumber(char container[30]);
	EPhoneType getPhoneType();
	int setPhoneType(EPhoneType newPhoneType);
private:
	char m_Number[30];
	EPhoneType m_PhoneType;
};

