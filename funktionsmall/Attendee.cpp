#include "Attendee.h"

string Attendee::toString() const
{
	return "Name: " + this->name + "\nGender: " + to_string(this->gender);
}

string Attendee::getName() const
{
	return this->name;
}
