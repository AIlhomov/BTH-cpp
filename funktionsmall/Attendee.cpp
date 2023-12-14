#include "Attendee.h"

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
