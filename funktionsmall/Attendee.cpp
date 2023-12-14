#include "Attendee.h"

Attendee::Attendee(string name, bool gender)
	: name(name), gender(gender)
{
}

Attendee::Attendee()
	: name("?"), gender(0)
{
}

Attendee::~Attendee()
{
}

bool Attendee::contains(string str) const
{
	if (toString().find(str) != string::npos) return true;
	return false;
}

string Attendee::toString() const
{
	return "Name: " + this->name + "\nGender: " + to_string(this->gender);
}

string Attendee::getName() const
{
	return this->name;
}

//void Attendee::setName(const string& name)
//{
//	this->name = name;
//}
//
//void Attendee::setGender(bool gender)
//{
//	this->gender = gender;
//}
